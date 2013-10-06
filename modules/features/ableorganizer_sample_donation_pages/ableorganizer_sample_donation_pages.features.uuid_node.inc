<?php
/**
 * @file
 * ableorganizer_sample_donation_pages.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function ableorganizer_sample_donation_pages_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 1,
  'title' => 'Fundraiser',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '80dd462e-0a8a-4023-acbd-0672e5340b59',
  'type' => 'cmcd_page',
  'language' => 'und',
  'created' => 1377003618,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '2b66066f-0a98-43b7-bc0e-a74c6e4130e6',
  'revision_uid' => 1,
  'field_cmcd_body' => array(
    'und' => array(
      0 => array(
        'value' => 'This page is for collecting online donations for an upcoming fundraiser. It uses a profile form that provides buttons for storing recommended amounts. 

The amounts displayed as buttons are set within the content type, using the Recommended donation amounts option. ',
        'format' => 'filtered_html',
        'safe_value' => '<p>This page is for collecting online donations for an upcoming fundraiser. It uses a profile form that provides buttons for storing recommended amounts. </p>
<p>The amounts displayed as buttons are set within the content type, using the Recommended donation amounts option.</p>
',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2013-08-20 09:00:18 -0400',
  'url_alias' => 'donate/fundraiser',
  'crm_core_profile_node_config' => array(
    'nid' => '2b66066f-0a98-43b7-bc0e-a74c6e4130e6',
    'use_profile' => 1,
    'profile_name' => 'ao_fundraiser_form',
    'display_profile' => 0,
    'inline_title' => 'Fundraiser form',
  ),
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Annual Appeal',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '581b0cc7-1736-49ec-b699-f86d971f3e13',
  'type' => 'cmcd_page',
  'language' => 'und',
  'created' => 1377003610,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '3e876d31-271a-47da-8564-2bb667953ade',
  'revision_uid' => 1,
  'field_cmcd_body' => array(
    'und' => array(
      0 => array(
        'value' => 'This page is for collecting donations to the annual appeal. The amount of the annual appeal is set within the content type, using the Recommended donation amounts option on the CRM Core Donation tab.',
        'format' => 'filtered_html',
        'safe_value' => '<p>This page is for collecting donations to the annual appeal. The amount of the annual appeal is set within the content type, using the Recommended donation amounts option on the CRM Core Donation tab.</p>
',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2013-08-20 09:00:10 -0400',
  'url_alias' => 'donate/annual-appeal',
  'crm_core_profile_node_config' => array(
    'nid' => '3e876d31-271a-47da-8564-2bb667953ade',
    'use_profile' => 1,
    'profile_name' => 'ao_annual_appeal_form',
    'display_profile' => 0,
    'inline_title' => 'Annual appeal form',
  ),
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Thank you',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '03f0b0a2-5fc7-4fcc-b23c-33d1290ea518',
  'type' => 'page',
  'language' => 'und',
  'created' => 1377003154,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '7c28ea35-4da6-4316-91ca-6e5ca19f79f1',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Thank you for signing up!',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Thank you for signing up!</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2013-08-20 08:52:34 -0400',
  'url_alias' => 'donate/thank_you',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Donate',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '46cbc5bb-62db-406c-b573-d178963802f5',
  'type' => 'page',
  'language' => 'und',
  'created' => 1380110548,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'c0bbb31c-980f-4732-ac60-c0931c74448e',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<a href="donate/online-donation">Online Donation</a>
<a href="donate/annual-appeal">Annual Appeal</a>
<a href="donate/fundraiser">Fundraiser</a>
<a href="donate/walkup">Walk Up Donation</a>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p><a href="donate/online-donation">Online Donation</a><br /><a href="donate/annual-appeal">Annual Appeal</a><br /><a href="donate/fundraiser">Fundraiser</a><br /><a href="donate/walkup">Walk Up Donation</a></p>
',
        'safe_summary' => '',
      ),
    ),
  ),
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2013-09-25 08:02:28 -0400',
  'url_alias' => 'donate',
  'new_menu' => array(
    'menu_name' => 'main-menu',
    'mlid' => 1638,
    'plid' => 0,
    'link_path' => 'node/126',
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
    'p1' => 1638,
    'p2' => 0,
    'p3' => 0,
    'p4' => 0,
    'p5' => 0,
    'p6' => 0,
    'p7' => 0,
    'p8' => 0,
    'p9' => 0,
    'updated' => 0,
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
    'href' => 'node/126',
    'access' => TRUE,
    'localized_options' => array(),
    'parent_depth_limit' => 8,
  ),
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Online Donation Page',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'ede867c0-8b96-429d-a247-c0759f635ff2',
  'type' => 'cmcd_page',
  'language' => 'und',
  'created' => 1377003603,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'e5742cc9-af29-4b1a-930b-24921ae633d4',
  'revision_uid' => 1,
  'field_cmcd_body' => array(
    'und' => array(
      0 => array(
        'value' => 'This is a general online donation page. It includes a form that allows users to set any donation amount they wish. The default amount can be set in the CRM Core Donation tab.',
        'format' => 'filtered_html',
        'safe_value' => '<p>This is a general online donation page. It includes a form that allows users to set any donation amount they wish. The default amount can be set in the CRM Core Donation tab.</p>
',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2013-08-20 09:00:03 -0400',
  'url_alias' => 'donate/online-donation',
  'crm_core_profile_node_config' => array(
    'nid' => 'e5742cc9-af29-4b1a-930b-24921ae633d4',
    'use_profile' => 1,
    'profile_name' => 'ao_donation_form',
    'display_profile' => 0,
    'inline_title' => 'Donation form',
  ),
);
  return $nodes;
}
