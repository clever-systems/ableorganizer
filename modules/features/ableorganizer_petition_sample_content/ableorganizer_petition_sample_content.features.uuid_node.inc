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
  'uid' => 1,
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
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Thank you for signing this petition!',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Thank you for signing this petition!</p>
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
  'date' => '2013-09-05 19:11:58 +0300',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Active on-line petition',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'ab9401b4-6114-4c0b-905d-b6146cb4c264',
  'type' => 'cmcp_petition',
  'language' => 'und',
  'created' => 1378395762,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '67720e58-b9b4-43c4-98cf-ad29bc13068d',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'There is a very important issue that must be addressed.',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>There is a very important issue that must be addressed.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_cmcp_cta' => array(
    'und' => array(
      0 => array(
        'value' => 'Sign this petition today!',
        'format' => 'filtered_html',
        'safe_value' => '<p>Sign this petition today!</p>
',
      ),
    ),
  ),
  'field_cmcp_personal_message' => array(
    'und' => array(
      0 => array(
        'value' => 'This personal message will be sent to petition targets.',
        'format' => 'filtered_html',
        'safe_value' => '<p>This personal message will be sent to petition targets.</p>
',
      ),
    ),
  ),
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
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2013-09-05 18:42:42 +0300',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Petition without personal message',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '4bdaa2e6-035c-4150-aaaf-1e85057cbce1',
  'type' => 'cmcp_petition',
  'language' => 'und',
  'created' => 1379057494,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'dcb2bfb1-c860-4713-afd1-cdcf868c88f0',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'There is a very important issue that must be addressed.',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>There is a very important issue that must be addressed.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_cmcp_cta' => array(
    'und' => array(
      0 => array(
        'value' => 'Sign this petition today!',
        'format' => 'filtered_html',
        'safe_value' => '<p>Sign this petition today!</p>
',
      ),
    ),
  ),
  'field_cmcp_personal_message' => array(
    'und' => array(
      0 => array(
        'value' => 'This personal message will be sent to petition targets.',
        'format' => 'filtered_html',
        'safe_value' => '<p>This personal message will be sent to petition targets.</p>
',
      ),
    ),
  ),
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
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2013-09-13 10:31:34 +0300',
);
  return $nodes;
}
