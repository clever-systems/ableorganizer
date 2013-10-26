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
      'uri' => 'node/2b66066f-0a98-43b7-bc0e-a74c6e4130e6',
      'cause' => FALSE,
    ),
    'cid' => 0,
    'comment' => 1,
    'comment_count' => 0,
    'crm_core_donation_node_config' => array(
      'nid' => '2b66066f-0a98-43b7-bc0e-a74c6e4130e6',
      'thanks_email' => '',
      'recommended_amounts' => '10,25,50,100',
    ),
    'crm_core_profile_node_config' => array(
      'nid' => '2b66066f-0a98-43b7-bc0e-a74c6e4130e6',
      'use_profile' => 1,
      'profile_name' => 'ao_fundraiser_form',
      'display_profile' => 0,
      'inline_title' => 'Fundraiser form',
    ),
    'field_cmcd_body' => array(
      'und' => array(
        0 => array(
          'format' => 'filtered_html',
          'value' => 'This page is for collecting online donations for an upcoming fundraiser. It uses a profile form that provides buttons for storing recommended amounts.

The amounts displayed as buttons are set within the content type, using the Recommended donation amounts option. ',
        ),
      ),
    ),
    'language' => 'und',
    'last_comment_name' => NULL,
    'last_comment_uid' => 1,
    'log' => '',
    'promote' => 0,
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
    'status' => 1,
    'sticky' => 0,
    'title' => 'Fundraiser',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'cmcd_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'donate/fundraiser',
        'language' => 'und',
      ),
    ),
    'uuid' => '2b66066f-0a98-43b7-bc0e-a74c6e4130e6',
  );
  $entities['cmcd_sample_content_dp'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/3e876d31-271a-47da-8564-2bb667953ade',
      'cause' => FALSE,
    ),
    'cid' => 0,
    'comment' => 1,
    'comment_count' => 0,
    'crm_core_donation_node_config' => array(
      'nid' => '3e876d31-271a-47da-8564-2bb667953ade',
      'thanks_email' => '',
      'recommended_amounts' => '10,25,50,100',
    ),
    'crm_core_profile_node_config' => array(
      'nid' => '3e876d31-271a-47da-8564-2bb667953ade',
      'use_profile' => 1,
      'profile_name' => 'ao_annual_appeal_form',
      'display_profile' => 0,
      'inline_title' => 'Annual appeal form',
    ),
    'field_cmcd_body' => array(
      'und' => array(
        0 => array(
          'format' => 'filtered_html',
          'value' => 'This page is for collecting donations to the annual appeal. The amount of the annual appeal is set within the content type, using the Recommended donation amounts option on the CRM Core Donation tab.',
        ),
      ),
    ),
    'language' => 'und',
    'last_comment_name' => NULL,
    'last_comment_uid' => 1,
    'log' => '',
    'promote' => 0,
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
    'status' => 1,
    'sticky' => 0,
    'title' => 'Annual Appeal',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'cmcd_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'donate/annual-appeal',
        'language' => 'und',
      ),
    ),
    'uuid' => '3e876d31-271a-47da-8564-2bb667953ade',
  );
  $entities['cmcd_sample_content_dp'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/7c28ea35-4da6-4316-91ca-6e5ca19f79f1',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'filtered_html',
          'summary' => '',
          'value' => 'Thank you for signing up!',
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
    'title' => 'Thank you',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'donate/thank-you',
        'language' => 'und',
      ),
    ),
    'uuid' => '7c28ea35-4da6-4316-91ca-6e5ca19f79f1',
  );
  $entities['cmcd_sample_content_dp'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/d2ce8616-ab53-4c71-8c87-9c438c6a1cad',
      'cause' => FALSE,
    ),
    'cid' => 0,
    'comment' => 1,
    'comment_count' => 0,
    'crm_core_donation_node_config' => array(
      'nid' => 'd2ce8616-ab53-4c71-8c87-9c438c6a1cad',
      'thanks_email' => '',
      'recommended_amounts' => '10,25,50,100',
    ),
    'crm_core_profile_node_config' => array(
      'nid' => 'd2ce8616-ab53-4c71-8c87-9c438c6a1cad',
      'use_profile' => 1,
      'profile_name' => 'ao_walk_up_donation',
      'display_profile' => 1,
      'inline_title' => '',
    ),
    'field_cmcd_body' => array(),
    'language' => 'und',
    'last_comment_name' => NULL,
    'last_comment_uid' => 1,
    'log' => '',
    'promote' => 0,
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
    'status' => 1,
    'sticky' => 0,
    'title' => 'Walk Up Donation',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'cmcd_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'donate/walkup',
        'language' => 'und',
      ),
    ),
    'uuid' => 'd2ce8616-ab53-4c71-8c87-9c438c6a1cad',
  );
  $entities['cmcd_sample_content_dp'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/e5742cc9-af29-4b1a-930b-24921ae633d4',
      'cause' => FALSE,
    ),
    'cid' => 0,
    'comment' => 1,
    'comment_count' => 0,
    'crm_core_donation_node_config' => array(
      'nid' => 'e5742cc9-af29-4b1a-930b-24921ae633d4',
      'thanks_email' => '',
      'recommended_amounts' => '10,25,50,100',
    ),
    'crm_core_profile_node_config' => array(
      'nid' => 'e5742cc9-af29-4b1a-930b-24921ae633d4',
      'use_profile' => 1,
      'profile_name' => 'ao_donation_form',
      'display_profile' => 0,
      'inline_title' => 'Donation form',
    ),
    'field_cmcd_body' => array(
      'und' => array(
        0 => array(
          'format' => 'filtered_html',
          'value' => 'This is a general online donation page. It includes a form that allows users to set any donation amount they wish. The default amount can be set in the CRM Core Donation tab.',
        ),
      ),
    ),
    'language' => 'und',
    'last_comment_name' => NULL,
    'last_comment_uid' => 1,
    'log' => '',
    'promote' => 0,
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
    'status' => 1,
    'sticky' => 0,
    'title' => 'Online Donation Page',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'cmcd_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'donate/online-donation',
        'language' => 'und',
      ),
    ),
    'uuid' => 'e5742cc9-af29-4b1a-930b-24921ae633d4',
  );

  return $entities;
}
