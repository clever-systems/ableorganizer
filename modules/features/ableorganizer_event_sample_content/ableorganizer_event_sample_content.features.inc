<?php
/**
 * @file
 * ableorganizer_event_sample_content.features.inc
 */

/**
 * Implements hook_commerce_product_default_types().
 */
function ableorganizer_event_sample_content_commerce_product_default_types() {
  $items = array(
    'event_registration' => array(
      'type' => 'event_registration',
      'name' => 'Event registration',
      'description' => '',
      'help' => '',
      'revision' => 0,
    ),
  );
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function ableorganizer_event_sample_content_ctools_plugin_api($module = NULL, $api = NULL) {
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
function ableorganizer_event_sample_content_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
