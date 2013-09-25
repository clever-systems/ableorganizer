<?php
/**
 * @file
 * ableorganizer_petition_sample_content.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ableorganizer_petition_sample_content_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'crm_core_petition_show_counter';
  $strongarm->value = 1;
  $export['crm_core_petition_show_counter'] = $strongarm;

  return $export;
}
