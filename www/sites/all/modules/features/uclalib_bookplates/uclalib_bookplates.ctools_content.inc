<?php
/**
 * @file
 * uclalib_bookplates.ctools_content.inc
 */

/**
 * Implements hook_default_ctools_custom_content().
 */
function uclalib_bookplates_default_ctools_custom_content() {
  $export = array();

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'bookplates_breadcrumbs';
  $content->admin_title = 'Back to Bookplates breadcrumbs';
  $content->admin_description = '';
  $content->category = '';
  $content->settings = array(
    'admin_title' => 'Back to Bookplates breadcrumbs',
    'title' => '',
    'body' => '<p><a href="/bookplates">&lt; All Bookplates</a></p>
',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $export['bookplates_breadcrumbs'] = $content;

  return $export;
}
