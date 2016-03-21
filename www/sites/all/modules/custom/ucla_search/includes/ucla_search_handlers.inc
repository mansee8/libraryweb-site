<?php
/**
 * @file
 * Defines routines for searching various custom targets.
 */

/**
 * Route searches to appropriate target handler.
 */
function ucla_search_route_search($search_info) {
  // Docs say drupal_goto is for "local" URLs but works fine with absolute off-site URLs too
  // ... is there a better choice? Maybe drupal_http_request for GET/POST consistency?

  switch ($search_info['search_target']) {
    case "catalog":
      ucla_search_catalog($search_info);
      break;
    case "articlesplus":
      summon_articlesplus($search_info);
      break;
    case "database":
      ucla_search_database($search_info);
      break;
    case "guides":
      ucla_search_guides($search_info);
      break;
    case "melvyl":
      ucla_search_melvyl($search_info);
      break;
    case "oac":
      ucla_search_oac($search_info);
      break;
    case "sfx":
      ucla_search_sfx($search_info);
      break;
    case "site":
      ucla_search_site($search_info);
      break;
    default:
      // TODO: change this to write error to log
      drupal_set_message("WHAT???");
  }
}

function ucla_search_catalog($search_info) {
  $target_url = 'http://catalog.library.ucla.edu/vwebv/search?searchArg=';
  // Replace space with plus, but do NOT url-encode the terms
  $target_url .= str_replace(' ', '+', $search_info['search_terms']);
  // Start building remaining parameters
  $extra_params = '&searchCode=';
  // Default to keyword if none provided
  $search_code = 'GKEY^*';
  if ($search_info['search_code']) {
    $search_code = $search_info['search_code'];
  }
  // search_code must be url-encoded
  $extra_params .= drupal_encode_path($search_code);
  // Add remaining parameters needed by catalog
  $extra_params .= '&searchType=1&page.search.search.button=Search';
  // Extra params must be after the search terms in the URL
  $target_url .= $extra_params;
  drupal_goto($path = $target_url);
}

function summon_articlesplus($search_info) {
  $target_url = 'http://ucla.summon.serialssolutions.com/#!/search';
  $extra_params = '?ho=t&l=en';
  if ( isset($search_info['search_limit']) ) {
    $extra_params .= '&fvf=' . $search_info['search_limit'];
  }
  $extra_params .= '&q=' . $search_info['search_terms'];
  $target_url .= $extra_params;
  drupal_goto($path = $target_url);
}

function ucla_search_database($search_info) {
  $target_url = 'http://guides.library.ucla.edu/az.php';
  // Replace space with plus, but do NOT url encode the terms
  $target_url .= '?q=' . str_replace(' ', '+', $search_info['search_terms']);
  drupal_goto($path = $target_url);
}

function ucla_search_guides($search_info) {
  $target_url = 'http://guides.library.ucla.edu/srch.php?q=';
  // Replace space with plus, but do NOT url encode the terms
  $target_url .= str_replace(' ', '+', $search_info['search_terms']);
  drupal_goto($path = $target_url);
}

function ucla_search_melvyl($search_info) {
  $target_url = 'http://ucla.worldcat.org/search?qt=wc_org_ucla&scope=1&q=';
  // Don't replace space with plus - URL-encode as-is
  $target_url .= drupal_encode_path($search_info['search_terms']);
  drupal_goto($path = $target_url);
}

function ucla_search_oac($search_info) {
  // Online Archive of California
  $target_url = 'http://www.oac.cdlib.org/search?query=';
  // Replace space with plus, but do NOT url encode the terms
  $target_url .= str_replace(' ', '+', $search_info['search_terms']);
  drupal_goto($path = $target_url);
}

function ucla_search_sfx($search_info) {
  $target_url = 'http://ucelinks.cdlib.org:8888/sfx_ucla/az/default';
  $extra_params = '?param_perform_value=searchTitle&param_jumpToPage_value=&param_type_value=textSearch&param_chinese_checkbox_active=1&param_chinese_checkbox_value=0';
  $target_url .= $extra_params;
  // Replace space with plus, but do NOT url encode the terms
  $target_url .= '&param_pattern_value=' . str_replace(' ', '+', $search_info['search_terms']);
  if ($search_info['search_type']) {
    $target_url .= '&param_textSearchType_value=' . map_sfx_search_type($search_info['search_type']);
  }
  drupal_goto($path = $target_url);
}

function ucla_search_site($search_info) {
  $target_url = 'search/node/' . trim($search_info['search_terms']);
  drupal_goto($path = $target_url);
}

// Utility functions

function map_database_search_type($ucla_value) {
  // ucla form value => databases required value
  $mappings = array (
    'contains' => 'contains',
    'starts' => 'starts',
  );
  return $mappings[$ucla_value];
}

function map_sfx_search_type($ucla_value) {
  // ucla form value => sfx required value
  $mappings = array (
    'within' => 'contains',
    'exact' => 'exactMatch',
    'starts' => 'startsWith',
  );
  return $mappings[$ucla_value];
}
