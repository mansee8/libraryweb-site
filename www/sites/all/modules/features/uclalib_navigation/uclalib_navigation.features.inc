<?php
/**
 * @file
 * uclalib_navigation.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function uclalib_navigation_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}