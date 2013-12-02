<?php
/**
 * @file
 * ableorganizer_sample_content.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ableorganizer_sample_content_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-getting-started_configuring-activity-records:node/52
  $menu_links['menu-getting-started_configuring-activity-records:node/52'] = array(
    'menu_name' => 'menu-getting-started',
    'link_path' => 'node/52',
    'router_path' => 'node/%',
    'link_title' => 'Configuring activity records',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-getting-started_configuring-activity-records:node/52',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-getting-started_configuring-bulk-email:node/49
  $menu_links['menu-getting-started_configuring-bulk-email:node/49'] = array(
    'menu_name' => 'menu-getting-started',
    'link_path' => 'node/49',
    'router_path' => 'node/%',
    'link_title' => 'Configuring bulk email',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-getting-started_configuring-bulk-email:node/49',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-getting-started_configuring-payment-processors:node/50
  $menu_links['menu-getting-started_configuring-payment-processors:node/50'] = array(
    'menu_name' => 'menu-getting-started',
    'link_path' => 'node/50',
    'router_path' => 'node/%',
    'link_title' => 'Configuring payment processors',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-getting-started_configuring-payment-processors:node/50',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: menu-getting-started_configuring-relationships:node/53
  $menu_links['menu-getting-started_configuring-relationships:node/53'] = array(
    'menu_name' => 'menu-getting-started',
    'link_path' => 'node/53',
    'router_path' => 'node/%',
    'link_title' => 'Configuring relationships',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-getting-started_configuring-relationships:node/53',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-getting-started_getting-started-with-ableorganizer:node/47
  $menu_links['menu-getting-started_getting-started-with-ableorganizer:node/47'] = array(
    'menu_name' => 'menu-getting-started',
    'link_path' => 'node/47',
    'router_path' => 'node/%',
    'link_title' => 'Getting Started with AbleOrganizer',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-getting-started_getting-started-with-ableorganizer:node/47',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-getting-started_installing-ableorganizer:node/48
  $menu_links['menu-getting-started_installing-ableorganizer:node/48'] = array(
    'menu_name' => 'menu-getting-started',
    'link_path' => 'node/48',
    'router_path' => 'node/%',
    'link_title' => 'Installing AbleOrganizer',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-getting-started_installing-ableorganizer:node/48',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-getting-started_working-with-contact-records:node/51
  $menu_links['menu-getting-started_working-with-contact-records:node/51'] = array(
    'menu_name' => 'menu-getting-started',
    'link_path' => 'node/51',
    'router_path' => 'node/%',
    'link_title' => 'Working with contact records',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-getting-started_working-with-contact-records:node/51',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Configuring activity records');
  t('Configuring bulk email');
  t('Configuring payment processors');
  t('Configuring relationships');
  t('Getting Started with AbleOrganizer');
  t('Installing AbleOrganizer');
  t('Working with contact records');


  return $menu_links;
}
