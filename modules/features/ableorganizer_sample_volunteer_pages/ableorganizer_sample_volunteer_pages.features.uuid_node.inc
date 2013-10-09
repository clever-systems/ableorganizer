<?php
/**
 * @file
 * ableorganizer_sample_volunteer_pages.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function ableorganizer_sample_volunteer_pages_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 1,
  'title' => 'Work with Homeless Animals',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'cab1d30a-54b1-423c-8c90-b4c5ac7f90d4',
  'type' => 'cmcv_volunteer',
  'language' => 'und',
  'created' => 1379536652,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '0b621efb-62fa-4312-b0bd-479c6d8d8be4',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'The animal shelter needs your help.

We are looking for volunteers in a variety of roles:
<ul>
<li> Animal Socializer: Work with the animals to make them more adoptable
<li> Adoption Counselor: Help people find the perfect animal to join their family
<li> Animal Care: Make sure our animals are fed and kept clean
</ul>

Come to our Volunteer Open House to learn more and sign up.',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>The animal shelter needs your help.</p>
<p>We are looking for volunteers in a variety of roles:</p>
<ul><li> Animal Socializer: Work with the animals to make them more adoptable
</li><li> Adoption Counselor: Help people find the perfect animal to join their family
</li><li> Animal Care: Make sure our animals are fed and kept clean
</li></ul><p>Come to our Volunteer Open House to learn more and sign up.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_cmcv_contact' => array(),
  'field_cmcv_date' => array(
    'und' => array(
      0 => array(
        'value' => 1386099000,
        'value2' => 1386099000,
        'timezone' => 'America/New_York',
        'timezone_db' => 'UTC',
        'date_type' => 'datestamp',
      ),
    ),
  ),
  'field_cmcv_location' => array(
    'und' => array(
      0 => array(
        'country' => 'US',
        'administrative_area' => 'DC',
        'sub_administrative_area' => NULL,
        'locality' => 'Washington',
        'dependent_locality' => NULL,
        'postal_code' => '',
        'thoroughfare' => '',
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
  'field_cmcv_roles' => array(
    'und' => array(
      0 => array(
        'value' => 'Animal Socializer, Adoption Counselor, Animal Care',
        'format' => NULL,
        'safe_value' => 'Animal Socializer, Adoption Counselor, Animal Care',
      ),
    ),
  ),
  'field_cmcv_slots' => array(
    'und' => array(
      0 => array(
        'value' => 36,
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
  'crm_core_profile_data' => array(),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2013-09-18 16:37:32 -0400',
  'url_alias' => 'volunteers/work-with-homeless-animals',
  'crm_core_profile_node_config' => array(
    'nid' => '0b621efb-62fa-4312-b0bd-479c6d8d8be4',
    'use_profile' => 1,
    'profile_name' => 'ao_volunteer_commitment_form',
    'display_profile' => 0,
    'inline_title' => 'Volunteer form',
  ),
  'crm_core_volunteer_node_config' => array(
    'nid' => '0b621efb-62fa-4312-b0bd-479c6d8d8be4',
    'wait_list' => 0,
    'sign_email' => '',
    'wait_email' => '',
  ),
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Keep Our Creek Clean',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'e15d897f-9dbc-43c0-92e1-205be12acd18',
  'type' => 'cmcv_volunteer',
  'language' => 'und',
  'created' => 1379605238,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '0d86ea2a-fb8a-4ec5-8a00-3361772433d3',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Join other members of our community in cleaning up the creek. The creek is an important habitat for native animals, and it is home to a variety of rare amphibians that are important to the ecosystem.

On Saturday, we\'ll be picking up trash and litter over a three mile stretch of creek. Come join us!
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Join other members of our community in cleaning up the creek. The creek is an important habitat for native animals, and it is home to a variety of rare amphibians that are important to the ecosystem.</p>
<p>On Saturday, we\'ll be picking up trash and litter over a three mile stretch of creek. Come join us!</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_cmcv_contact' => array(),
  'field_cmcv_date' => array(
    'und' => array(
      0 => array(
        'value' => 1382796000,
        'value2' => 1382796000,
        'timezone' => 'America/New_York',
        'timezone_db' => 'UTC',
        'date_type' => 'datestamp',
      ),
    ),
  ),
  'field_cmcv_location' => array(
    'und' => array(
      0 => array(
        'country' => 'US',
        'administrative_area' => 'DC',
        'sub_administrative_area' => NULL,
        'locality' => 'Washington',
        'dependent_locality' => NULL,
        'postal_code' => '',
        'thoroughfare' => '',
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
  'field_cmcv_roles' => array(),
  'field_cmcv_slots' => array(
    'und' => array(
      0 => array(
        'value' => 0,
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
  'crm_core_profile_data' => array(),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2013-09-19 11:40:38 -0400',
  'url_alias' => 'volunteers/keep-our-creek-clean',
  'crm_core_profile_node_config' => array(
    'nid' => '0d86ea2a-fb8a-4ec5-8a00-3361772433d3',
    'use_profile' => 1,
    'profile_name' => 'ao_volunteer_commitment_form',
    'display_profile' => 0,
    'inline_title' => 'Volunteer form',
  ),
  'crm_core_volunteer_node_config' => array(
    'nid' => '0d86ea2a-fb8a-4ec5-8a00-3361772433d3',
    'wait_list' => 0,
    'sign_email' => '',
    'wait_email' => '',
  ),
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'After School Tutors Needed',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'f4648f85-4015-4d15-b774-da11f67c2249',
  'type' => 'cmcv_volunteer',
  'language' => 'und',
  'created' => 1379606513,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '2a0e3955-18a5-4be1-a2c4-8dff6e05be73',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Make a difference in a child\'s life by helping them to succeed in school. We\'re looking for people who can aid fourth and fifth grade students in all subjects. Volunteers must be 18 or over.',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Make a difference in a child\'s life by helping them to succeed in school. We\'re looking for people who can aid fourth and fifth grade students in all subjects. Volunteers must be 18 or over.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_cmcv_contact' => array(
    'und' => array(
      0 => array(
        'value' => 'heytrellon@trellon.com',
        'format' => NULL,
        'safe_value' => 'heytrellon@trellon.com',
      ),
    ),
  ),
  'field_cmcv_date' => array(
    'und' => array(
      0 => array(
        'value' => 1378148400,
        'value2' => 1387396800,
        'timezone' => 'America/New_York',
        'timezone_db' => 'UTC',
        'date_type' => 'datestamp',
      ),
    ),
  ),
  'field_cmcv_location' => array(
    'und' => array(
      0 => array(
        'country' => 'US',
        'administrative_area' => 'MA',
        'sub_administrative_area' => NULL,
        'locality' => 'Boston',
        'dependent_locality' => NULL,
        'postal_code' => '',
        'thoroughfare' => 'Chestnut Hill Elementary School',
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
  'field_cmcv_roles' => array(),
  'field_cmcv_slots' => array(
    'und' => array(
      0 => array(
        'value' => 14,
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
  'crm_core_profile_data' => array(
    'access_override' => array(
      'access' => FALSE,
      'message' => 'Registration closed!',
    ),
  ),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2013-09-19 12:01:53 -0400',
  'url_alias' => 'volunteers/after-school-tutors-needed',
  'crm_core_profile_node_config' => array(
    'nid' => '2a0e3955-18a5-4be1-a2c4-8dff6e05be73',
    'use_profile' => 1,
    'profile_name' => 'ao_volunteer_commitment_form_2',
    'display_profile' => 0,
    'inline_title' => 'Volunteer form',
  ),
  'crm_core_volunteer_node_config' => array(
    'nid' => '2a0e3955-18a5-4be1-a2c4-8dff6e05be73',
    'wait_list' => 0,
    'sign_email' => '',
    'wait_email' => '',
  ),
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Get Out The Vote!',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '0dc3a247-ae22-4854-b9fb-e2d3c647b96f',
  'type' => 'cmcv_volunteer',
  'language' => 'und',
  'created' => 1379605567,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '85b8792e-c6f0-41e1-bb04-7cbf6b522abf',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Join our street team and help your neighbors register to vote in our 2013 voter registration drive.',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Join our street team and help your neighbors register to vote in our 2013 voter registration drive.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_cmcv_contact' => array(
    'und' => array(
      0 => array(
        'value' => 'heytrellon@trellon.com',
        'format' => NULL,
        'safe_value' => 'heytrellon@trellon.com',
      ),
    ),
  ),
  'field_cmcv_date' => array(
    'und' => array(
      0 => array(
        'value' => 1379602800,
        'value2' => 1383584400,
        'timezone' => 'America/New_York',
        'timezone_db' => 'UTC',
        'date_type' => 'datestamp',
      ),
    ),
  ),
  'field_cmcv_location' => array(
    'und' => array(
      0 => array(
        'country' => 'US',
        'administrative_area' => '',
        'sub_administrative_area' => NULL,
        'locality' => '',
        'dependent_locality' => NULL,
        'postal_code' => '',
        'thoroughfare' => '',
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
  'field_cmcv_roles' => array(),
  'field_cmcv_slots' => array(
    'und' => array(
      0 => array(
        'value' => 100,
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
  'crm_core_profile_data' => array(
    'access_override' => array(
      'access' => FALSE,
      'message' => 'Registration closed!',
    ),
  ),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2013-09-19 11:46:07 -0400',
  'url_alias' => 'volunteers/get-out-the-vote',
  'crm_core_profile_node_config' => array(
    'nid' => '85b8792e-c6f0-41e1-bb04-7cbf6b522abf',
    'use_profile' => 1,
    'profile_name' => 'ao_volunteer_commitment_form',
    'display_profile' => 0,
    'inline_title' => 'Volunteer form',
  ),
  'crm_core_volunteer_node_config' => array(
    'nid' => '85b8792e-c6f0-41e1-bb04-7cbf6b522abf',
    'wait_list' => 0,
    'sign_email' => '',
    'wait_email' => '',
  ),
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Support the Food Bank',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '85aa7335-b5cd-4352-a820-5cfbcbd6fe51',
  'type' => 'cmcv_volunteer',
  'language' => 'und',
  'created' => 1379605986,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '9c84b384-91ef-438d-a442-b7aa4158823f',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Come out and help at our annual fundraising dinner.

<strong>Update:</strong> All of our volunteer positions are currently filled. If you are interested in participating, sign up for the waiting list below.',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Come out and help at our annual fundraising dinner.</p>
<p><strong>Update:</strong> All of our volunteer positions are currently filled. If you are interested in participating, sign up for the waiting list below.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_cmcv_contact' => array(),
  'field_cmcv_date' => array(
    'und' => array(
      0 => array(
        'value' => 1387404000,
        'value2' => 1387404000,
        'timezone' => 'America/New_York',
        'timezone_db' => 'UTC',
        'date_type' => 'datestamp',
      ),
    ),
  ),
  'field_cmcv_location' => array(
    'und' => array(
      0 => array(
        'country' => 'US',
        'administrative_area' => 'NY',
        'sub_administrative_area' => NULL,
        'locality' => 'New York',
        'dependent_locality' => NULL,
        'postal_code' => '',
        'thoroughfare' => '',
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
  'field_cmcv_roles' => array(),
  'field_cmcv_slots' => array(
    'und' => array(
      0 => array(
        'value' => 2,
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
  'crm_core_profile_data' => array(
    'access_override' => array(
      'access' => FALSE,
      'message' => 'Registration closed!',
    ),
  ),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2013-09-19 11:53:06 -0400',
  'url_alias' => 'volunteers/support-the-food-bank',
  'crm_core_profile_node_config' => array(
    'nid' => '9c84b384-91ef-438d-a442-b7aa4158823f',
    'use_profile' => 1,
    'profile_name' => 'ao_volunteer_commitment_form',
    'display_profile' => 0,
    'inline_title' => 'Volunteer form',
  ),
  'crm_core_volunteer_node_config' => array(
    'nid' => '9c84b384-91ef-438d-a442-b7aa4158823f',
    'wait_list' => 0,
    'sign_email' => '',
    'wait_email' => '',
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
  'vuuid' => '60861c83-d850-44fd-b63b-ec4a58ce2dd4',
  'type' => 'page',
  'language' => 'und',
  'created' => 1378725306,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'a6aca833-1f84-4876-93d1-cc070aad77d0',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Thank you for your volunteer commitment!',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Thank you for your volunteer commitment!</p>
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
  'date' => '2013-09-09 07:15:06 -0400',
  'url_alias' => 'volunteers/thank-you',
);
  return $nodes;
}
