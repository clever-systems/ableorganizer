<?php
/**
 * @file
 * ableorganizer_sample_content.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function ableorganizer_sample_content_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 0,
  'title' => 'Using contacts, reports and dashboards in CRM Core',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '7a815e3f-27da-47db-aea2-3c26460704f8',
  'type' => 'article',
  'language' => 'und',
  'created' => 1382652803,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '0288a5d9-e20c-43a5-b52f-fbd2b7767fb7',
  'revision_uid' => 0,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Using contacts, reports and dashboards in CRM Core',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>Using contacts, reports and dashboards in CRM Core</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tags' => array(
    'und' => array(
      0 => array(
        'tid' => 1,
      ),
      1 => array(
        'tid' => 5,
      ),
    ),
  ),
  'field_image' => array(),
  'rdf_mapping' => array(
    'field_image' => array(
      'predicates' => array(
        0 => 'og:image',
        1 => 'rdfs:seeAlso',
      ),
      'type' => 'rel',
    ),
    'field_tags' => array(
      'predicates' => array(
        0 => 'dc:subject',
      ),
      'type' => 'rel',
    ),
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
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2013-10-24 15:13:23 -0700',
  'url_alias' => 'about/contacts_reports_dashboards',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Accepting online payments through CRM Core',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'd3ac2d4f-d44f-44c7-9f14-9691486af9c1',
  'type' => 'article',
  'language' => 'und',
  'created' => 1382653020,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '0e6a3702-77b3-4011-9ddf-4af3b3e408bc',
  'revision_uid' => 0,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Accepting online payments through CRM Core',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Accepting online payments through CRM Core</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tags' => array(
    'und' => array(
      0 => array(
        'tid' => 1,
      ),
      1 => array(
        'tid' => 5,
      ),
    ),
  ),
  'field_image' => array(),
  'rdf_mapping' => array(
    'field_image' => array(
      'predicates' => array(
        0 => 'og:image',
        1 => 'rdfs:seeAlso',
      ),
      'type' => 'rel',
    ),
    'field_tags' => array(
      'predicates' => array(
        0 => 'dc:subject',
      ),
      'type' => 'rel',
    ),
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
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2013-10-24 15:17:00 -0700',
  'url_alias' => 'about/accepting_online_payments',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'How forms and content work together in CRM Core',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'aabbb007-6336-4b02-85ca-5fe9e04b3e07',
  'type' => 'article',
  'language' => 'und',
  'created' => 1382643245,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '36f0da4b-d510-4d0c-8ffb-959e43c481e5',
  'revision_uid' => 0,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Forms are created separately from other content.

',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Forms are created separately from other content.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tags' => array(
    'und' => array(
      0 => array(
        'tid' => 1,
      ),
      1 => array(
        'tid' => 2,
      ),
      2 => array(
        'tid' => 3,
      ),
    ),
  ),
  'field_image' => array(),
  'rdf_mapping' => array(
    'field_image' => array(
      'predicates' => array(
        0 => 'og:image',
        1 => 'rdfs:seeAlso',
      ),
      'type' => 'rel',
    ),
    'field_tags' => array(
      'predicates' => array(
        0 => 'dc:subject',
      ),
      'type' => 'rel',
    ),
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
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2013-10-24 12:34:05 -0700',
  'url_alias' => 'about/forms-and-content',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'CRM Core features used in AbleOrganizer',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '3021b5ac-44e7-408c-bd4b-1f624f24e89e',
  'type' => 'article',
  'language' => 'und',
  'created' => 1382653223,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '3752f8c4-bd5c-405c-a913-e17a50db5577',
  'revision_uid' => 0,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'CRM Core features used in AbleOrganizer',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>CRM Core features used in AbleOrganizer</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tags' => array(
    'und' => array(
      0 => array(
        'tid' => 1,
      ),
      1 => array(
        'tid' => 5,
      ),
    ),
  ),
  'field_image' => array(),
  'rdf_mapping' => array(
    'field_image' => array(
      'predicates' => array(
        0 => 'og:image',
        1 => 'rdfs:seeAlso',
      ),
      'type' => 'rel',
    ),
    'field_tags' => array(
      'predicates' => array(
        0 => 'dc:subject',
      ),
      'type' => 'rel',
    ),
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
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2013-10-24 15:20:23 -0700',
  'url_alias' => 'about/crm_core_features',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'this is a test',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '1f056109-55b6-4d12-9c8f-9d00a447b598',
  'type' => 'test',
  'language' => 'und',
  'created' => 1382658394,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '3a670ead-8f30-4207-8a46-d416a9ed8a0c',
  'revision_uid' => 0,
  'field_test_body' => array(
    'und' => array(
      0 => array(
        'value' => 'this is test sample content',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>this is test sample content</p>
',
        'safe_summary' => '',
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
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2013-10-24 16:46:34 -0700',
  'url_alias' => 'test',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Using CRM Core\'s form builder',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'ca5a3e85-f303-49bb-8aaf-49497420a212',
  'type' => 'article',
  'language' => 'und',
  'created' => 1382652940,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '71df67cd-f3f8-47c6-9887-963fb20a69d1',
  'revision_uid' => 0,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Using CRM Core\'s form builder',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>Using CRM Core\'s form builder</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tags' => array(
    'und' => array(
      0 => array(
        'tid' => 1,
      ),
      1 => array(
        'tid' => 5,
      ),
    ),
  ),
  'field_image' => array(),
  'rdf_mapping' => array(
    'field_image' => array(
      'predicates' => array(
        0 => 'og:image',
        1 => 'rdfs:seeAlso',
      ),
      'type' => 'rel',
    ),
    'field_tags' => array(
      'predicates' => array(
        0 => 'dc:subject',
      ),
      'type' => 'rel',
    ),
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
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2013-10-24 15:15:40 -0700',
  'url_alias' => 'about/crm-core-form-builder',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Contact tracking with CRM Core',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '58d88529-3517-47c1-a552-663210ff1530',
  'type' => 'article',
  'language' => 'und',
  'created' => 1382653163,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '806f88f9-b8ba-4e4a-a893-3f48371915e2',
  'revision_uid' => 0,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Contact tracking with CRM Core',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Contact tracking with CRM Core</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tags' => array(
    'und' => array(
      0 => array(
        'tid' => 1,
      ),
      1 => array(
        'tid' => 5,
      ),
    ),
  ),
  'field_image' => array(),
  'rdf_mapping' => array(
    'field_image' => array(
      'predicates' => array(
        0 => 'og:image',
        1 => 'rdfs:seeAlso',
      ),
      'type' => 'rel',
    ),
    'field_tags' => array(
      'predicates' => array(
        0 => 'dc:subject',
      ),
      'type' => 'rel',
    ),
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
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2013-10-24 15:19:23 -0700',
  'url_alias' => 'about/contact_tracking',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'How source tracking works in AbleOrganizer',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'e9f9a487-0c2d-48c6-be2d-ab495734b325',
  'type' => 'article',
  'language' => 'und',
  'created' => 1382643496,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'b76847d6-c928-488a-b9fa-9f98786ec637',
  'revision_uid' => 0,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Every feature has it\'s own form of source tracking.',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Every feature has it\'s own form of source tracking.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_tags' => array(
    'und' => array(
      0 => array(
        'tid' => 1,
      ),
      1 => array(
        'tid' => 4,
      ),
    ),
  ),
  'field_image' => array(),
  'rdf_mapping' => array(
    'field_image' => array(
      'predicates' => array(
        0 => 'og:image',
        1 => 'rdfs:seeAlso',
      ),
      'type' => 'rel',
    ),
    'field_tags' => array(
      'predicates' => array(
        0 => 'dc:subject',
      ),
      'type' => 'rel',
    ),
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
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2013-10-24 12:38:16 -0700',
  'url_alias' => 'about/source-tracking',
);
  $nodes[] = array(
  'uid' => 0,
  'title' => 'Welcome to AbleOrganizer',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '9f8a0a41-6f2b-4379-9f77-ca184d00792b',
  'type' => 'page',
  'language' => 'und',
  'created' => 1382401653,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'eaa3f19b-410b-4d75-ae42-05d5ad3565e6',
  'revision_uid' => 0,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<h1 class="ao-marq-title">AbleOrganizer allows you to build effective, robust relationships with the communities you care about.</h1>

<div class="ao-marq equal-height-element">
<div class="ao-marq-item ao-marq-donations">
<div class="ao-marq-item-label"><span></span></div>
<div class="ao-marq-item-title"><h3>Donations</h3></div>
<div class="ao-marq-item-description">
<ul>
<li>Online and offline donation pages
<li>Source tracking
<li>LYBUNT, SYBUNT, other detail reports
</ul>
</div>
</div>
<div class="ao-marq-item ao-marq-events">
<div class="ao-marq-item-label"><span></span></div>
<div class="ao-marq-item-title"><h3>Events</h3></div>
<div class="ao-marq-item-description">
<ul>
<li>Register for paid and unpaid events
<li>Supports multiple registrations
<li>Track attendance and participation
</ul>
</div>
</div>
<div class="ao-marq-item ao-marq-petitions">
<div class="ao-marq-item-label"><span></span></div>
<div class="ao-marq-item-title"><h3>Petitions</h3></div>
<div class="ao-marq-item-description">
<ul>
<li>Collect online and offline signatures 
<li>Targeted email campaigns
<li>Track progress towards goals
</ul>
</div>
</div>
<div class="ao-marq-item ao-marq-volunteer">
<div class="ao-marq-item-label"><span></span></div>
<div class="ao-marq-item-title"><h3>Volunteers</h3></div>
<div class="ao-marq-item-description">
<ul>
<li>Register online and offline volunteers
<li>Wait lists for popular functions
<li>Manage roles and participation
</ul>
</div>
</div>
</div>

<div class="content-holder">
<h4>Getting Started</h4>
<ul>
<li><a href="about/contact_tracking">Contact tracking with CRM Core</a>
<li><a href="about/crm_core_features">CRM Core features used in AbleOrganizer</a>
<li><a href="about/forms-and-content">How forms and content work together</a>
<li><a href="about/source-tracking">How source tracking works in AbleOrganizer</a>
<li><a href="about/contacts_reports_dashboards">Using contacts, reports and dashboards in CRM Core</a>
<li><a href="about/crm-core-form-builder">Using CRM Core\'s form builder</a>
<li><a href="about/accepting_online_payments">Accepting online payments through CRM Core</a>
</lu>
</div>

<div class="content-holder">
<h4>Pro Tools for Power Users</h4>
<ul>
<li>Configure payment processors
<li>Add custom fields for capturing contact information
<li>Customize the look and feel of the site
<li>Create custom HTML emails
<li>Sending HTML emails
<li>Create custom forms for tracking offline information
<li>Integrate with MailChimp Salesforce, Constant Contact
</lu>
</div>',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<h1 class="ao-marq-title">AbleOrganizer allows you to build effective, robust relationships with the communities you care about.</h1>
<div class="ao-marq equal-height-element">
<div class="ao-marq-item ao-marq-donations">
<div class="ao-marq-item-label"><span></span></div>
<div class="ao-marq-item-title">
<h3>Donations</h3>
</div>
<div class="ao-marq-item-description">
<ul><li>Online and offline donation pages
</li><li>Source tracking
</li><li>LYBUNT, SYBUNT, other detail reports
</li></ul></div>
</div>
<div class="ao-marq-item ao-marq-events">
<div class="ao-marq-item-label"><span></span></div>
<div class="ao-marq-item-title">
<h3>Events</h3>
</div>
<div class="ao-marq-item-description">
<ul><li>Register for paid and unpaid events
</li><li>Supports multiple registrations
</li><li>Track attendance and participation
</li></ul></div>
</div>
<div class="ao-marq-item ao-marq-petitions">
<div class="ao-marq-item-label"><span></span></div>
<div class="ao-marq-item-title">
<h3>Petitions</h3>
</div>
<div class="ao-marq-item-description">
<ul><li>Collect online and offline signatures
</li><li>Targeted email campaigns
</li><li>Track progress towards goals
</li></ul></div>
</div>
<div class="ao-marq-item ao-marq-volunteer">
<div class="ao-marq-item-label"><span></span></div>
<div class="ao-marq-item-title">
<h3>Volunteers</h3>
</div>
<div class="ao-marq-item-description">
<ul><li>Register online and offline volunteers
</li><li>Wait lists for popular functions
</li><li>Manage roles and participation
</li></ul></div>
</div>
</div>
<div class="content-holder">
<h4>Getting Started</h4>
<ul><li><a href="about/contact_tracking">Contact tracking with CRM Core</a>
</li><li><a href="about/crm_core_features">CRM Core features used in AbleOrganizer</a>
</li><li><a href="about/forms-and-content">How forms and content work together</a>
</li><li><a href="about/source-tracking">How source tracking works in AbleOrganizer</a>
</li><li><a href="about/contacts_reports_dashboards">Using contacts, reports and dashboards in CRM Core</a>
</li><li><a href="about/crm-core-form-builder">Using CRM Core\'s form builder</a>
</li><li><a href="about/accepting_online_payments">Accepting online payments through CRM Core</a><br /></li></ul></div>
<div class="content-holder">
<h4>Pro Tools for Power Users</h4>
<ul><li>Configure payment processors
</li><li>Add custom fields for capturing contact information
</li><li>Customize the look and feel of the site
</li><li>Create custom HTML emails
</li><li>Sending HTML emails
</li><li>Create custom forms for tracking offline information
</li><li>Integrate with MailChimp Salesforce, Constant Contact<br /></li></ul></div>
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
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2013-10-21 17:27:33 -0700',
  'url_alias' => 'front',
);
  return $nodes;
}
