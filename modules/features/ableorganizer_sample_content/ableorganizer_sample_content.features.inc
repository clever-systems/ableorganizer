<?php
/**
 * @file
 * ableorganizer_sample_content.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ableorganizer_sample_content_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "deploy" && $api == "deploy_plans") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ableorganizer_sample_content_node_info() {
  $items = array(
    'test' => array(
      'name' => t('test'),
      'base' => 'node_content',
      'description' => t('this is a test'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
