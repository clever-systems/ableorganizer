<?php
/**
 * @file
 * ableorganizer_sample_donation_pages.box.inc
 */

/**
 * Implements hook_default_box().
 */
function ableorganizer_sample_donation_pages_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'ao_donate_header';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'AO Donate Header';
  $box->options = array(
    'body' => array(
      'value' => '<h2>Donate</h2>',
      'format' => 'full_html',
    ),
  );
  $export['ao_donate_header'] = $box;

  return $export;
}
