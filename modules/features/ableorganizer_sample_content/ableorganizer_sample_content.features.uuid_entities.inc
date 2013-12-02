<?php
/**
 * @file
 * ableorganizer_sample_content.features.uuid_entities.inc
 */

/**
 * Implements hook_uuid_default_entities().
 */
function ableorganizer_sample_content_uuid_default_entities() {
  $entities = array();

  $entities['ao_sample_content_dp'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/eaa3f19b-410b-4d75-ae42-05d5ad3565e6',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'full_html',
          'summary' => '',
          'value' => '<h2><span>How it Does It</span></h2><div class="ao-how-it-does-it">&nbsp;</div><div class="ao-down-arrow"></div>',
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
    'title' => 'Welcome to AbleOrganizer',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'front',
        'language' => 'und',
      ),
    ),
    'uuid' => 'eaa3f19b-410b-4d75-ae42-05d5ad3565e6',
  );
  $entities['ao_sample_content_dp'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/df0145b3-e0fa-43cd-9626-7cd9bd49060d',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'full_html',
          'summary' => '',
          'value' => '<p>Welcome to AbleOrganizer, a community engagement platform for&nbsp;civic groups, non-profits, political campaigns and other organizations. This software provides a powerful, effective platform for engaging&nbsp;constituents you can use to manage&nbsp;your web presence, collect&nbsp;information about people who care about your mission, or simply to make your group more efficient by using&nbsp;better tools for collaboration.</p><h3>Getting started</h3><p>This guide will take you through the basic steps of getting started with AbleOrganizer. It will explain how to configure the content management system,&nbsp;engagement tools, third party tools and services and other features.</p><h3>What comes with the platform</h3><p>Before diving too deep, it&nbsp;helps to start by understanding a little more about&nbsp;what comes with AbleOrganizer, and how everything&nbsp;works together.</p><p>The platform&nbsp;includes a number of components, which&nbsp;include:</p><ul><li><u>A content management system</u>, making it easy to share and update content.</li><li><u>A constituent relationship management (CRM) system</u>, allowing you to track information about contacts and get a 360 degree view of their involvement.</li><li><u>Engagement tools</u>&nbsp;for fundraising, event management, petitions and volunteer management.</li><li><u>Integration</u> with various third-party tools and services that help you get the most out of the platform.</li></ul><p>These components are designed to work together seamlessly and be managed through a simple, web-based administrative interface. For instance, if you need&nbsp;to create a fundraising page, you&nbsp;use the same tools you use to create a blog post. If you need to create a form for evert registration, you can easily deploy it alongside any other form of content.&nbsp;</p><p>Part of getting started with AbleOrganizer is setting up and configuring each of these components. One thing you might want to remember is that AbleOrganizer is open source software, which is free to download, customize and adapt to your specific needs. The&nbsp;platform includes a number of tools that allow you to&nbsp;automate common configuration tasks, which can be very useful if you need to set up the platform more that once or according to specific needs.</p><h3>Start with a clear idea</h3><p>It\'s also important to realize AbleOrganizer can be used in a variety of situations. Before you set up the system, it\'s important to have a clear sense of what you want to do with it.</p><p>Unlike some&nbsp;fundraising and organization platforms, AbleOrganizer can fill a lot of roles for organizations. Depending on what you are looking to get out of it, it can act in any or all of the following ways:</p><ul><li>Organizational websites: this platform can act as the public facing website for your organization.&nbsp;</li><li>Campaign websites and microsites: you can use this platform for campaigns and targeted microsites that compliment other sites in your network.</li><li>Constituent Relationship Management (CRM) system: you can use AbleOrganizer for managing information about contact relationships internally,&nbsp;without needing to take it public.&nbsp;</li><li>Turnkey chapter sites: you can use multiple instances of AbleOrganizer to operate websites for individual chapters in your organization.</li><li>Branded engagement platform: you can build your own version of AbleOrganizer that can be turned on and off in minutes.</li></ul><p>... and that\'s just to start.&nbsp;While AbleOrganizer can be used effectively in&nbsp;these&nbsp;traditional areas, the software&nbsp;is capable of doing a lot more. Because of the tight integration between content and contact information, you can use the platform to delivering some unique insights about people and their behaviors that go beyond these simple use cases.</p><p>It\'s easy to get caught up in the possibilities of the&nbsp;platform. Before you get started configuring the system, it\'s a good idea to write down how you plan to use it. If you are someone who is enthusiastic about software, you might want to&nbsp;refer back to this "mission statement" often throughout the configuration process.</p>',
        ),
      ),
    ),
    'cid' => 0,
    'comment' => 1,
    'comment_count' => 0,
    'field_image' => array(),
    'field_tags' => array(),
    'language' => 'und',
    'last_comment_name' => NULL,
    'last_comment_uid' => 1,
    'log' => '',
    'promote' => 0,
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
    'status' => 1,
    'sticky' => 0,
    'title' => 'Getting Started with AbleOrganizer',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'article',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'about',
        'language' => 'und',
      ),
    ),
    'uuid' => 'df0145b3-e0fa-43cd-9626-7cd9bd49060d',
  );
  $entities['ao_sample_content_dp'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/a525d2e1-e8ff-4edd-b73a-248586aac7e3',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'full_html',
          'summary' => '',
          'value' => '<p>This page explains how to work with AbleOrganizer and keep your system up to date.</p><h3>How to get it</h3><p>AbleOrganizer is open source software that is freely available for&nbsp;<a href="https://drupal.org/project/ableorganizer">download&nbsp;from the Drupal website</a>. This software will be continually improved and enhanced over time, and new updates will always be pubished first&nbsp;to this page. So it\'s a good idea to monitor this page and keep an eye out for updates as they emerge.&nbsp;</p><p><strong>Downloading from Git</strong></p><p>If you are interested in getting the latest, bleeding-edge version of AbleOrganizer, you can use the following commands to download a copy of the git repository.</p><p><code>git clone http://git.drupal.org/project/ableorganizer ableorganizer<br>cd ableorganizer<br>drush make build-ableorganizer.make [some subdirectory]</code></p><p>This will download a copy of the Drupal makefile for building the latest version of the platform. As with any ongoing development project, please be aware that some features in the latest versions of the system may not function exactly as expected, or could be entirely broken. If you suspect this is the case, you can always switch to an official release using the tags contained in the repository.</p><p><strong>Downloading the individual components</strong></p><p>You can also use the individual&nbsp;components of AbleOrganizer within an existing Drupal website. Each of the individual components within AbleOrganizer is maintained as it\'s own seaprate project on Drupal.org, including&nbsp;<a href="https://drupal.org/project/crm_core">CRM</a>, <a href="https://drupal.org/project/crm_core_donation">fundraising</a>, <a href="https://drupal.org/project/crm_core_petition">petitions</a>, <a href="https://drupal.org/project/crm_core_event">event</a> and <a href="https://drupal.org/project/crm_core_volunteer">volunteer management</a> (along with others that will emerge over time.) Simply download the relevant modules and turn them on in your Drupal website.</p><h3>How to install it</h3><p>With some minor exceptions,&nbsp;AbleOrganizer will run on any webserver capable of hosting a&nbsp;Drupal website.</p><p>The process for setting up AbleOrganizer is identical to that of any other install profile in Drupal.</p><p>Once you have set up a copy on your local system, AbleOrganizer is confiured using a web-based installer. This installer will take you through a series of options for setting it up, which allow you to select what components to include, whether to install sample content, and whether to install sample data. It will also allow you to configure currency and email settings, along with other settings that will emerge over time.</p><h3>How to keep it up to date</h3><p>Updating AbleOrganizer or any of it\'s components should always be done by downloading the latest version. Updating the&nbsp;individual modules that make up AbleOrganizer is not safe and can break your system.</p><p>The general process for updating AbleOrganizer is as follows:</p><ul><li>Make a copy of the database and all file directories.</li><li>(optional) Make a copy&nbsp;</li><li>(optional) Export copies of any custom features you have built for the platform.</li></ul>',
        ),
      ),
    ),
    'cid' => 0,
    'comment' => 1,
    'comment_count' => 0,
    'field_image' => array(),
    'field_tags' => array(),
    'language' => 'und',
    'last_comment_name' => NULL,
    'last_comment_uid' => 1,
    'log' => '',
    'promote' => 0,
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
    'status' => 1,
    'sticky' => 0,
    'title' => 'Installing AbleOrganizer',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'article',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'about/installation',
        'language' => 'und',
      ),
    ),
    'uuid' => 'a525d2e1-e8ff-4edd-b73a-248586aac7e3',
  );
  $entities['ao_sample_content_dp'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/1af790cf-e4b6-4387-9b82-5b06045d67f3',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'full_html',
          'summary' => '',
          'value' => '<p>Configuring bulk-email</p>',
        ),
      ),
    ),
    'cid' => 0,
    'comment' => 1,
    'comment_count' => 0,
    'field_image' => array(),
    'field_tags' => array(),
    'language' => 'und',
    'last_comment_name' => NULL,
    'last_comment_uid' => 1,
    'log' => '',
    'promote' => 0,
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
    'status' => 1,
    'sticky' => 0,
    'title' => 'Configuring bulk-email',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'article',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'about/configuring-bulk-email',
        'language' => 'und',
      ),
    ),
    'uuid' => '1af790cf-e4b6-4387-9b82-5b06045d67f3',
  );
  $entities['ao_sample_content_dp'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/24f9880a-9633-460e-a141-af6f4e3806b3',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'full_html',
          'summary' => '',
          'value' => '<p>Configuring Payment Processors</p>',
        ),
      ),
    ),
    'cid' => 0,
    'comment' => 1,
    'comment_count' => 0,
    'field_image' => array(),
    'field_tags' => array(),
    'language' => 'und',
    'last_comment_name' => NULL,
    'last_comment_uid' => 1,
    'log' => '',
    'promote' => 0,
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
    'status' => 1,
    'sticky' => 0,
    'title' => 'Configuring Payment Processors',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'article',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'about/configuring-payment-processors',
        'language' => 'und',
      ),
    ),
    'uuid' => '24f9880a-9633-460e-a141-af6f4e3806b3',
  );
  $entities['ao_sample_content_dp'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/6ae94b3f-0758-4648-a0dc-bdc6154e257e',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'full_html',
          'summary' => '',
          'value' => '<p>Working with&nbsp;contact records</p><h3>Adding custom fields</h3><p>Working with&nbsp;contact records</p><h3>Modifying default fields</h3><p>Working with&nbsp;contact records</p><h3>Controlling the appearance</h3><p>Working with&nbsp;contact records</p>',
        ),
      ),
    ),
    'cid' => 0,
    'comment' => 1,
    'comment_count' => 0,
    'field_image' => array(),
    'field_tags' => array(),
    'language' => 'und',
    'last_comment_name' => NULL,
    'last_comment_uid' => 1,
    'log' => '',
    'promote' => 0,
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
    'status' => 1,
    'sticky' => 0,
    'title' => 'Working with contact records',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'article',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'about/configuring-contact-records',
        'language' => 'und',
      ),
    ),
    'uuid' => '6ae94b3f-0758-4648-a0dc-bdc6154e257e',
  );
  $entities['ao_sample_content_dp'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/07b98535-659d-4b29-85c2-bda518991649',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'full_html',
          'summary' => '',
          'value' => '<p>Configuring activity records</p>',
        ),
      ),
    ),
    'cid' => 0,
    'comment' => 1,
    'comment_count' => 0,
    'field_image' => array(),
    'field_tags' => array(),
    'language' => 'und',
    'last_comment_name' => NULL,
    'last_comment_uid' => 1,
    'log' => '',
    'promote' => 0,
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
    'status' => 1,
    'sticky' => 0,
    'title' => 'Configuring activity records',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'article',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'about/configuring-activity-records',
        'language' => 'und',
      ),
    ),
    'uuid' => '07b98535-659d-4b29-85c2-bda518991649',
  );
  $entities['ao_sample_content_dp'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/f2023f44-1356-4d6b-aa31-c3f201350809',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'full_html',
          'summary' => '',
          'value' => '<p>Configuring relationships</p>',
        ),
      ),
    ),
    'cid' => 0,
    'comment' => 1,
    'comment_count' => 0,
    'field_image' => array(),
    'field_tags' => array(),
    'language' => 'und',
    'last_comment_name' => NULL,
    'last_comment_uid' => 1,
    'log' => '',
    'promote' => 0,
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
    'status' => 1,
    'sticky' => 0,
    'title' => 'Configuring relationships',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'article',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'about/configuring-relationships',
        'language' => 'und',
      ),
    ),
    'uuid' => 'f2023f44-1356-4d6b-aa31-c3f201350809',
  );

  return $entities;
}
