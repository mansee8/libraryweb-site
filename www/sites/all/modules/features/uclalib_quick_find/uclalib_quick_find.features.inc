<?php
/**
 * @file
 * uclalib_quick_find.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function uclalib_quick_find_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "bean_admin_ui" && $api == "bean") {
    return array("version" => "5");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function uclalib_quick_find_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
