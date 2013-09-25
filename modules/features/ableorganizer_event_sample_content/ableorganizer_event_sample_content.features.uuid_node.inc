<?php
/**
 * @file
 * ableorganizer_event_sample_content.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function ableorganizer_event_sample_content_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 1,
  'title' => 'Pepperhill Women in Law Anniversary Dinner ',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'a372d0b3-d31b-4fa1-ab80-2aeeac313dc7',
  'type' => 'cmcev_event',
  'language' => 'und',
  'created' => 1378223591,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '37106c78-84c8-4e74-a387-5c04b03f5375',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<br><strong>We invite you to join us to celebrate the 60th anniversary of women being accepted into Pepperhill University\'s School of Law. We will have a variety of high-profile speakers and Pepperhill Alumni in attendance. To purchase tickets please fill out the form below. Attire is formal.<strong></br> ',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p><br /><strong>We invite you to join us to celebrate the 60th anniversary of women being accepted into Pepperhill University\'s School of Law. We will have a variety of high-profile speakers and Pepperhill Alumni in attendance. To purchase tickets please fill out the form below. Attire is formal.<strong> </strong></strong></p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_cmcev_date' => array(
    'und' => array(
      0 => array(
        'value' => '2013-09-01 09:00:00',
        'value2' => '2013-09-06 19:00:00',
        'timezone' => 'Europe/Helsinki',
        'timezone_db' => 'UTC',
        'date_type' => 'datetime',
      ),
    ),
  ),
  'field_cmcev_location' => array(
    'und' => array(
      0 => array(
        'country' => 'US',
        'administrative_area' => 'CA',
        'sub_administrative_area' => NULL,
        'locality' => 'Malibu',
        'dependent_locality' => NULL,
        'postal_code' => 90264,
        'thoroughfare' => 'Malibu Hill Hotel',
        'premise' => '123 Ocean Drive',
        'sub_premise' => NULL,
        'organisation_name' => NULL,
        'name_line' => NULL,
        'first_name' => NULL,
        'last_name' => NULL,
        'data' => NULL,
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
  'last_comment_uid' => 0,
  'comment_count' => 0,
  'name' => '',
  'picture' => 0,
  'data' => NULL,
  'date' => '2013-09-03 18:53:11 +0300',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Breakfast with Lowell Katz',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '8e58a3d6-a1e0-4c61-b6ec-f38eea599763',
  'type' => 'cmcev_event',
  'language' => 'und',
  'created' => 1378222159,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '52a80050-d98f-4bbf-90e8-9526dd3c77a1',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<br><strong>Lowell Katz is a progressive leader with an unrivaled and unmatched record of results. Please join us at the event below to meet Lowell, and help send him to Washington, D.C. next year!</strong></br>

<em><center>Contributions to Lowell Katz for Congress are not tax deductible.</center></em><br></br> 

 ',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p><br /><strong>Lowell Katz is a progressive leader with an unrivaled and unmatched record of results. Please join us at the event below to meet Lowell, and help send him to Washington, D.C. next year!</strong></p>
<p><em><center>Contributions to Lowell Katz for Congress are not tax deductible.</center></em><br /></p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_cmcev_date' => array(
    'und' => array(
      0 => array(
        'value' => '2013-09-07 09:00:00',
        'value2' => '2013-09-12 19:00:00',
        'timezone' => 'Europe/Helsinki',
        'timezone_db' => 'UTC',
        'date_type' => 'datetime',
      ),
    ),
  ),
  'field_cmcev_location' => array(
    'und' => array(
      0 => array(
        'country' => 'US',
        'administrative_area' => 'TX',
        'sub_administrative_area' => NULL,
        'locality' => 'Luckenbach',
        'dependent_locality' => NULL,
        'postal_code' => 78647,
        'thoroughfare' => 'Billy\'s BBQ Shack',
        'premise' => '123 Main Street',
        'sub_premise' => NULL,
        'organisation_name' => NULL,
        'name_line' => NULL,
        'first_name' => NULL,
        'last_name' => NULL,
        'data' => NULL,
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
  'last_comment_uid' => 0,
  'comment_count' => 0,
  'name' => '',
  'picture' => 0,
  'data' => NULL,
  'date' => '2013-09-03 18:29:19 +0300',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Thank you',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'a224a165-00e0-49db-b643-7de512d58719',
  'type' => 'page',
  'language' => 'und',
  'created' => 1378301890,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '88e4e269-7dff-48ef-a527-c109f2e9ca6f',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Thank you for registration!',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Thank you for registration!</p>
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
  'last_comment_uid' => 0,
  'comment_count' => 0,
  'name' => '',
  'picture' => 0,
  'data' => NULL,
  'date' => '2013-09-04 16:38:10 +0300',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Aids Walk Luckenbach',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '0d135c46-ea41-4ef1-b633-e310a75103f5',
  'type' => 'cmcev_event',
  'language' => 'und',
  'created' => 1378223370,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '8cbf5460-9633-4fcd-a730-c5832c19e5f0',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<br><strong>Aids Walk Luckenbach is a fundraising walk and 5k timed run to benefit AIDS research in Luckenbach. Fill out the form below to become an event sponsor!</strong></br>',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p><br /><strong>Aids Walk Luckenbach is a fundraising walk and 5k timed run to benefit AIDS research in Luckenbach. Fill out the form below to become an event sponsor!</strong></p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_cmcev_date' => array(
    'und' => array(
      0 => array(
        'value' => '2013-09-13 09:00:00',
        'value2' => '2013-09-18 19:00:00',
        'timezone' => 'Europe/Helsinki',
        'timezone_db' => 'UTC',
        'date_type' => 'datetime',
      ),
    ),
  ),
  'field_cmcev_location' => array(
    'und' => array(
      0 => array(
        'country' => 'US',
        'administrative_area' => 'TX',
        'sub_administrative_area' => NULL,
        'locality' => 'Luckenbach',
        'dependent_locality' => NULL,
        'postal_code' => 78647,
        'thoroughfare' => '123 Main Street',
        'premise' => '',
        'sub_premise' => NULL,
        'organisation_name' => NULL,
        'name_line' => NULL,
        'first_name' => NULL,
        'last_name' => NULL,
        'data' => NULL,
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
  'last_comment_uid' => 0,
  'comment_count' => 0,
  'name' => '',
  'picture' => 0,
  'data' => NULL,
  'date' => '2013-09-03 18:49:30 +0300',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Health and Resource Fair',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '977a0ebd-c450-4ad9-a240-f82e582b0138',
  'type' => 'cmcev_event',
  'language' => 'und',
  'created' => 1378221661,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'c4e0254b-e193-4f95-b843-fde40151fd81',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<br><strong>Join us this Saturday where over 100 local organizations will be on hand to provide free services including free blood pressure testing, dental screenings, flu shots and more!</strong></br>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p><br /><strong>Join us this Saturday where over 100 local organizations will be on hand to provide free services including free blood pressure testing, dental screenings, flu shots and more!</strong></p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_cmcev_date' => array(
    'und' => array(
      0 => array(
        'value' => '2013-09-19 09:00:00',
        'value2' => '2013-09-24 19:00:00',
        'timezone' => 'Europe/Helsinki',
        'timezone_db' => 'UTC',
        'date_type' => 'datetime',
      ),
    ),
  ),
  'field_cmcev_location' => array(
    'und' => array(
      0 => array(
        'country' => 'US',
        'administrative_area' => 'TX',
        'sub_administrative_area' => NULL,
        'locality' => 'Luckenbach',
        'dependent_locality' => NULL,
        'postal_code' => 78647,
        'thoroughfare' => '123 Main Street',
        'premise' => '',
        'sub_premise' => NULL,
        'organisation_name' => NULL,
        'name_line' => NULL,
        'first_name' => NULL,
        'last_name' => NULL,
        'data' => NULL,
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
  'last_comment_uid' => 0,
  'comment_count' => 0,
  'name' => '',
  'picture' => 0,
  'data' => NULL,
  'date' => '2013-09-03 18:21:01 +0300',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Tuesday Phonebank',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '5a646654-27b7-4511-b4d4-77e75b3e274b',
  'type' => 'cmcev_event',
  'language' => 'und',
  'created' => 1379613127,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'e340d2ab-485b-4e68-b35c-c4e07a7b80c5',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<br><strong>Come phonebank with us this Tuesday and help ensure more progressive leaders have a voice in Washington!</strong></br>',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p><br /><strong>Come phonebank with us this Tuesday and help ensure more progressive leaders have a voice in Washington!</strong></p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_cmcev_date' => array(
    'und' => array(
      0 => array(
        'value' => '2013-09-25 09:00:00',
        'value2' => '2013-09-30 19:00:00',
        'timezone' => 'Europe/Helsinki',
        'timezone_db' => 'UTC',
        'date_type' => 'datetime',
      ),
    ),
  ),
  'field_cmcev_location' => array(
    'und' => array(
      0 => array(
        'country' => 'US',
        'administrative_area' => 'TX',
        'sub_administrative_area' => NULL,
        'locality' => 'Luckenbach',
        'dependent_locality' => NULL,
        'postal_code' => 78647,
        'thoroughfare' => '123 Main Street',
        'premise' => '',
        'sub_premise' => NULL,
        'organisation_name' => NULL,
        'name_line' => NULL,
        'first_name' => NULL,
        'last_name' => NULL,
        'data' => NULL,
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
  'last_comment_uid' => 0,
  'comment_count' => 0,
  'name' => '',
  'picture' => 0,
  'data' => NULL,
  'date' => '2013-09-19 20:52:07 +0300',
);
  return $nodes;
}
