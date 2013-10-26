<?php
/**
 * @file
 * ableorganizer_sample_event_pages.features.uuid_entities.inc
 */

/**
 * Implements hook_uuid_default_entities().
 */
function ableorganizer_sample_event_pages_uuid_default_entities() {
  $entities = array();

  $entities['cmce_sample_content_dp'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/37106c78-84c8-4e74-a387-5c04b03f5375',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'full_html',
          'summary' => '',
          'value' => 'We invite you to join us to celebrate the 60th anniversary of women being accepted into Pepperhill University\'s School of Law. We will have a variety of high-profile speakers and Pepperhill Alumni in attendance. To purchase tickets please fill out the form below. Attire is formal. ',
        ),
      ),
    ),
    'cid' => 0,
    'comment' => 1,
    'comment_count' => 0,
    'crm_core_event_node_config' => array(
      'nid' => '37106c78-84c8-4e74-a387-5c04b03f5375',
      'display_registrants' => 1,
      'thanks_email' => '',
      'tickets' => '',
      'max_registration' => 0,
    ),
    'crm_core_profile_data' => array(
      'commerce_items_cart_items' => array(),
    ),
    'crm_core_profile_node_config' => array(
      'nid' => '37106c78-84c8-4e74-a387-5c04b03f5375',
      'use_profile' => 1,
      'profile_name' => 'ao_cmcev_simple_quantity_form',
      'display_profile' => 0,
      'inline_title' => 'Registration form',
    ),
    'field_cmcev_date' => array(
      'und' => array(
        0 => array(
          'date_type' => 'datetime',
          'timezone' => 'UTC',
          'timezone_db' => 'UTC',
          'value' => '2013-10-01 09:00:00',
          'value2' => '2013-10-06 19:00:00',
        ),
      ),
    ),
    'field_cmcev_location' => array(
      'und' => array(
        0 => array(
          'administrative_area' => 'CA',
          'country' => 'US',
          'data' => NULL,
          'dependent_locality' => NULL,
          'first_name' => NULL,
          'last_name' => NULL,
          'locality' => 'Malibu',
          'name_line' => NULL,
          'organisation_name' => NULL,
          'postal_code' => 90264,
          'premise' => '123 Ocean Drive',
          'sub_administrative_area' => NULL,
          'sub_premise' => NULL,
          'thoroughfare' => 'Malibu Hill Hotel',
        ),
      ),
    ),
    'language' => 'und',
    'last_comment_name' => NULL,
    'last_comment_uid' => 0,
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
    'title' => 'Pepperhill Women in Law Anniversary Dinner ',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'cmcev_event',
    'uid' => 0,
    'url_alias' => array(
      0 => array(
        'alias' => 'events/multiple-ticket-levels-quantity',
        'language' => 'und',
      ),
    ),
    'uuid' => '37106c78-84c8-4e74-a387-5c04b03f5375',
  );
  $entities['cmce_sample_content_dp'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/52a80050-d98f-4bbf-90e8-9526dd3c77a1',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'full_html',
          'summary' => '',
          'value' => 'Lowell Katz is a progressive leader with an unrivaled and unmatched record of results. Please join us at the event below to meet Lowell, and help send him to Washington, D.C. next year!

Contributions to Lowell Katz for Congress are not tax deductible.

 ',
        ),
      ),
    ),
    'cid' => 0,
    'comment' => 1,
    'comment_count' => 0,
    'crm_core_event_node_config' => array(
      'nid' => '52a80050-d98f-4bbf-90e8-9526dd3c77a1',
      'display_registrants' => 1,
      'thanks_email' => '',
      'tickets' => '',
      'max_registration' => 0,
    ),
    'crm_core_profile_data' => array(),
    'crm_core_profile_node_config' => array(
      'nid' => '52a80050-d98f-4bbf-90e8-9526dd3c77a1',
      'use_profile' => 1,
      'profile_name' => 'ao_cmcev_simple_single_form',
      'display_profile' => 0,
      'inline_title' => 'Registration form',
    ),
    'field_cmcev_date' => array(
      'und' => array(
        0 => array(
          'date_type' => 'datetime',
          'timezone' => 'UTC',
          'timezone_db' => 'UTC',
          'value' => '2013-10-07 09:00:00',
          'value2' => '2013-10-12 19:00:00',
        ),
      ),
    ),
    'field_cmcev_location' => array(
      'und' => array(
        0 => array(
          'administrative_area' => 'TX',
          'country' => 'US',
          'data' => NULL,
          'dependent_locality' => NULL,
          'first_name' => NULL,
          'last_name' => NULL,
          'locality' => 'Luckenbach',
          'name_line' => NULL,
          'organisation_name' => NULL,
          'postal_code' => 78647,
          'premise' => '123 Main Street',
          'sub_administrative_area' => NULL,
          'sub_premise' => NULL,
          'thoroughfare' => 'Billy\'s BBQ Shack',
        ),
      ),
    ),
    'language' => 'und',
    'last_comment_name' => NULL,
    'last_comment_uid' => 0,
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
    'title' => 'Breakfast with Lowell Katz',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'cmcev_event',
    'uid' => 0,
    'url_alias' => array(
      0 => array(
        'alias' => 'events/single-ticket',
        'language' => 'und',
      ),
    ),
    'uuid' => '52a80050-d98f-4bbf-90e8-9526dd3c77a1',
  );
  $entities['cmce_sample_content_dp'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/88e4e269-7dff-48ef-a527-c109f2e9ca6f',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'filtered_html',
          'summary' => '',
          'value' => 'Thank you for registration!',
        ),
      ),
    ),
    'cid' => 0,
    'comment' => 1,
    'comment_count' => 0,
    'language' => 'und',
    'last_comment_name' => NULL,
    'last_comment_uid' => 0,
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
    'uid' => 0,
    'url_alias' => array(
      0 => array(
        'alias' => 'events/thank-you',
        'language' => 'und',
      ),
    ),
    'uuid' => '88e4e269-7dff-48ef-a527-c109f2e9ca6f',
  );
  $entities['cmce_sample_content_dp'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/8cbf5460-9633-4fcd-a730-c5832c19e5f0',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'full_html',
          'summary' => '',
          'value' => 'Aids Walk Luckenbach is a fundraising walk and 5k timed run to benefit AIDS research in Luckenbach. Fill out the form below to become an event sponsor!',
        ),
      ),
    ),
    'cid' => 0,
    'comment' => 1,
    'comment_count' => 0,
    'crm_core_event_node_config' => array(
      'nid' => '8cbf5460-9633-4fcd-a730-c5832c19e5f0',
      'display_registrants' => 1,
      'thanks_email' => '',
      'tickets' => '',
      'max_registration' => 0,
    ),
    'crm_core_profile_data' => array(
      'commerce_items_cart_items' => array(),
    ),
    'crm_core_profile_node_config' => array(
      'nid' => '8cbf5460-9633-4fcd-a730-c5832c19e5f0',
      'use_profile' => 1,
      'profile_name' => 'ao_cmcev_simple_many_form',
      'display_profile' => 0,
      'inline_title' => 'Registration form',
    ),
    'field_cmcev_date' => array(
      'und' => array(
        0 => array(
          'date_type' => 'datetime',
          'timezone' => 'UTC',
          'timezone_db' => 'UTC',
          'value' => '2013-10-13 09:00:00',
          'value2' => '2013-10-18 19:00:00',
        ),
      ),
    ),
    'field_cmcev_location' => array(
      'und' => array(
        0 => array(
          'administrative_area' => 'TX',
          'country' => 'US',
          'data' => NULL,
          'dependent_locality' => NULL,
          'first_name' => NULL,
          'last_name' => NULL,
          'locality' => 'Luckenbach',
          'name_line' => NULL,
          'organisation_name' => NULL,
          'postal_code' => 78647,
          'premise' => '',
          'sub_administrative_area' => NULL,
          'sub_premise' => NULL,
          'thoroughfare' => '123 Main Street',
        ),
      ),
    ),
    'language' => 'und',
    'last_comment_name' => NULL,
    'last_comment_uid' => 0,
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
    'title' => 'Aids Walk Luckenbach',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'cmcev_event',
    'uid' => 0,
    'url_alias' => array(
      0 => array(
        'alias' => 'events/multiple-ticket-level',
        'language' => 'und',
      ),
    ),
    'uuid' => '8cbf5460-9633-4fcd-a730-c5832c19e5f0',
  );
  $entities['cmce_sample_content_dp'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/c4e0254b-e193-4f95-b843-fde40151fd81',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'full_html',
          'summary' => '',
          'value' => 'Join us this Saturday where over 100 local organizations will be on hand to provide free services including free blood pressure testing, dental screenings, flu shots and more!
',
        ),
      ),
    ),
    'cid' => 0,
    'comment' => 1,
    'comment_count' => 0,
    'crm_core_event_node_config' => array(
      'nid' => 'c4e0254b-e193-4f95-b843-fde40151fd81',
      'display_registrants' => 1,
      'thanks_email' => '',
      'tickets' => '',
      'max_registration' => 0,
    ),
    'crm_core_profile_data' => array(),
    'crm_core_profile_node_config' => array(
      'nid' => 'c4e0254b-e193-4f95-b843-fde40151fd81',
      'use_profile' => 1,
      'profile_name' => 'ao_cmcev_simple_reg_form',
      'display_profile' => 0,
      'inline_title' => 'Registration form',
    ),
    'field_cmcev_date' => array(
      'und' => array(
        0 => array(
          'date_type' => 'datetime',
          'timezone' => 'UTC',
          'timezone_db' => 'UTC',
          'value' => '2013-10-19 09:00:00',
          'value2' => '2013-10-24 19:00:00',
        ),
      ),
    ),
    'field_cmcev_location' => array(
      'und' => array(
        0 => array(
          'administrative_area' => 'TX',
          'country' => 'US',
          'data' => NULL,
          'dependent_locality' => NULL,
          'first_name' => NULL,
          'last_name' => NULL,
          'locality' => 'Luckenbach',
          'name_line' => NULL,
          'organisation_name' => NULL,
          'postal_code' => 78647,
          'premise' => '',
          'sub_administrative_area' => NULL,
          'sub_premise' => NULL,
          'thoroughfare' => '123 Main Street',
        ),
      ),
    ),
    'language' => 'und',
    'last_comment_name' => NULL,
    'last_comment_uid' => 0,
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
    'title' => 'Health and Resource Fair',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'cmcev_event',
    'uid' => 0,
    'url_alias' => array(
      0 => array(
        'alias' => 'events/basic',
        'language' => 'und',
      ),
    ),
    'uuid' => 'c4e0254b-e193-4f95-b843-fde40151fd81',
  );
  $entities['cmce_sample_content_dp'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/e340d2ab-485b-4e68-b35c-c4e07a7b80c5',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'full_html',
          'summary' => '',
          'value' => 'Come phonebank with us this Tuesday and help ensure more progressive leaders have a voice in Washington!',
        ),
      ),
    ),
    'cid' => 0,
    'comment' => 1,
    'comment_count' => 0,
    'crm_core_event_node_config' => array(
      'nid' => 'e340d2ab-485b-4e68-b35c-c4e07a7b80c5',
      'display_registrants' => 1,
      'thanks_email' => '',
      'tickets' => '',
      'max_registration' => 0,
    ),
    'crm_core_profile_data' => array(),
    'crm_core_profile_node_config' => array(
      'nid' => 'e340d2ab-485b-4e68-b35c-c4e07a7b80c5',
      'use_profile' => 1,
      'profile_name' => 'ao_cmcev_simple_single_form',
      'display_profile' => 0,
      'inline_title' => 'Register Now',
    ),
    'field_cmcev_date' => array(
      'und' => array(
        0 => array(
          'date_type' => 'datetime',
          'timezone' => 'UTC',
          'timezone_db' => 'UTC',
          'value' => '2013-10-25 09:00:00',
          'value2' => '2013-10-30 19:00:00',
        ),
      ),
    ),
    'field_cmcev_location' => array(
      'und' => array(
        0 => array(
          'administrative_area' => 'TX',
          'country' => 'US',
          'data' => NULL,
          'dependent_locality' => NULL,
          'first_name' => NULL,
          'last_name' => NULL,
          'locality' => 'Luckenbach',
          'name_line' => NULL,
          'organisation_name' => NULL,
          'postal_code' => 78647,
          'premise' => '',
          'sub_administrative_area' => NULL,
          'sub_premise' => NULL,
          'thoroughfare' => '123 Main Street',
        ),
      ),
    ),
    'language' => 'und',
    'last_comment_name' => NULL,
    'last_comment_uid' => 0,
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
    'title' => 'Tuesday Phonebank',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'cmcev_event',
    'uid' => 0,
    'url_alias' => array(
      0 => array(
        'alias' => 'events/phonebank',
        'language' => 'und',
      ),
    ),
    'uuid' => 'e340d2ab-485b-4e68-b35c-c4e07a7b80c5',
  );

  return $entities;
}
