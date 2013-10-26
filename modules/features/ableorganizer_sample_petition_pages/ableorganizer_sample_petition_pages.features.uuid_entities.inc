<?php
/**
 * @file
 * ableorganizer_sample_petition_pages.features.uuid_entities.inc
 */

/**
 * Implements hook_uuid_default_entities().
 */
function ableorganizer_sample_petition_pages_uuid_default_entities() {
  $entities = array();

  $entities['cmcp_sample_content_dp'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/07f62fec-73c6-406e-af38-d79c0070e4dd',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'filtered_html',
          'summary' => '',
          'value' => 'Thank you for taking action!',
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
        'alias' => 'petitions/thank-you',
        'language' => 'und',
      ),
    ),
    'uuid' => '07f62fec-73c6-406e-af38-d79c0070e4dd',
  );
  $entities['cmcp_sample_content_dp'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/71378697-11e3-4d26-bfbd-b9c669b4b14a',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'filtered_html',
          'summary' => '',
          'value' => 'Last week, the State Assembly passed House Bill 34 under the auspices of "regulatory reform". The reality is that this is a harmful piece of legislation, which only serves to roll back environmental regulations that are essential to public health and the environmental future of our beautiful state.',
        ),
      ),
    ),
    'cid' => 0,
    'comment' => 1,
    'comment_count' => 0,
    'crm_core_petition_node_config' => array(
      'nid' => '71378697-11e3-4d26-bfbd-b9c669b4b14a',
      'signatories' => 1,
      'goal' => 200,
      'sign_email' => '',
      'thanks_email' => '',
    ),
    'crm_core_profile_node_config' => array(
      'nid' => '71378697-11e3-4d26-bfbd-b9c669b4b14a',
      'use_profile' => 1,
      'profile_name' => 'signature_drive',
      'display_profile' => 0,
      'inline_title' => 'Petition form',
    ),
    'field_cmcp_cta' => array(
      'und' => array(
        0 => array(
          'format' => 'filtered_html',
          'value' => 'Now the bill is on the Governor\'s desk and he is considering vetoing the measure. We must act now to tell the Governor to veto this dangerous bill. Add your voice today.

<em><b> Governor Jones I strongly oppose HB 34. Please veto this harmful legislation.</em></b>',
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
    'title' => 'Governor Jones: Veto HB 34',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'cmcp_petition',
    'uid' => 0,
    'url_alias' => array(),
    'uuid' => '71378697-11e3-4d26-bfbd-b9c669b4b14a',
  );
  $entities['cmcp_sample_content_dp'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/7f7cf4e3-560a-49a5-b753-59ddb08141d7',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'filtered_html',
          'summary' => '',
          'value' => 'Our first responders such as police officers and firefighters put their lives on the line for us every day. Lets recognize their bravery and hard work with a national day of appreciation.',
        ),
      ),
    ),
    'cid' => 0,
    'comment' => 1,
    'comment_count' => 0,
    'crm_core_petition_node_config' => array(
      'nid' => '7f7cf4e3-560a-49a5-b753-59ddb08141d7',
      'signatories' => 1,
      'goal' => 100,
      'sign_email' => '',
      'thanks_email' => 'rules_cmcp_thank_you_message',
    ),
    'crm_core_profile_node_config' => array(
      'nid' => '7f7cf4e3-560a-49a5-b753-59ddb08141d7',
      'use_profile' => 1,
      'profile_name' => 'short_petition_with_message',
      'display_profile' => 0,
      'inline_title' => 'Petition form',
    ),
    'field_cmcp_cta' => array(
      'und' => array(
        0 => array(
          'format' => 'filtered_html',
          'value' => '<em> Dear Congress,

The importance of our first responders is something we can all recognize. Don\'t let partisanship stand in the way: designate a national holiday to honor their service.</em>',
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
    'title' => 'US Congress: Designate a National Holiday for First Responders',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'cmcp_petition',
    'uid' => 0,
    'url_alias' => array(),
    'uuid' => '7f7cf4e3-560a-49a5-b753-59ddb08141d7',
  );
  $entities['cmcp_sample_content_dp'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/9e015f78-02b6-465d-9a22-7ef48de06969',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'filtered_html',
          'summary' => '',
          'value' => 'Enter Canvassing Data below into your CRM Core database.',
        ),
      ),
    ),
    'cid' => 0,
    'comment' => 1,
    'comment_count' => 0,
    'crm_core_petition_node_config' => array(
      'nid' => '9e015f78-02b6-465d-9a22-7ef48de06969',
      'signatories' => 1,
      'goal' => 0,
      'sign_email' => '',
      'thanks_email' => 'rules_cmcp_thank_you_message',
    ),
    'crm_core_profile_node_config' => array(
      'nid' => '9e015f78-02b6-465d-9a22-7ef48de06969',
      'use_profile' => 1,
      'profile_name' => 'canvass_signatures',
      'display_profile' => 0,
      'inline_title' => 'Petition form',
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
    'title' => 'Canvassing Data Entry',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'cmcp_petition',
    'uid' => 0,
    'url_alias' => array(),
    'uuid' => '9e015f78-02b6-465d-9a22-7ef48de06969',
  );
  $entities['cmcp_sample_content_dp'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/a1a630ad-2b43-4a79-b876-b38db525fa0e',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'filtered_html',
          'summary' => '',
          'value' => 'Turner Park is a living piece of history in our community. Its sunny lawn has been a gathering place for citizens young and old for the past 150 years. We thought our beloved Park would be there always, but today budget cuts are threatening to shut the Park down indefinitely. This closure is unacceptable and will take away a valuable resource for our city.

Tell City Council to vote to keep Turner Park open for our children and families.',
        ),
      ),
    ),
    'cid' => 0,
    'comment' => 1,
    'comment_count' => 0,
    'crm_core_petition_node_config' => array(
      'nid' => 'a1a630ad-2b43-4a79-b876-b38db525fa0e',
      'signatories' => 1,
      'goal' => 0,
      'sign_email' => '',
      'thanks_email' => 'rules_cmcp_thank_you_message',
    ),
    'crm_core_profile_node_config' => array(
      'nid' => 'a1a630ad-2b43-4a79-b876-b38db525fa0e',
      'use_profile' => 1,
      'profile_name' => 'short_online_petition',
      'display_profile' => 0,
      'inline_title' => 'Petition form',
    ),
    'field_cmcp_cta' => array(
      'und' => array(
        0 => array(
          'format' => 'filtered_html',
          'value' => '<em>Turner Park is an important part of our community. I oppose closing this important civic resource.</em>',
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
    'title' => ' Tell City Council to Save our Park!',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'cmcp_petition',
    'uid' => 0,
    'url_alias' => array(),
    'uuid' => 'a1a630ad-2b43-4a79-b876-b38db525fa0e',
  );
  $entities['cmcp_sample_content_dp'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/c6c7bd28-a9a5-4c29-b4b7-a11cbe7e5450',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'filtered_html',
          'summary' => '',
          'value' => 'With its release of CRM Core, <a href="http://www.trellon.com/" target="_blank">Trellon </a> is changing what is possible with people data in Drupal websites. While new features like Donation, Events, Volunteer Management, and Petitions are great - we want more!',
        ),
      ),
    ),
    'cid' => 0,
    'comment' => 1,
    'comment_count' => 0,
    'crm_core_petition_node_config' => array(
      'nid' => 'c6c7bd28-a9a5-4c29-b4b7-a11cbe7e5450',
      'signatories' => 0,
      'goal' => 0,
      'sign_email' => '',
      'thanks_email' => 'rules_cmcp_thank_you_message',
    ),
    'crm_core_profile_node_config' => array(
      'nid' => 'c6c7bd28-a9a5-4c29-b4b7-a11cbe7e5450',
      'use_profile' => 1,
      'profile_name' => 'short_petition_with_message',
      'display_profile' => 0,
      'inline_title' => 'Petition form',
    ),
    'field_cmcp_cta' => array(
      'und' => array(
        0 => array(
          'format' => 'filtered_html',
          'value' => '<b>Don\'t wait to make your voice heard. Tell the Trellon team what features YOU\'d like to see in development for CRM Core. Your messages will be emailed straight to the team.</b>',
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
    'title' => 'We Want More CRM Core!',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'cmcp_petition',
    'uid' => 0,
    'url_alias' => array(),
    'uuid' => 'c6c7bd28-a9a5-4c29-b4b7-a11cbe7e5450',
  );

  return $entities;
}
