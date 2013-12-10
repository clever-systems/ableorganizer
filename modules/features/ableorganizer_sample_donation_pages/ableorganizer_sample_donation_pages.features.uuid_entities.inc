<?php
/**
 * @file
 * ableorganizer_sample_donation_pages.features.uuid_entities.inc
 */

/**
 * Implements hook_uuid_default_entities().
 */
function ableorganizer_sample_donation_pages_uuid_default_entities() {
  $entities = array();

  $entities['cmcd_sample_content_dp'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/89d14933-399b-438d-bfbe-585dd8cfe124',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'full_html',
          'summary' => '',
          'value' => '<p>&nbsp;</p><p><a href="/donate/online-donation">Donate</a></p><p>&nbsp;</p><p><a href="/donate/annual-appeal">Join our Annual Appeal</a></p><p>&nbsp;</p><p><a href="/donate/fundraiser">Fundraiser</a></p><p>&nbsp;</p><p><a href="/donate/walkup">Walk up donations</a></p><p>&nbsp;</p><p>&nbsp;</p><p>&nbsp;</p><p>&nbsp;</p><p>&nbsp;</p><p>&nbsp;</p><p>&nbsp;</p>',
        ),
      ),
    ),
    'cid' => 0,
    'comment' => 1,
    'comment_count' => 0,
    'language' => 'und',
    'last_comment_name' => NULL,
    'last_comment_uid' => 1,
    'log' => '',
    'menu_link' => array(
      'menu_name' => 'main-menu',
      'mlid' => 1637,
      'plid' => 0,
      'link_path' => 'node/54',
      'router_path' => 'node/%',
      'link_title' => 'Donate',
      'options' => array(),
      'module' => 'menu',
      'hidden' => 0,
      'external' => 0,
      'has_children' => 0,
      'expanded' => 0,
      'weight' => 0,
      'depth' => 1,
      'customized' => 0,
      'p1' => 1637,
      'p2' => 0,
      'p3' => 0,
      'p4' => 0,
      'p5' => 0,
      'p6' => 0,
      'p7' => 0,
      'p8' => 0,
      'p9' => 0,
      'updated' => 0,
      'vid' => 709,
      'uuid' => 'd919297b-453f-4f6c-9574-42a1df7d47c9',
      'path' => 'node/%',
      'load_functions' => array(
        1 => 'node_load',
      ),
      'to_arg_functions' => '',
      'access_callback' => 'node_access',
      'access_arguments' => 'a:2:{i:0;s:4:"view";i:1;i:1;}',
      'page_callback' => 'node_page_view',
      'page_arguments' => 'a:1:{i:0;i:1;}',
      'delivery_callback' => '',
      'fit' => 2,
      'number_parts' => 2,
      'context' => 0,
      'tab_parent' => '',
      'tab_root' => 'node/%',
      'title' => 'Donate',
      'title_callback' => 'node_page_title',
      'title_arguments' => 'a:1:{i:0;i:1;}',
      'theme_callback' => '',
      'theme_arguments' => 'a:0:{}',
      'type' => 6,
      'description' => '',
      'position' => '',
      'include_file' => '',
      'link_weight' => 0,
      'href' => 'node/54',
      'access' => TRUE,
      'localized_options' => array(),
    ),
    'promote' => 0,
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'foaf:Document',
      ),
      'title' => array(
        'predicates' => array(
          0 => 'dc:title',
        ),
      ),
      'created' => array(
        'predicates' => array(
          0 => 'dc:date',
          1 => 'dc:created',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
      'changed' => array(
        'predicates' => array(
          0 => 'dc:modified',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
      'body' => array(
        'predicates' => array(
          0 => 'content:encoded',
        ),
      ),
      'uid' => array(
        'predicates' => array(
          0 => 'sioc:has_creator',
        ),
        'type' => 'rel',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'foaf:name',
        ),
      ),
      'comment_count' => array(
        'predicates' => array(
          0 => 'sioc:num_replies',
        ),
        'datatype' => 'xsd:integer',
      ),
      'last_activity' => array(
        'predicates' => array(
          0 => 'sioc:last_activity_date',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
    ),
    'status' => 1,
    'sticky' => 0,
    'title' => 'Donate',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'donate',
        'language' => 'und',
      ),
    ),
    'uuid' => '89d14933-399b-438d-bfbe-585dd8cfe124',
  );

  return $entities;
}
