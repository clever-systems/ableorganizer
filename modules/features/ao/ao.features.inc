<?php
/**
 * @file
 * ao.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ao_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "openlayers" && $api == "openlayers_maps") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ao_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_fontyourface_features_default_font().
 */
function ao_fontyourface_features_default_font() {
  return array(
    'Cabin 500 (latin)' => array(
      'name' => 'Cabin 500 (latin)',
      'enabled' => 1,
      'url' => 'http://www.google.com/webfonts/family?family=Cabin&subset=latin#500',
      'provider' => 'google_fonts_api',
      'css_selector' => 'h1, h2, h3, h4, h5, h6',
      'css_family' => 'Cabin',
      'css_style' => 'normal',
      'css_weight' => 500,
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:9:"Cabin:500";s:6:"subset";s:5:"latin";}',
    ),
    'Cabin regular (latin)' => array(
      'name' => 'Cabin regular (latin)',
      'enabled' => 1,
      'url' => 'http://www.google.com/webfonts/family?family=Cabin&subset=latin#regular',
      'provider' => 'google_fonts_api',
      'css_selector' => 'body',
      'css_family' => 'Cabin',
      'css_style' => 'normal',
      'css_weight' => 'normal',
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:13:"Cabin:regular";s:6:"subset";s:5:"latin";}',
    ),
  );
}
