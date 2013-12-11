<?php
/**
 * @file
 * ableorganizer_sample_event_pages.box.inc
 */

/**
 * Implements hook_default_box().
 */
function ableorganizer_sample_event_pages_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'ao_event_header';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'AO Event Header';
  $box->options = array(
    'body' => array(
      'value' => '<h2>Events</h2>',
      'format' => 'full_html',
    ),
  );
  $export['ao_event_header'] = $box;

  return $export;
}
