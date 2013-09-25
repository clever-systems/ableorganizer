<?php
/**
 * @file
 * ableorganizer_petition_sample_content.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ableorganizer_petition_sample_content_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "crm_core_profile" && $api == "crm_core_profile") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ableorganizer_petition_sample_content_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
