<?php
/**
 * @file
 * ableorganizer_sample_content.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function ableorganizer_sample_content_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-getting-started.
  $menus['menu-getting-started'] = array(
    'menu_name' => 'menu-getting-started',
    'title' => 'Getting Started',
    'description' => 'Documentation for how to get started with AbleOrganizer.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Documentation for how to get started with AbleOrganizer.');
  t('Getting Started');


  return $menus;
}
