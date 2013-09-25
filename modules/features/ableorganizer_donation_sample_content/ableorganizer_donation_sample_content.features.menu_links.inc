<?php
/**
 * @file
 * ableorganizer_donation_sample_content.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ableorganizer_donation_sample_content_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:node/4
  $menu_links['main-menu:node/4'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/4',
    'router_path' => 'node/%',
    'link_title' => 'Donate',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Donate');


  return $menu_links;
}
