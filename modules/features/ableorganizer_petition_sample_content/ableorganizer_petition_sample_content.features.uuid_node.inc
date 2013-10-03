<?php
/**
 * @file
 * ableorganizer_petition_sample_content.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function ableorganizer_petition_sample_content_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
    'uid' => 0,
    'title' => 'Thank you',
    'log' => '',
    'status' => 1,
    'comment' => 1,
    'promote' => 0,
    'sticky' => 0,
    'vuuid' => 'd6949169-63be-4aba-b837-704e5b27d665',
    'type' => 'page',
    'language' => 'und',
    'created' => 1378397518,
    'tnid' => 0,
    'translate' => 0,
    'uuid' => '07f62fec-73c6-406e-af38-d79c0070e4dd',
    'revision_uid' => 0,
    'body' => array(
      'und' => array(
        0 => array(
          'value' => 'Thank you for taking action!',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>Thank you for taking action!</p>
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
    'date' => '2013-09-05 19:11:58 +0300',
  );
  $nodes[] = array(
    'uid' => 0,
    'title' => 'Governor Jones: Veto HB 34',
    'log' => '',
    'status' => 1,
    'comment' => 1,
    'promote' => 0,
    'sticky' => 0,
    'vuuid' => '68282eb1-f063-461c-b1f0-7e4b03a8f124',
    'type' => 'cmcp_petition',
    'language' => 'und',
    'created' => 1379614678,
    'tnid' => 0,
    'translate' => 0,
    'uuid' => '71378697-11e3-4d26-bfbd-b9c669b4b14a',
    'revision_uid' => 1,
    'body' => array(
      'und' => array(
        0 => array(
          'value' => 'Last week, the State Assembly passed House Bill 34 under the auspices of "regulatory reform". The reality is that this is a harmful piece of legislation, which only serves to roll back environmental regulations that are essential to public health and the environmental future of our beautiful state.',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>Last week, the State Assembly passed House Bill 34 under the auspices of "regulatory reform". The reality is that this is a harmful piece of legislation, which only serves to roll back environmental regulations that are essential to public health and the environmental future of our beautiful state.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_cmcp_cta' => array(
      'und' => array(
        0 => array(
          'value' => 'Now the bill is on the Governor\'s desk and he is considering vetoing the measure. We must act now to tell the Governor to veto this dangerous bill. Add your voice today.

<em><b> Governor Jones I strongly oppose HB 34. Please veto this harmful legislation.</em></b>',
          'format' => 'filtered_html',
          'safe_value' => '<p>Now the bill is on the Governor\'s desk and he is considering vetoing the measure. We must act now to tell the Governor to veto this dangerous bill. Add your voice today.</p>
<p><em> Governor Jones I strongly oppose HB 34. Please veto this harmful legislation.</em></p>
',
        ),
      ),
    ),
    'field_cmcp_personal_message' => array(),
    'field_cmcp_pm_customize' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_cmcp_target_email_subject' => array(),
    'field_cmcp_target_emails' => array(
      'und' => array(
        0 => array(
          'value' => 0,
        ),
      ),
    ),
    'field_cmcp_target_ids' => array(),
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
    'date' => '2013-09-19 21:17:58 +0300',
    'crm_core_profile_node_config' => array(
      'nid' => '71378697-11e3-4d26-bfbd-b9c669b4b14a',
      'use_profile' => 1,
      'profile_name' => 'signature_drive',
      'display_profile' => 1,
      'inline_title' => 'Petition form',
    ),
  );
  $nodes[] = array(
    'uid' => 0,
    'title' => 'US Congress: Designate a National Holiday for First Responders',
    'log' => '',
    'status' => 1,
    'comment' => 1,
    'promote' => 0,
    'sticky' => 0,
    'vuuid' => '89436929-a31a-47a0-8252-09763902d8c7',
    'type' => 'cmcp_petition',
    'language' => 'und',
    'created' => 1379627384,
    'tnid' => 0,
    'translate' => 0,
    'uuid' => '7f7cf4e3-560a-49a5-b753-59ddb08141d7',
    'revision_uid' => 1,
    'body' => array(
      'und' => array(
        0 => array(
          'value' => 'Our first responders such as police officers and firefighters put their lives on the line for us every day. Lets recognize their bravery and hard work with a national day of appreciation.',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>Our first responders such as police officers and firefighters put their lives on the line for us every day. Lets recognize their bravery and hard work with a national day of appreciation.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_cmcp_cta' => array(
      'und' => array(
        0 => array(
          'value' => '<em> Dear Congress,

The importance of our first responders is something we can all recognize. Don\'t let partisanship stand in the way: designate a national holiday to honor their service.</em>',
          'format' => 'filtered_html',
          'safe_value' => '<p><em> Dear Congress, </em></p>
<p>The importance of our first responders is something we can all recognize. Don\'t let partisanship stand in the way: designate a national holiday to honor their service.</p>
',
        ),
      ),
    ),
    'field_cmcp_personal_message' => array(),
    'field_cmcp_pm_customize' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_cmcp_target_email_subject' => array(),
    'field_cmcp_target_emails' => array(
      'und' => array(
        0 => array(
          'value' => 0,
        ),
      ),
    ),
    'field_cmcp_target_ids' => array(),
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
    'date' => '2013-09-20 00:49:44 +0300',
    'crm_core_profile_node_config' => array(
      'nid' => '7f7cf4e3-560a-49a5-b753-59ddb08141d7',
      'use_profile' => 1,
      'profile_name' => 'short_petition_with_message',
      'display_profile' => 1,
      'inline_title' => 'Petition form',
    ),
  );
  $nodes[] = array(
    'uid' => 0,
    'title' => 'Canvassing Data Entry',
    'log' => '',
    'status' => 1,
    'comment' => 1,
    'promote' => 0,
    'sticky' => 0,
    'vuuid' => '149d5e99-bb89-427c-82ea-ef6d6871ad38',
    'type' => 'cmcp_petition',
    'language' => 'und',
    'created' => 1379623501,
    'tnid' => 0,
    'translate' => 0,
    'uuid' => '9e015f78-02b6-465d-9a22-7ef48de06969',
    'revision_uid' => 1,
    'body' => array(
      'und' => array(
        0 => array(
          'value' => 'Enter Canvassing Data below into your CRM Core database.',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>Enter Canvassing Data below into your CRM Core database.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_cmcp_cta' => array(),
    'field_cmcp_personal_message' => array(),
    'field_cmcp_pm_customize' => array(
      'und' => array(
        0 => array(
          'value' => 0,
        ),
      ),
    ),
    'field_cmcp_target_email_subject' => array(),
    'field_cmcp_target_emails' => array(
      'und' => array(
        0 => array(
          'value' => 0,
        ),
      ),
    ),
    'field_cmcp_target_ids' => array(),
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
    'date' => '2013-09-19 23:45:01 +0300',
    'crm_core_profile_node_config' => array(
      'nid' => '9e015f78-02b6-465d-9a22-7ef48de06969',
      'use_profile' => 1,
      'profile_name' => 'canvass_signatures',
      'display_profile' => 1,
      'inline_title' => 'Petition form',
    ),
  );
  $nodes[] = array(
    'uid' => 0,
    'title' => ' Tell City Council to Save our Park!',
    'log' => '',
    'status' => 1,
    'comment' => 1,
    'promote' => 0,
    'sticky' => 0,
    'vuuid' => '39e76ead-2683-421e-b337-3aa7156bbac3',
    'type' => 'cmcp_petition',
    'language' => 'und',
    'created' => 1379619576,
    'tnid' => 0,
    'translate' => 0,
    'uuid' => 'a1a630ad-2b43-4a79-b876-b38db525fa0e',
    'revision_uid' => 1,
    'body' => array(
      'und' => array(
        0 => array(
          'value' => 'Turner Park is a living piece of history in our community. Its sunny lawn has been a gathering place for citizens young and old for the past 150 years. We thought our beloved Park would be there always, but today budget cuts are threatening to shut the Park down indefinitely. This closure is unacceptable and will take away a valuable resource for our city.

Tell City Council to vote to keep Turner Park open for our children and families.',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>Turner Park is a living piece of history in our community. Its sunny lawn has been a gathering place for citizens young and old for the past 150 years. We thought our beloved Park would be there always, but today budget cuts are threatening to shut the Park down indefinitely. This closure is unacceptable and will take away a valuable resource for our city.</p>
<p>Tell City Council to vote to keep Turner Park open for our children and families.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_cmcp_cta' => array(
      'und' => array(
        0 => array(
          'value' => '<em>Turner Park is an important part of our community. I oppose closing this important civic resource.</em>',
          'format' => 'filtered_html',
          'safe_value' => '<p><em>Turner Park is an important part of our community. I oppose closing this important civic resource.</em></p>
',
        ),
      ),
    ),
    'field_cmcp_personal_message' => array(),
    'field_cmcp_pm_customize' => array(
      'und' => array(
        0 => array(
          'value' => 0,
        ),
      ),
    ),
    'field_cmcp_target_email_subject' => array(),
    'field_cmcp_target_emails' => array(
      'und' => array(
        0 => array(
          'value' => 0,
        ),
      ),
    ),
    'field_cmcp_target_ids' => array(),
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
    'date' => '2013-09-19 22:39:36 +0300',
    'crm_core_profile_node_config' => array(
      'nid' => 'a1a630ad-2b43-4a79-b876-b38db525fa0e',
      'use_profile' => 1,
      'profile_name' => 'short_online_petition',
      'display_profile' => 1,
      'inline_title' => 'Petition form',
    ),
  );
  $nodes[] = array(
    'uid' => 0,
    'title' => 'We Want More CRM Core!',
    'log' => '',
    'status' => 1,
    'comment' => 1,
    'promote' => 0,
    'sticky' => 0,
    'vuuid' => 'ba8c0843-235b-4e8d-bc97-73fd103ec1ae',
    'type' => 'cmcp_petition',
    'language' => 'und',
    'created' => 1379619552,
    'tnid' => 0,
    'translate' => 0,
    'uuid' => 'c6c7bd28-a9a5-4c29-b4b7-a11cbe7e5450',
    'revision_uid' => 1,
    'body' => array(
      'und' => array(
        0 => array(
          'value' => 'With its release of CRM Core, <a href="http://www.trellon.com/" target="_blank">Trellon </a> is changing what is possible with people data in Drupal websites. While new features like Donation, Events, Volunteer Management, and Petitions are great - we want more!',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>With its release of CRM Core, <a href="http://www.trellon.com/" target="_blank">Trellon </a> is changing what is possible with people data in Drupal websites. While new features like Donation, Events, Volunteer Management, and Petitions are great - we want more!</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_cmcp_cta' => array(
      'und' => array(
        0 => array(
          'value' => '<b>Don\'t wait to make your voice heard. Tell the Trellon team what features YOU\'d like to see in development for CRM Core. Your messages will be emailed straight to the team.</b>',
          'format' => 'filtered_html',
          'safe_value' => '<p>Don\'t wait to make your voice heard. Tell the Trellon team what features YOU\'d like to see in development for CRM Core. Your messages will be emailed straight to the team.</p>
',
        ),
      ),
    ),
    'field_cmcp_personal_message' => array(),
    'field_cmcp_pm_customize' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_cmcp_target_email_subject' => array(),
    'field_cmcp_target_emails' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_cmcp_target_ids' => array(),
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
    'date' => '2013-09-19 22:39:12 +0300',
    'crm_core_profile_node_config' => array(
      'nid' => 'c6c7bd28-a9a5-4c29-b4b7-a11cbe7e5450',
      'use_profile' => 1,
      'profile_name' => 'short_petition_with_message',
      'display_profile' => 1,
      'inline_title' => 'Petition form',
    ),
  );
  return $nodes;
}
