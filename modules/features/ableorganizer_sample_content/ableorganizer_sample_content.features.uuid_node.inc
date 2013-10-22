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
  'uid' => 1,
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
  'revision_uid' => 1,
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
<li>How forms and content work together
<li>How source tracking works in AbleOrganizer
<li>Sending HTML emails
<li>Using contacts, reports and dashboards in CRM Core
<li>Building online donation forms
<li>Configuring event registration forms
<li>Creating online petitions
<li>Registering volunteer opportunities
</lu>
</div>

<div class="content-holder">
<h4>Pro Tools for Power Users</h4>
<ul>
<li>Configure payment processors
<li>Add custom fields for capturing contact information
<li>Customize the look and feel of the site
<li>Create custom HTML emails
<li>Create custom forms for tracking offline information
<li>Integrate with MailChimp Salesforce, Constant Contact
</lu>
</div>

',
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
<ul><li>How forms and content work together
</li><li>How source tracking works in AbleOrganizer
</li><li>Sending HTML emails
</li><li>Using contacts, reports and dashboards in CRM Core
</li><li>Building online donation forms
</li><li>Configuring event registration forms
</li><li>Creating online petitions
</li><li>Registering volunteer opportunities<br /></li></ul></div>
<div class="content-holder">
<h4>Pro Tools for Power Users</h4>
<ul><li>Configure payment processors
</li><li>Add custom fields for capturing contact information
</li><li>Customize the look and feel of the site
</li><li>Create custom HTML emails
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
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2013-10-21 17:27:33 -0700',
  'url_alias' => 'front',
);
  return $nodes;
}
