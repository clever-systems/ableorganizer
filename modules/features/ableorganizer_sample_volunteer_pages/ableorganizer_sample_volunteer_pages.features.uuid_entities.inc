<?php
/**
 * @file
 * ableorganizer_sample_volunteer_pages.features.uuid_entities.inc
 */

/**
 * Implements hook_uuid_default_entities().
 */
function ableorganizer_sample_volunteer_pages_uuid_default_entities() {
  $entities = array();

  $entities['cmcv_sample_content_dp'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/0b621efb-62fa-4312-b0bd-479c6d8d8be4',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'filtered_html',
          'summary' => '',
          'value' => 'The animal shelter needs your help.

We are looking for volunteers in a variety of roles:
<ul>
<li> Animal Socializer: Work with the animals to make them more adoptable
<li> Adoption Counselor: Help people find the perfect animal to join their family
<li> Animal Care: Make sure our animals are fed and kept clean
</ul>

Come to our Volunteer Open House to learn more and sign up.',
        ),
      ),
    ),
    'cid' => 0,
    'comment' => 1,
    'comment_count' => 0,
    'crm_core_profile_data' => array(),
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
    'field_cmcv_contact' => array(),
    'field_cmcv_date' => array(
      'und' => array(
        0 => array(
          'date_type' => 'datestamp',
          'timezone' => 'UTC',
          'timezone_db' => 'UTC',
          'value' => 1386099000,
          'value2' => 1386099000,
        ),
      ),
    ),
    'field_cmcv_location' => array(
      'und' => array(
        0 => array(
          'administrative_area' => 'DC',
          'country' => 'US',
          'data' => NULL,
          'dependent_locality' => NULL,
          'first_name' => NULL,
          'last_name' => NULL,
          'locality' => 'Washington',
          'name_line' => NULL,
          'organisation_name' => NULL,
          'postal_code' => '',
          'premise' => '',
          'sub_administrative_area' => NULL,
          'sub_premise' => NULL,
          'thoroughfare' => '',
        ),
      ),
    ),
    'field_cmcv_roles' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Animal Socializer, Adoption Counselor, Animal Care',
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
    'title' => 'Work with Homeless Animals',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'cmcv_volunteer',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'volunteers/work-with-homeless-animals',
        'language' => 'und',
      ),
    ),
    'uuid' => '0b621efb-62fa-4312-b0bd-479c6d8d8be4',
  );
  $entities['cmcv_sample_content_dp'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/0d86ea2a-fb8a-4ec5-8a00-3361772433d3',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'filtered_html',
          'summary' => '',
          'value' => 'Join other members of our community in cleaning up the creek. The creek is an important habitat for native animals, and it is home to a variety of rare amphibians that are important to the ecosystem.

On Saturday, we\'ll be picking up trash and litter over a three mile stretch of creek. Come join us!
',
        ),
      ),
    ),
    'cid' => 0,
    'comment' => 1,
    'comment_count' => 0,
    'crm_core_profile_data' => array(),
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
    'field_cmcv_contact' => array(),
    'field_cmcv_date' => array(
      'und' => array(
        0 => array(
          'date_type' => 'datestamp',
          'timezone' => 'UTC',
          'timezone_db' => 'UTC',
          'value' => 1382796000,
          'value2' => 1382796000,
        ),
      ),
    ),
    'field_cmcv_location' => array(
      'und' => array(
        0 => array(
          'administrative_area' => 'DC',
          'country' => 'US',
          'data' => NULL,
          'dependent_locality' => NULL,
          'first_name' => NULL,
          'last_name' => NULL,
          'locality' => 'Washington',
          'name_line' => NULL,
          'organisation_name' => NULL,
          'postal_code' => '',
          'premise' => '',
          'sub_administrative_area' => NULL,
          'sub_premise' => NULL,
          'thoroughfare' => '',
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
    'title' => 'Keep Our Creek Clean',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'cmcv_volunteer',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'volunteers/keep-our-creek-clean',
        'language' => 'und',
      ),
    ),
    'uuid' => '0d86ea2a-fb8a-4ec5-8a00-3361772433d3',
  );
  $entities['cmcv_sample_content_dp'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/2a0e3955-18a5-4be1-a2c4-8dff6e05be73',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'filtered_html',
          'summary' => '',
          'value' => 'Make a difference in a child\'s life by helping them to succeed in school. We\'re looking for people who can aid fourth and fifth grade students in all subjects. Volunteers must be 18 or over.',
        ),
      ),
    ),
    'cid' => 0,
    'comment' => 1,
    'comment_count' => 0,
    'crm_core_profile_data' => array(),
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
    'field_cmcv_contact' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'heytrellon@trellon.com',
        ),
      ),
    ),
    'field_cmcv_date' => array(
      'und' => array(
        0 => array(
          'date_type' => 'datestamp',
          'timezone' => 'UTC',
          'timezone_db' => 'UTC',
          'value' => 1378148400,
          'value2' => 1387396800,
        ),
      ),
    ),
    'field_cmcv_location' => array(
      'und' => array(
        0 => array(
          'administrative_area' => 'MA',
          'country' => 'US',
          'data' => NULL,
          'dependent_locality' => NULL,
          'first_name' => NULL,
          'last_name' => NULL,
          'locality' => 'Boston',
          'name_line' => NULL,
          'organisation_name' => NULL,
          'postal_code' => '',
          'premise' => '',
          'sub_administrative_area' => NULL,
          'sub_premise' => NULL,
          'thoroughfare' => 'Chestnut Hill Elementary School',
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
    'title' => 'After School Tutors Needed',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'cmcv_volunteer',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'volunteers/after-school-tutors-needed',
        'language' => 'und',
      ),
    ),
    'uuid' => '2a0e3955-18a5-4be1-a2c4-8dff6e05be73',
  );
  $entities['cmcv_sample_content_dp'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/85b8792e-c6f0-41e1-bb04-7cbf6b522abf',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'filtered_html',
          'summary' => '',
          'value' => 'Join our street team and help your neighbors register to vote in our 2013 voter registration drive.',
        ),
      ),
    ),
    'cid' => 0,
    'comment' => 1,
    'comment_count' => 0,
    'crm_core_profile_data' => array(),
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
    'field_cmcv_contact' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'heytrellon@trellon.com',
        ),
      ),
    ),
    'field_cmcv_date' => array(
      'und' => array(
        0 => array(
          'date_type' => 'datestamp',
          'timezone' => 'UTC',
          'timezone_db' => 'UTC',
          'value' => 1379602800,
          'value2' => 1383584400,
        ),
      ),
    ),
    'field_cmcv_location' => array(
      'und' => array(
        0 => array(
          'administrative_area' => '',
          'country' => 'US',
          'data' => NULL,
          'dependent_locality' => NULL,
          'first_name' => NULL,
          'last_name' => NULL,
          'locality' => '',
          'name_line' => NULL,
          'organisation_name' => NULL,
          'postal_code' => '',
          'premise' => '',
          'sub_administrative_area' => NULL,
          'sub_premise' => NULL,
          'thoroughfare' => '',
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
    'title' => 'Get Out The Vote!',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'cmcv_volunteer',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'volunteers/get-out-the-vote',
        'language' => 'und',
      ),
    ),
    'uuid' => '85b8792e-c6f0-41e1-bb04-7cbf6b522abf',
  );
  $entities['cmcv_sample_content_dp'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/9c84b384-91ef-438d-a442-b7aa4158823f',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'filtered_html',
          'summary' => '',
          'value' => 'Come out and help at our annual fundraising dinner.

<strong>Update:</strong> All of our volunteer positions are currently filled. If you are interested in participating, sign up for the waiting list below.',
        ),
      ),
    ),
    'cid' => 0,
    'comment' => 1,
    'comment_count' => 0,
    'crm_core_profile_data' => array(),
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
    'field_cmcv_contact' => array(),
    'field_cmcv_date' => array(
      'und' => array(
        0 => array(
          'date_type' => 'datestamp',
          'timezone' => 'UTC',
          'timezone_db' => 'UTC',
          'value' => 1387404000,
          'value2' => 1387404000,
        ),
      ),
    ),
    'field_cmcv_location' => array(
      'und' => array(
        0 => array(
          'administrative_area' => 'NY',
          'country' => 'US',
          'data' => NULL,
          'dependent_locality' => NULL,
          'first_name' => NULL,
          'last_name' => NULL,
          'locality' => 'New York',
          'name_line' => NULL,
          'organisation_name' => NULL,
          'postal_code' => '',
          'premise' => '',
          'sub_administrative_area' => NULL,
          'sub_premise' => NULL,
          'thoroughfare' => '',
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
    'title' => 'Support the Food Bank',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'cmcv_volunteer',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'volunteers/support-the-food-bank',
        'language' => 'und',
      ),
    ),
    'uuid' => '9c84b384-91ef-438d-a442-b7aa4158823f',
  );
  $entities['cmcv_sample_content_dp'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/a6aca833-1f84-4876-93d1-cc070aad77d0',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'filtered_html',
          'summary' => '',
          'value' => 'Thank you for your volunteer commitment!',
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
        'alias' => 'volunteers/thank-you',
        'language' => 'und',
      ),
    ),
    'uuid' => 'a6aca833-1f84-4876-93d1-cc070aad77d0',
  );

  return $entities;
}
