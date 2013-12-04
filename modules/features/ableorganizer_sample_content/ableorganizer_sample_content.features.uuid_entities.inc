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
          'value' => '<p>Welcome to AbleOrganizer, a community engagement platform for&nbsp;civic groups, non-profits, political campaigns and other organizations. This software provides a powerful, effective platform for engaging&nbsp;constituents you can use to manage&nbsp;your web presence, collect&nbsp;information about people who care about your mission, or simply to make your group more efficient by using&nbsp;better tools for collaboration.</p><h3>Getting started</h3><p>This guide will take you through the basic steps of getting started with AbleOrganizer. It will explain how to configure the content management system,&nbsp;engagement tools, third party tools and services and other features.</p><h3>What comes with the platform</h3><p>Before diving too deep, it&nbsp;helps to start by understanding a little more about&nbsp;what comes with AbleOrganizer, and how everything&nbsp;works together.</p><p>The platform&nbsp;includes a number of components, which&nbsp;include:</p><ul><li><strong>A content management system</strong>, making it easy to share and update content.</li><li><strong>A constituent relationship management (CRM) system</strong>, allowing you to track information about contacts and get a 360 degree view of their involvement.</li><li><strong>Engagement tools</strong>&nbsp;for fundraising, event management, petitions and volunteer management.</li><li><strong>Integration</strong> with various third-party tools and services that help you get the most out of the platform.</li></ul><p>These components are designed to work together seamlessly and be managed through a simple, web-based administrative interface. For instance, if you need&nbsp;to create a fundraising page, you&nbsp;use the same tools you use to create a blog post. If you need to create a form for evert registration, you can easily deploy it alongside any other form of content.&nbsp;</p><p>Part of getting started with AbleOrganizer is setting up and configuring each of these components. One thing you might want to remember is that AbleOrganizer is open source software, which is free to download, customize and adapt to your specific needs. The&nbsp;platform includes a number of tools that allow you to&nbsp;automate common configuration tasks, which can be very useful if you need to set up the platform more that once or according to specific needs.</p><h3>Start with a clear idea</h3><p>It\'s also important to realize AbleOrganizer can be used in a variety of situations. Before you set up the system, it\'s important to have a clear sense of what you want to do with it.</p><p>Unlike some&nbsp;fundraising and organization platforms, AbleOrganizer can fill a lot of roles for organizations. Depending on what you are looking to get out of it, it can act in any or all of the following ways:</p><ul><li>Organizational websites: this platform can act as the public facing website for your organization.&nbsp;</li><li>Campaign websites and microsites: you can use this platform for campaigns and targeted microsites that compliment other sites in your network.</li><li>Constituent Relationship Management (CRM) system: you can use AbleOrganizer for managing information about contact relationships internally,&nbsp;without needing to take it public.&nbsp;</li><li>Turnkey chapter sites: you can use multiple instances of AbleOrganizer to operate websites for individual chapters in your organization.</li><li>Branded engagement platform: you can build your own version of AbleOrganizer that can be turned on and off in minutes.</li></ul><p>... and that\'s just to start.&nbsp;While AbleOrganizer can be used effectively in&nbsp;these&nbsp;traditional areas, the software&nbsp;is capable of doing a lot more. Because of the tight integration between content and contact information, you can use the platform to delivering some unique insights about people and their behaviors that go beyond these simple use cases.</p><p>It\'s easy to get caught up in the possibilities of the&nbsp;platform. Before you get started configuring the system, it\'s a good idea to write down how you plan to use it. If you are someone who is enthusiastic about software, you might want to&nbsp;refer back to this "mission statement" often throughout the configuration process.</p>',
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
    'menu_link' => array(
      'menu_name' => 'menu-getting-started',
      'mlid' => 980,
      'plid' => 0,
      'link_path' => 'node/2',
      'router_path' => 'node/%',
      'link_title' => 'Getting Started with AbleOrganizer',
      'options' => array(),
      'module' => 'menu',
      'hidden' => 0,
      'external' => 0,
      'has_children' => 0,
      'expanded' => 0,
      'weight' => -50,
      'depth' => 1,
      'customized' => 1,
      'p1' => 980,
      'p2' => 0,
      'p3' => 0,
      'p4' => 0,
      'p5' => 0,
      'p6' => 0,
      'p7' => 0,
      'p8' => 0,
      'p9' => 0,
      'updated' => 0,
      'vid' => 107,
      'uuid' => '2077fb9e-d03a-4bd1-82f5-84dee4556847',
      'path' => 'node/%',
      'load_functions' => array(
        1 => 'node_load',
      ),
      'to_arg_functions' => '',
      'access_callback' => 'node_access',
      'access_arguments' => 'a:2:{i:0;s:4:"view";i:1;i:1;}',
      'page_callback' => 'node_page_view',
      'page_arguments' => 'a:1:{i:0;i:1;}',
      'delivery_callback' => '',
      'fit' => 2,
      'number_parts' => 2,
      'context' => 0,
      'tab_parent' => '',
      'tab_root' => 'node/%',
      'title' => 'Getting Started with AbleOrganizer',
      'title_callback' => 'node_page_title',
      'title_arguments' => 'a:1:{i:0;i:1;}',
      'theme_callback' => '',
      'theme_arguments' => 'a:0:{}',
      'type' => 6,
      'description' => '',
      'position' => '',
      'include_file' => '',
      'link_weight' => -50,
      'href' => 'node/2',
      'access' => TRUE,
      'localized_options' => array(),
    ),
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
    'menu_link' => array(
      'menu_name' => 'menu-getting-started',
      'mlid' => 891,
      'plid' => 0,
      'link_path' => 'node/3',
      'router_path' => 'node/%',
      'link_title' => 'Installing AbleOrganizer',
      'options' => array(),
      'module' => 'menu',
      'hidden' => 0,
      'external' => 0,
      'has_children' => 0,
      'expanded' => 0,
      'weight' => -49,
      'depth' => 1,
      'customized' => 1,
      'p1' => 891,
      'p2' => 0,
      'p3' => 0,
      'p4' => 0,
      'p5' => 0,
      'p6' => 0,
      'p7' => 0,
      'p8' => 0,
      'p9' => 0,
      'updated' => 0,
      'vid' => 33,
      'uuid' => '1ec6f68d-e5d4-422f-b908-250b9b9bf5cf',
      'path' => 'node/%',
      'load_functions' => array(
        1 => 'node_load',
      ),
      'to_arg_functions' => '',
      'access_callback' => 'node_access',
      'access_arguments' => 'a:2:{i:0;s:4:"view";i:1;i:1;}',
      'page_callback' => 'node_page_view',
      'page_arguments' => 'a:1:{i:0;i:1;}',
      'delivery_callback' => '',
      'fit' => 2,
      'number_parts' => 2,
      'context' => 0,
      'tab_parent' => '',
      'tab_root' => 'node/%',
      'title' => 'Installing AbleOrganizer',
      'title_callback' => 'node_page_title',
      'title_arguments' => 'a:1:{i:0;i:1;}',
      'theme_callback' => '',
      'theme_arguments' => 'a:0:{}',
      'type' => 6,
      'description' => '',
      'position' => '',
      'include_file' => '',
      'link_weight' => -49,
      'href' => 'node/3',
      'access' => TRUE,
      'localized_options' => array(),
    ),
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
    'menu_link' => array(
      'menu_name' => 'menu-getting-started',
      'mlid' => 892,
      'plid' => 0,
      'link_path' => 'node/4',
      'router_path' => 'node/%',
      'link_title' => 'Configuring bulk-email',
      'options' => array(),
      'module' => 'menu',
      'hidden' => 0,
      'external' => 0,
      'has_children' => 0,
      'expanded' => 0,
      'weight' => -44,
      'depth' => 1,
      'customized' => 1,
      'p1' => 892,
      'p2' => 0,
      'p3' => 0,
      'p4' => 0,
      'p5' => 0,
      'p6' => 0,
      'p7' => 0,
      'p8' => 0,
      'p9' => 0,
      'updated' => 0,
      'vid' => 71,
      'uuid' => 'c8d91f4c-e5ba-4b1a-b7d4-7c4fed305102',
      'path' => 'node/%',
      'load_functions' => array(
        1 => 'node_load',
      ),
      'to_arg_functions' => '',
      'access_callback' => 'node_access',
      'access_arguments' => 'a:2:{i:0;s:4:"view";i:1;i:1;}',
      'page_callback' => 'node_page_view',
      'page_arguments' => 'a:1:{i:0;i:1;}',
      'delivery_callback' => '',
      'fit' => 2,
      'number_parts' => 2,
      'context' => 0,
      'tab_parent' => '',
      'tab_root' => 'node/%',
      'title' => 'Configuring bulk-email',
      'title_callback' => 'node_page_title',
      'title_arguments' => 'a:1:{i:0;i:1;}',
      'theme_callback' => '',
      'theme_arguments' => 'a:0:{}',
      'type' => 6,
      'description' => '',
      'position' => '',
      'include_file' => '',
      'link_weight' => -44,
      'href' => 'node/4',
      'access' => TRUE,
      'localized_options' => array(),
    ),
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
          'value' => '<p>In order to process payments through AbleOrganizer, you will need to configure one or more payment processors. The software is designed to support multiple payment processors that can be configured on a per-form basis. This means, for instance, you could set up separate accounts for receiving donations and funds for event registration.</p><p>&nbsp;</p><p>&nbsp;</p>',
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
    'menu_link' => array(
      'menu_name' => 'menu-getting-started',
      'mlid' => 893,
      'plid' => 0,
      'link_path' => 'node/5',
      'router_path' => 'node/%',
      'link_title' => 'Configuring payment processors',
      'options' => array(
        'attributes' => array(),
      ),
      'module' => 'menu',
      'hidden' => 0,
      'external' => 0,
      'has_children' => 0,
      'expanded' => 0,
      'weight' => -43,
      'depth' => 1,
      'customized' => 1,
      'p1' => 893,
      'p2' => 0,
      'p3' => 0,
      'p4' => 0,
      'p5' => 0,
      'p6' => 0,
      'p7' => 0,
      'p8' => 0,
      'p9' => 0,
      'updated' => 0,
      'vid' => 106,
      'uuid' => '2b88efb4-f25a-423f-bc72-9c78daf50a9a',
      'path' => 'node/%',
      'load_functions' => array(
        1 => 'node_load',
      ),
      'to_arg_functions' => '',
      'access_callback' => 'node_access',
      'access_arguments' => 'a:2:{i:0;s:4:"view";i:1;i:1;}',
      'page_callback' => 'node_page_view',
      'page_arguments' => 'a:1:{i:0;i:1;}',
      'delivery_callback' => '',
      'fit' => 2,
      'number_parts' => 2,
      'context' => 0,
      'tab_parent' => '',
      'tab_root' => 'node/%',
      'title' => 'Configuring payment processors',
      'title_callback' => 'node_page_title',
      'title_arguments' => 'a:1:{i:0;i:1;}',
      'theme_callback' => '',
      'theme_arguments' => 'a:0:{}',
      'type' => 6,
      'description' => '',
      'position' => '',
      'include_file' => '',
      'link_weight' => -43,
      'href' => 'node/5',
      'access' => TRUE,
      'localized_options' => array(
        'attributes' => array(),
      ),
    ),
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
          'value' => '<p>One of the first things you will want to do is&nbsp;get familiar with contact records.&nbsp;Contact records are used to&nbsp;store information about people, and to&nbsp;present information about them in meaningful ways. You will want to configure the system to store the information you consider important, and to present this information in a way that is appropriate for your organization.</p><p>A few things to understand about contact records and how they are managed in AbleOrganizer:</p><ul><li>The software supports multiple contact types. This includes individuals, households and organizations.&nbsp;</li><li>The software supports unlimited custom fields for each contact type.&nbsp;</li><li>The software ships with a set of default fields for storing information about contacts. These fields can all be modified / deleted, except for the name field. This field is required to ensure AbleOrganizer works properly.&nbsp;</li></ul><h3>Working with contact types</h3><p>AbleOrganizer provides a&nbsp;web-based administrative interface for managing contacts. You can access it within the <a href="/admin/structure/crm-core/contact-types">admin section of the website</a>, which will give you a list of all the contact types that are configured for the site. This is the main contact management interface, you can&nbsp;use this screen to add new contact types or edit any of the existing ones.</p><p>For each contact type, there are a number of links to the left of the name.&nbsp;</p><ul><li><strong>Edit</strong> allows you to modify some of the basic details about the contact type itself.&nbsp;</li><li><strong>Manage fields</strong> allows you to add, modify or&nbsp;delete any of the fields associated with each contact type.</li><li><strong>Manage display</strong> allows you to control the order in which the fields appear, when presented on a contact record.&nbsp; Please note: the overall appearance of contact records is controlled in other ways, this link simply lets you control the order of fields.</li><li><strong>Clone</strong> allows you to duplicate the overall structure of a contact type, to use as a template for other contact types.</li><li><strong>Delete</strong> allows you to remove a contact type, along with all of it\'s associated records, from your system.</li><li><strong>Export</strong> allows you to export the structure of a contact type for use in other websites.</li></ul><h3>Configuring custom&nbsp;fields for contacts</h3><p>AbleOrganizer allows you to configure a distinct set of fields for each contact type. You can add, edit and delete the fields associated with each contact type through the web-based administrative interface.</p><p>From the&nbsp;<a href="/admin/structure/crm-core/contact-types">main contact administration screen</a>, select a contact type and click the manage fields link. This screen will provide some basic information about how each field is configured, along with controls that allow you to add new fields to the system. The fields appear in the order they will appear when being entered into the system. You can control the order of fields by dragging them into the desired order, using the handle to the left of the field name.</p><p>Each field will have a record that lists some basic information, which includes:</p><ul><li><strong>Machine name</strong>, which is a special code that is used for tokens within the system. You can use this machine name when you want to pre-populate some forms and reports. Don\'t worry about trying to memorize the machine names for each field, there are tools that allow you to select them.</li><li><strong>Field type</strong>, which explains what kind of information is collected in this field. AbleOrganizer allows you to collect information in a lot of ways - addresses, phone numbers, social media accounts, email addresses, etc.&nbsp;You can use different field types to handle different types of information.</li><li><strong>Widget</strong>, which tells you how information is being collected in this field. Certain field types, such as dates, provide multiple tools for collecting information. You can use widgets to control the forms that are used to collect information.</li><li><strong>Edit</strong>, which allows you to change the settings associated with the field.</li><li><strong>Delete</strong>, which allows you to remove the field (and all of it\'s data) from your site.</li></ul><h3>Adding new fields and reusing fields</h3><p>When viewing the fields associated with a contact record, you can also add new fields. Scroll down to the bottom of the list of fields, and you will see a box labelled \'Add new field.\'</p><p>Enter a name for the field, and a machine name will automatically be generated. From there, you can select a field type for the field, and also select the widget that will be used to collect information. Once you are done, click the save button at the bottom of the screen to go to the field settings page. The field settings page allows you to control other aspects of how information will be collected. AbleOrganizer ships with a variety of field types, and new ones can be downloaded from Drupal.org to expand the set of field types available for use. The specific field settings will vary based on the field type.</p><p>Some things to remember when creating new fields:</p><ul><li>You can always change the widget used to collect information, but you can\'t change the field type once it has been created.</li><li>You can edit the machine name of the field when it is being created, but not after it has been saved to the system.</li><li>You can reuse the same fields for storing contact information on multiple contact types. Below the box for adding a new field is one for adding an existing field. You can select any field stored in the system from the drop down list.</li></ul><h3>Managing the display of contact records</h3><p>The&nbsp;<a href="/admin/structure/crm-core/contact-types">main contact administration screen</a>&nbsp;provides tools that allow you to control the display of contact records. These tools control the order in which fields associated with contact records are displayed on a page by default, and whether or not each field is visible to users.&nbsp;</p><p>You can control the display of fields by clicking the manage display link for a contact type. Each contact type has it\'s own display settings. You will be taken to a screen that is similar to the one for editing fields. It will include a list of fields for the contact type, along with a set of options for each field.</p><ul><li>The Label option allows you to control whether or not a label is displayed with each field.</li><li>The Format option allows you to control how the field will be rendered. The options available change depending on the field type.</li><li>Some fields feature a configuration icon all the way to the right, which provides you with more advanced options for how a&nbsp;field will display. Image fields, for instance, allow you to control the size of an image when it is being presented. The options will vary based on the field type.</li></ul><h3>Default field settings</h3><p>Various components in AbleOrganizer depend on default field settings. For instance, when it\'s time to send an email to a contact, AbleOrganizer will want to know the correct email address to use. Since contact records&nbsp;could have multiple fields for storing email addresses, the system needs to know the right one.</p><p>To solve this problem, AbleOrganizer allows you to configure default fields for use with contact records. These default fields will be used whenever the system needs to pull specific information about a contact, such as phone number, mailing address and email address. To configure the default fields for contact records, go to the&nbsp;<a href="/admin/structure/crm-core/contact-types">main contact administration screen</a>&nbsp;and select the edit link for a contact type. A set of select lists labelled \'Primary Fields\' will appear at the bottom of this form. Use this for&nbsp;setting the default fields for accessing contact information throughout AbleOrganizer.&nbsp;</p><h3>Best practices for managing&nbsp;contact types</h3><p>Working with&nbsp;contact records can be complex, so it helps to have a plan in mind when setting up contact records on your website. There are a few things you can do to get the most of your site by putting some thought into your contact records before sitting down to configure them.</p><ul><li>It\'s usually a good idea to write down a list of fields you need to support before creating fields in AbleOrganizer. Considering using a spreadsheet to model the fields you are going to use before creating the fields in AbleOrganizer. This can save a lot of time and frustration, and prevent data loss from happening.</li><li>Make sure you are not trying to track an activity within a contact record. If you are trying to store information about the last donation received from someone, it\'s usually better to store this as an activity.</li><li>In general, the fewer contact types you use, the better. The default ones&nbsp;that ship with AbleOrganizer are appropriate in most situations. If you need to segment your contacts more selectively, use tags within the contact types. For instance, if you needed to create a list of high net worth donors, it\'s usually better to add a field that allows you to tag your contacts than to create a unique contact type for this category of contacts.</li><li>When you are configuring fields, it\'s important to remember you can control what fields can be seen by users, and which ones can only be seen by administrators. For instance, just because a geofield is associated with a contact record, that does not mean everyone needs to see it.</li><li>If you are familiar with how to manage a Drupal website, the interface for editing a contact record probably looks familiar to you. The developers of AbleOrganizer went to great pains to ensure the software works the same way&nbsp;as other things in Drupal.&nbsp;In general, it\'s safe to assume contact types are managed the same way as content types.</li></ul>',
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
    'menu_link' => array(
      'menu_name' => 'menu-getting-started',
      'mlid' => 894,
      'plid' => 0,
      'link_path' => 'node/6',
      'router_path' => 'node/%',
      'link_title' => 'Configuring contact records',
      'options' => array(
        'attributes' => array(),
      ),
      'module' => 'menu',
      'hidden' => 0,
      'external' => 0,
      'has_children' => 0,
      'expanded' => 0,
      'weight' => -47,
      'depth' => 1,
      'customized' => 1,
      'p1' => 894,
      'p2' => 0,
      'p3' => 0,
      'p4' => 0,
      'p5' => 0,
      'p6' => 0,
      'p7' => 0,
      'p8' => 0,
      'p9' => 0,
      'updated' => 0,
      'vid' => 68,
      'uuid' => '0dfb1a84-d268-4c6f-841c-dab83ec5f4b2',
      'path' => 'node/%',
      'load_functions' => array(
        1 => 'node_load',
      ),
      'to_arg_functions' => '',
      'access_callback' => 'node_access',
      'access_arguments' => 'a:2:{i:0;s:4:"view";i:1;i:1;}',
      'page_callback' => 'node_page_view',
      'page_arguments' => 'a:1:{i:0;i:1;}',
      'delivery_callback' => '',
      'fit' => 2,
      'number_parts' => 2,
      'context' => 0,
      'tab_parent' => '',
      'tab_root' => 'node/%',
      'title' => 'Configuring contact records',
      'title_callback' => 'node_page_title',
      'title_arguments' => 'a:1:{i:0;i:1;}',
      'theme_callback' => '',
      'theme_arguments' => 'a:0:{}',
      'type' => 6,
      'description' => '',
      'position' => '',
      'include_file' => '',
      'link_weight' => -47,
      'href' => 'node/6',
      'access' => TRUE,
      'localized_options' => array(
        'attributes' => array(),
      ),
    ),
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
    'title' => 'Configuring contact records',
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
          'value' => '<p>One of the strengths of AbleOrganizer is it\'s ability to track activities.&nbsp;Activity records are used to store information about interaction with contacts, and to present this information in an organized fashion. Activities are associated with contact records, which gives you a direct means to track&nbsp;interaction with people over time.</p><p>A few things to understand about activity types:</p><ul><li>The software includes a number of pre-configured activity types. These correspond to the features installed with AbleOrganizer.&nbsp;</li><li>You can create your own activity types track information that&nbsp;does not come pre-configured in the system. For instance, you can create an activity type to track&nbsp;membership.</li><li>The software supports unlimited custom fields for each activity&nbsp;type.&nbsp;</li><li>The interface for managing activity types is very similar to the one for managing contacts. Some of this might seem repetitive.&nbsp;</li></ul><h3>Pre-configured activity types</h3><p>AbleOrganizer includes a number of pre-configured activity types that are used by the software to collect information and construct reports. Some of these are more&nbsp;important than others.</p><p>The pre-configured activity types that are important for the operations of the software include:</p><ul><li><strong>Donations</strong>, which is used to track donations.</li><li><strong>Even registration</strong>, which is used to track event registration.</li><li><strong>Petition signature</strong>, which is used to track petition signatures.</li><li><strong>Volunteer commitments</strong>, which is used to track sign-ups for volunteer opportunities.</li></ul><p>These activity types will or will not appear based on how you have set up AbleOrganizer. If you have not installed the donation feature, for instance, there will not be an activity type for it.&nbsp;</p><p>For each of the activity types listed, it is safe to add fields to each one, but be careful not to delete certain fields that may affect the operations of the software. You can feel free to&nbsp;modify these&nbsp;fields, but do not delete&nbsp;them.</p><ul><li><strong>Source</strong>: used to track the source of an activity.&nbsp;</li><li><strong>Date received</strong> (all): used to track the date an activity actually took place, instead of the date it was added to the system. AKA Registration date, Date of signature.</li><li><strong>Amount</strong> (donation, event registration): used to track the actual amount of a donation.&nbsp;</li><li><strong>Donation page</strong> (donations): used to track the web page where a donation was received.</li><li><strong>View publicly</strong> (event registration, petition&nbsp;signature): used to track whether or not a user wants their registration to be viewed publicly.</li><li><strong>Status</strong> (event registration): used to track whether or not someone actually attended an event.</li><li><strong>Registration date</strong> (event registration): used to track the date someone actually signed up for an event.</li><li><strong>Personal message</strong> (petition signature): used to track personal messages included as part of petition signatures.</li><li><strong>Petition targets</strong> (petition signature): used to track the targets of a mailing campaign.</li><li><strong>Volunteer opportunity</strong> (volunteer commitment): used to track the opportunity associated with a commitment.</li><li><strong>Status</strong> (volunteer commitment): used to track wether or not someone showed up for a volunteer commitment.</li></ul><h3>Working with activity types</h3><p>AbleOrganizer provides a web-based administrative interface for managing activities. You can access it within the&nbsp;<a href="/admin/structure/crm-core/activity-types">admin section of the website</a>, which will give you a list of all the activity types that are configured for the site. This is the main activity&nbsp;management interface, you can use this screen to add new activity&nbsp;types or edit any of the existing ones.</p><p>For each activity type, there are a number of links to the left of the name.&nbsp;</p><ul><li><strong>Edit</strong> allows you to modify some of the basic details about the activity type itself.&nbsp;</li><li><strong>Manage fields</strong> allows you to add, modify or delete any of the fields associated with each activity type.</li><li><strong>Manage display</strong> allows you to control the order in which the fields appear, when presented on an activity record. &nbsp;Please note: the overall appearance of activity records is controlled in other ways, this link simply lets you control the order of fields.</li><li><strong>Clone</strong> allows you to duplicate the overall structure of an activity type, to use as a template for other contact types.</li><li><strong>Delete</strong> allows you to remove an activity&nbsp;type, along with all of it\'s associated records, from your system.</li><li><strong>Export</strong> allows you to export the structure of an activity type for use in other websites.</li></ul><h3>Configuring custom fields for activity types</h3><p>AbleOrganizer allows you to configure a distinct set of fields for each activity&nbsp;type. You can add, edit and delete the fields associated with each activity type through the web-based administrative interface.</p><p>From the <a href="/admin/structure/crm-core/activity-types">main activity administration screen</a>, select an activity&nbsp;type and click the manage fields link. This screen will provide some basic information about how each field is configured, along with controls that allow you to add new fields to the system. The fields appear in the order they will appear when being entered into the system. You can control the order of fields by dragging them into the desired order, using the handle to the left of the field name.</p><p>Each field will have a record that lists some basic information, which includes:</p><ul><li><strong>Machine name</strong>, which is a special code that is used for tokens within the system. You can use this machine name when you want to pre-populate some forms and reports. Don\'t worry about trying to memorize the machine names for each field, there are tools that allow you to select them.</li><li><strong>Field type</strong>, which explains what kind of information is collected in this field. AbleOrganizer allows you to collect information in a lot of ways - addresses, phone numbers, social media accounts, email addresses, etc. You can use different field types to handle different types of information.</li><li><strong>Widget</strong>, which tells you how information is being collected in this field. Certain field types, such as dates, provide multiple tools for collecting information. You can use widgets to control the forms that are used to collect information.</li><li><strong>Edit</strong>, which allows you to change the settings associated with the field.</li><li><strong>Delete</strong>, which allows you to remove the field (and all of it\'s data) from your site.</li></ul><h3>Adding new fields and reusing fields</h3><p>When viewing the fields associated with an activity&nbsp;record, you can also add new fields. Scroll down to the bottom of the list of fields, and you will see a box labelled \'Add new field.\'</p><p>Enter a name for the field, and a machine name will automatically be generated. From there, you can select a field type for the field, and also select the widget that will be used to collect information. Once you are done, click the save button at the bottom of the screen to go to the field settings page. The field settings page allows you to control other aspects of how information will be collected. AbleOrganizer ships with a variety of field types, and new ones can be downloaded from Drupal.org to expand the set of field types available for use. The specific field settings will vary based on the field type.</p><p>Some things to remember when creating new fields:</p><ul><li>You can always change the widget used to collect information, but you can\'t change the field type once it has been created.</li><li>You can edit the machine name of the field when it is being created, but not after it has been saved to the system.</li><li>You can reuse the same fields for storing contact information on multiple activity&nbsp;types. Below the box for adding a new field is one for adding an existing field. You can select any field stored in the system from the drop down list.</li></ul><h3>Managing the display of activity records</h3><p>The <a href="/admin/structure/crm-core/activity-types">main activity administration screen</a> provides tools that allow you to control the display of activity&nbsp;records. These tools control the order in which fields associated with activity&nbsp;records are displayed on a page by default, and whether or not each field is visible to users.&nbsp;</p><p>You can control the display of fields by clicking the manage display link for an activity&nbsp;type. Each activity type has it\'s own display settings. You will be taken to a screen that is similar to the one for editing fields. It will include a list of fields for the activity type, along with a set of options for each field.</p><ul><li>The Label option allows you to control whether or not a label is displayed with each field.</li><li>The Format option allows you to control how the field will be rendered. The options available change depending on the field type.</li><li>Some fields feature a configuration icon all the way to the right, which provides you with more advanced options for how a field will display. Image fields, for instance, allow you to control the size of an image when it is being presented. The options will vary based on the field type.</li></ul><h3>Best practices for managing activity types</h3><p>Tracking interaction with contacts can be complex. It\'s usually a good idea to plan for how you want to track activities before creating them in the system.</p><p>In general, the best practice is to use activity types to model business processes within your organization. Any time you want to capture information about interaction with a contact, store it in a way that is recognizably similar to the way you handle that information offline. If you have obligations to report on that information (for instance, as part of a grant), make sure it is being captured in the system. Taking these two steps ensures users will be able to understand how information is being tracked, and that you will have the information you need when it comes time to generate reports.</p><p>Beyond this basic suggestion for how to use activity types, here are some other things to consider:</p><ul><li>It\'s usually a good idea to have a list that details the information you plan to capture in your activity types before taking the time to configure them. Using a spreadsheet to track what you expect to capture, and how it needs to be stored, can be very revealing.</li><li>Make sure you are not trying to capture contact information in your activities. The best place for someone\'s home address is as part of their contact record, and the software gives you tools that allow you to enter this information through a single interface.</li><li>Unlike contact records, use as many activity types as you wish. When modelling data, it\'s best to track activity types at an atomic level than to try and categorize them through fields. For instance, if you are planning to add pledge capabilities to your site, it is often better to create a new activity type for pledges than to try and retrofit them into donations.</li><li>When you create activity records, it\'s often a good idea to include fields for tracking a source and a date received. These fields can be used to track information based on where it comes from, and when it was actually received (instead of when it was entered into the system). They are very useful if you plan to use AbleOrganizer to track offline information or automate business processes.</li><li style="margin: 0px; padding: 0px; border: 0px; outline: 0px; vertical-align: baseline; font-family: inherit; font-size: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: inherit;">If you are familiar with how to manage a Drupal website, the interface for editing an activity&nbsp;record probably looks familiar to you. The developers of AbleOrganizer went to great pains to ensure the software works the same way&nbsp;as other things in Drupal.&nbsp;In general, it\'s safe to assume activity types are managed the same way as content types.</li></ul>',
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
    'menu_link' => array(
      'menu_name' => 'menu-getting-started',
      'mlid' => 890,
      'plid' => 0,
      'link_path' => 'node/7',
      'router_path' => 'node/%',
      'link_title' => 'Configuring activity records',
      'options' => array(),
      'module' => 'menu',
      'hidden' => 0,
      'external' => 0,
      'has_children' => 0,
      'expanded' => 0,
      'weight' => -46,
      'depth' => 1,
      'customized' => 1,
      'p1' => 890,
      'p2' => 0,
      'p3' => 0,
      'p4' => 0,
      'p5' => 0,
      'p6' => 0,
      'p7' => 0,
      'p8' => 0,
      'p9' => 0,
      'updated' => 0,
      'vid' => 69,
      'uuid' => '0b82bfb4-5527-4b16-a872-ba8ba0ab0e98',
      'path' => 'node/%',
      'load_functions' => array(
        1 => 'node_load',
      ),
      'to_arg_functions' => '',
      'access_callback' => 'node_access',
      'access_arguments' => 'a:2:{i:0;s:4:"view";i:1;i:1;}',
      'page_callback' => 'node_page_view',
      'page_arguments' => 'a:1:{i:0;i:1;}',
      'delivery_callback' => '',
      'fit' => 2,
      'number_parts' => 2,
      'context' => 0,
      'tab_parent' => '',
      'tab_root' => 'node/%',
      'title' => 'Configuring activity records',
      'title_callback' => 'node_page_title',
      'title_arguments' => 'a:1:{i:0;i:1;}',
      'theme_callback' => '',
      'theme_arguments' => 'a:0:{}',
      'type' => 6,
      'description' => '',
      'position' => '',
      'include_file' => '',
      'link_weight' => -46,
      'href' => 'node/7',
      'access' => TRUE,
      'localized_options' => array(),
    ),
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
          'value' => '<p>Configuring relationships</p><p>&nbsp;</p><p><a href="/admin/structure/crm-core/relationship-types">main administration screen</a></p>',
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
    'menu_link' => array(
      'menu_name' => 'menu-getting-started',
      'mlid' => 895,
      'plid' => 0,
      'link_path' => 'node/8',
      'router_path' => 'node/%',
      'link_title' => 'Configuring relationships',
      'options' => array(),
      'module' => 'menu',
      'hidden' => 0,
      'external' => 0,
      'has_children' => 0,
      'expanded' => 0,
      'weight' => -45,
      'depth' => 1,
      'customized' => 1,
      'p1' => 895,
      'p2' => 0,
      'p3' => 0,
      'p4' => 0,
      'p5' => 0,
      'p6' => 0,
      'p7' => 0,
      'p8' => 0,
      'p9' => 0,
      'updated' => 0,
      'vid' => 89,
      'uuid' => '7a0a54e9-82b1-478b-a666-e5a6a34e9ce4',
      'path' => 'node/%',
      'load_functions' => array(
        1 => 'node_load',
      ),
      'to_arg_functions' => '',
      'access_callback' => 'node_access',
      'access_arguments' => 'a:2:{i:0;s:4:"view";i:1;i:1;}',
      'page_callback' => 'node_page_view',
      'page_arguments' => 'a:1:{i:0;i:1;}',
      'delivery_callback' => '',
      'fit' => 2,
      'number_parts' => 2,
      'context' => 0,
      'tab_parent' => '',
      'tab_root' => 'node/%',
      'title' => 'Configuring relationships',
      'title_callback' => 'node_page_title',
      'title_arguments' => 'a:1:{i:0;i:1;}',
      'theme_callback' => '',
      'theme_arguments' => 'a:0:{}',
      'type' => 6,
      'description' => '',
      'position' => '',
      'include_file' => '',
      'link_weight' => -45,
      'href' => 'node/8',
      'access' => TRUE,
      'localized_options' => array(),
    ),
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
  $entities['ao_sample_content_dp'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/e4c3a8b4-ffd5-41f1-9645-ae98815ef764',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'filtered_html',
          'summary' => '',
          'value' => '<p>This is an article about configuring HTML email templates</p>',
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
    'menu_link' => array(
      'menu_name' => 'menu-getting-started',
      'mlid' => 1184,
      'plid' => 0,
      'link_path' => 'node/32',
      'router_path' => 'node/%',
      'link_title' => 'Configuring HTML email templates',
      'options' => array(),
      'module' => 'menu',
      'hidden' => 0,
      'external' => 0,
      'has_children' => 0,
      'expanded' => 0,
      'weight' => -42,
      'depth' => 1,
      'customized' => 1,
      'p1' => 1184,
      'p2' => 0,
      'p3' => 0,
      'p4' => 0,
      'p5' => 0,
      'p6' => 0,
      'p7' => 0,
      'p8' => 0,
      'p9' => 0,
      'updated' => 0,
      'vid' => 73,
      'uuid' => 'a4288cac-e779-4ac4-9d23-76d2361ff4f7',
      'path' => 'node/%',
      'load_functions' => array(
        1 => 'node_load',
      ),
      'to_arg_functions' => '',
      'access_callback' => 'node_access',
      'access_arguments' => 'a:2:{i:0;s:4:"view";i:1;i:1;}',
      'page_callback' => 'node_page_view',
      'page_arguments' => 'a:1:{i:0;i:1;}',
      'delivery_callback' => '',
      'fit' => 2,
      'number_parts' => 2,
      'context' => 0,
      'tab_parent' => '',
      'tab_root' => 'node/%',
      'title' => 'Configuring HTML email templates',
      'title_callback' => 'node_page_title',
      'title_arguments' => 'a:1:{i:0;i:1;}',
      'theme_callback' => '',
      'theme_arguments' => 'a:0:{}',
      'type' => 6,
      'description' => '',
      'position' => '',
      'include_file' => '',
      'link_weight' => -42,
      'href' => 'node/32',
      'access' => TRUE,
      'localized_options' => array(),
    ),
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
    'title' => 'Configuring HTML email templates',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'article',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'about/html-email-templates',
        'language' => 'und',
      ),
    ),
    'uuid' => 'e4c3a8b4-ffd5-41f1-9645-ae98815ef764',
  );
  $entities['ao_sample_content_dp'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/58e1dd2b-ac93-416d-b61c-a9537950515c',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'full_html',
          'summary' => '',
          'value' => '<p>Once AbleOrganizer is installed, the next step is setting it up. Configuring the software is an easy process that is mostly carried out through the use of a&nbsp;web-based administrative interface.&nbsp;</p><p>It\'s not necessary to carry out all of these tasks in order to work with and evaluate the software. AbleOrganizer will work out of the box with sample content and data set up through the install profile. But if you want to get the most out of the software, it\'s a good idea to take the time to read through the following articles.</p><h3>How to configure contacts</h3><ul><li><strong><a href="/about/configuring-contact-records">Configuring contact records</a>: </strong>Contact records store information about people. This article explains how to&nbsp;manage contact types&nbsp;and control the information that is collected as part of each contact record.</li><li><strong><a href="/about/configuring-activity-records">Configuring activity records</a>:</strong>&nbsp;Activity records store information about interaction with people. This article explains how to&nbsp;manage activity types&nbsp;and control the information that is collected about different types of activity. It also explains some of the activity types that come with AbleOrganizer, and how to work with them.</li><li><a href="/about/configuring-relationships"><strong>Configuring relationships:</strong></a>&nbsp;Relationships are records about connections between people. They are used to group contacts into organziations, households and other types of groups. This article explains how relationships work and how to create your own relationship types.</li></ul><h3>How to configure individual features</h3><ul><li>Donations</li><li>Events</li><li>Petitions</li><li>Volunteer opportunities</li></ul><h3>How to configure advanced services</h3><ul></ul><ul><li><strong><a href="/about/configuring-payment-processors">Configuring payment processors</a>:</strong>&nbsp;AbleOrganizer is capable of handling online payments and can work with multiple payment processors for processing transactions. This article explains how to configure them.</li><li><strong><a href="/about/configuring-bulk-email">Configuring mass mailing and email</a>:</strong> AbleOrganizer is capable of sending mass emails, either through Drupal or one of many whitelisted providers. This article deals with some of the options for configuring the mass mail options within AbleOrganizer.</li><li><strong><a href="/about/html-email-templates">Configuring HTML email templates</a>:</strong>&nbsp;Beyond sending mass emails, AbleOrganizer can also generate personalized HTML email based on content stored in your Drupal website. This article explains how to configure the appearance of these messages.&nbsp;</li></ul><p><strong>Heads up:&nbsp;</strong>Throughout the documentation, you will find links to various administrative screens. Please be aware you need to be logged into the system with an account with administrative permissions in order to click through these links.&nbsp;They will not work otherwise.</p>',
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
    'menu_link' => array(
      'menu_name' => 'menu-getting-started',
      'mlid' => 1185,
      'plid' => 0,
      'link_path' => 'node/33',
      'router_path' => 'node/%',
      'link_title' => 'Configuration tasks',
      'options' => array(),
      'module' => 'menu',
      'hidden' => 0,
      'external' => 0,
      'has_children' => 0,
      'expanded' => 0,
      'weight' => -48,
      'depth' => 1,
      'customized' => 1,
      'p1' => 1185,
      'p2' => 0,
      'p3' => 0,
      'p4' => 0,
      'p5' => 0,
      'p6' => 0,
      'p7' => 0,
      'p8' => 0,
      'p9' => 0,
      'updated' => 0,
      'vid' => 108,
      'uuid' => '6f645b15-f7ed-47cb-ad31-6ab7b73cc45a',
      'path' => 'node/%',
      'load_functions' => array(
        1 => 'node_load',
      ),
      'to_arg_functions' => '',
      'access_callback' => 'node_access',
      'access_arguments' => 'a:2:{i:0;s:4:"view";i:1;i:1;}',
      'page_callback' => 'node_page_view',
      'page_arguments' => 'a:1:{i:0;i:1;}',
      'delivery_callback' => '',
      'fit' => 2,
      'number_parts' => 2,
      'context' => 0,
      'tab_parent' => '',
      'tab_root' => 'node/%',
      'title' => 'Configuration tasks',
      'title_callback' => 'node_page_title',
      'title_arguments' => 'a:1:{i:0;i:1;}',
      'theme_callback' => '',
      'theme_arguments' => 'a:0:{}',
      'type' => 6,
      'description' => '',
      'position' => '',
      'include_file' => '',
      'link_weight' => -48,
      'href' => 'node/33',
      'access' => TRUE,
      'localized_options' => array(),
    ),
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
    'title' => 'Configuration tasks',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'article',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'about/configuration-tasks',
        'language' => 'und',
      ),
    ),
    'uuid' => '58e1dd2b-ac93-416d-b61c-a9537950515c',
  );
  $entities['ao_sample_content_dp'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/2b736b28-68a3-49bf-acf2-7c6c55834d07',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'full_html',
          'summary' => '',
          'value' => '<p>Creating profile forms</p>',
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
    'menu_link' => array(
      'menu_name' => 'menu-the-system',
      'mlid' => 1196,
      'plid' => 0,
      'link_path' => 'node/34',
      'router_path' => 'node/%',
      'link_title' => 'Creating profile forms',
      'options' => array(),
      'module' => 'menu',
      'hidden' => 0,
      'external' => 0,
      'has_children' => 0,
      'expanded' => 0,
      'weight' => 0,
      'depth' => 1,
      'customized' => 0,
      'p1' => 1196,
      'p2' => 0,
      'p3' => 0,
      'p4' => 0,
      'p5' => 0,
      'p6' => 0,
      'p7' => 0,
      'p8' => 0,
      'p9' => 0,
      'updated' => 0,
      'vid' => 94,
      'uuid' => '7ee07f4e-971c-42a2-b22a-110196b9a30a',
      'path' => 'node/%',
      'load_functions' => array(
        1 => 'node_load',
      ),
      'to_arg_functions' => '',
      'access_callback' => 'node_access',
      'access_arguments' => 'a:2:{i:0;s:4:"view";i:1;i:1;}',
      'page_callback' => 'node_page_view',
      'page_arguments' => 'a:1:{i:0;i:1;}',
      'delivery_callback' => '',
      'fit' => 2,
      'number_parts' => 2,
      'context' => 0,
      'tab_parent' => '',
      'tab_root' => 'node/%',
      'title' => 'Creating profile forms',
      'title_callback' => 'node_page_title',
      'title_arguments' => 'a:1:{i:0;i:1;}',
      'theme_callback' => '',
      'theme_arguments' => 'a:0:{}',
      'type' => 6,
      'description' => '',
      'position' => '',
      'include_file' => '',
      'link_weight' => 0,
      'href' => 'node/34',
      'access' => TRUE,
      'localized_options' => array(),
    ),
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
    'title' => 'Creating profile forms',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'article',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'about/creating-profile-forms',
        'language' => 'und',
      ),
    ),
    'uuid' => '2b736b28-68a3-49bf-acf2-7c6c55834d07',
  );
  $entities['ao_sample_content_dp'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/ca0a4c04-1018-46eb-bd42-d55ba83a7b4e',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'full_html',
          'summary' => '',
          'value' => '<p>Creating donation pages</p>',
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
    'menu_link' => array(
      'menu_name' => 'menu-the-system',
      'mlid' => 1197,
      'plid' => 0,
      'link_path' => 'node/35',
      'router_path' => 'node/%',
      'link_title' => 'Creating donation pages',
      'options' => array(),
      'module' => 'menu',
      'hidden' => 0,
      'external' => 0,
      'has_children' => 0,
      'expanded' => 0,
      'weight' => 0,
      'depth' => 1,
      'customized' => 0,
      'p1' => 1197,
      'p2' => 0,
      'p3' => 0,
      'p4' => 0,
      'p5' => 0,
      'p6' => 0,
      'p7' => 0,
      'p8' => 0,
      'p9' => 0,
      'updated' => 0,
      'vid' => 95,
      'uuid' => 'dd35add2-f08d-4391-8b01-b0f5b81582d0',
      'path' => 'node/%',
      'load_functions' => array(
        1 => 'node_load',
      ),
      'to_arg_functions' => '',
      'access_callback' => 'node_access',
      'access_arguments' => 'a:2:{i:0;s:4:"view";i:1;i:1;}',
      'page_callback' => 'node_page_view',
      'page_arguments' => 'a:1:{i:0;i:1;}',
      'delivery_callback' => '',
      'fit' => 2,
      'number_parts' => 2,
      'context' => 0,
      'tab_parent' => '',
      'tab_root' => 'node/%',
      'title' => 'Creating donation pages',
      'title_callback' => 'node_page_title',
      'title_arguments' => 'a:1:{i:0;i:1;}',
      'theme_callback' => '',
      'theme_arguments' => 'a:0:{}',
      'type' => 6,
      'description' => '',
      'position' => '',
      'include_file' => '',
      'link_weight' => 0,
      'href' => 'node/35',
      'access' => TRUE,
      'localized_options' => array(),
    ),
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
    'title' => 'Creating donation pages',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'article',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'about/creating-donation-pages',
        'language' => 'und',
      ),
    ),
    'uuid' => 'ca0a4c04-1018-46eb-bd42-d55ba83a7b4e',
  );
  $entities['ao_sample_content_dp'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/f3e24945-ec43-4bb5-b914-33797f4f0422',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'filtered_html',
          'summary' => '',
          'value' => '<p>Creating event registration</p>',
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
    'menu_link' => array(
      'menu_name' => 'menu-the-system',
      'mlid' => 1198,
      'plid' => 0,
      'link_path' => 'node/36',
      'router_path' => 'node/%',
      'link_title' => 'Creating event registration',
      'options' => array(),
      'module' => 'menu',
      'hidden' => 0,
      'external' => 0,
      'has_children' => 0,
      'expanded' => 0,
      'weight' => 0,
      'depth' => 1,
      'customized' => 0,
      'p1' => 1198,
      'p2' => 0,
      'p3' => 0,
      'p4' => 0,
      'p5' => 0,
      'p6' => 0,
      'p7' => 0,
      'p8' => 0,
      'p9' => 0,
      'updated' => 0,
      'vid' => 96,
      'uuid' => 'c966714d-8a8c-4d51-8691-f90873a1ad8a',
      'path' => 'node/%',
      'load_functions' => array(
        1 => 'node_load',
      ),
      'to_arg_functions' => '',
      'access_callback' => 'node_access',
      'access_arguments' => 'a:2:{i:0;s:4:"view";i:1;i:1;}',
      'page_callback' => 'node_page_view',
      'page_arguments' => 'a:1:{i:0;i:1;}',
      'delivery_callback' => '',
      'fit' => 2,
      'number_parts' => 2,
      'context' => 0,
      'tab_parent' => '',
      'tab_root' => 'node/%',
      'title' => 'Creating event registration',
      'title_callback' => 'node_page_title',
      'title_arguments' => 'a:1:{i:0;i:1;}',
      'theme_callback' => '',
      'theme_arguments' => 'a:0:{}',
      'type' => 6,
      'description' => '',
      'position' => '',
      'include_file' => '',
      'link_weight' => 0,
      'href' => 'node/36',
      'access' => TRUE,
      'localized_options' => array(),
    ),
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
    'title' => 'Creating event registration',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'article',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'about/creating-event-registration',
        'language' => 'und',
      ),
    ),
    'uuid' => 'f3e24945-ec43-4bb5-b914-33797f4f0422',
  );
  $entities['ao_sample_content_dp'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/3701fb77-0170-4d89-8cd0-2771808f76c0',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'full_html',
          'summary' => '',
          'value' => '<p>Creating petitions</p>',
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
    'menu_link' => array(
      'menu_name' => 'menu-the-system',
      'mlid' => 1199,
      'plid' => 0,
      'link_path' => 'node/37',
      'router_path' => 'node/%',
      'link_title' => 'Creating petitions',
      'options' => array(),
      'module' => 'menu',
      'hidden' => 0,
      'external' => 0,
      'has_children' => 0,
      'expanded' => 0,
      'weight' => 0,
      'depth' => 1,
      'customized' => 0,
      'p1' => 1199,
      'p2' => 0,
      'p3' => 0,
      'p4' => 0,
      'p5' => 0,
      'p6' => 0,
      'p7' => 0,
      'p8' => 0,
      'p9' => 0,
      'updated' => 0,
      'vid' => 97,
      'uuid' => '78d15d30-ecbe-4fdb-9a85-5b1cb5c8cd87',
      'path' => 'node/%',
      'load_functions' => array(
        1 => 'node_load',
      ),
      'to_arg_functions' => '',
      'access_callback' => 'node_access',
      'access_arguments' => 'a:2:{i:0;s:4:"view";i:1;i:1;}',
      'page_callback' => 'node_page_view',
      'page_arguments' => 'a:1:{i:0;i:1;}',
      'delivery_callback' => '',
      'fit' => 2,
      'number_parts' => 2,
      'context' => 0,
      'tab_parent' => '',
      'tab_root' => 'node/%',
      'title' => 'Creating petitions',
      'title_callback' => 'node_page_title',
      'title_arguments' => 'a:1:{i:0;i:1;}',
      'theme_callback' => '',
      'theme_arguments' => 'a:0:{}',
      'type' => 6,
      'description' => '',
      'position' => '',
      'include_file' => '',
      'link_weight' => 0,
      'href' => 'node/37',
      'access' => TRUE,
      'localized_options' => array(),
    ),
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
    'title' => 'Creating petitions',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'article',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'about/creating-petitions',
        'language' => 'und',
      ),
    ),
    'uuid' => '3701fb77-0170-4d89-8cd0-2771808f76c0',
  );
  $entities['ao_sample_content_dp'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/ced9c110-648f-4f9c-9648-39bd07b6465e',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'full_html',
          'summary' => '',
          'value' => '<p>Creating volunteer opportunities</p>',
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
    'menu_link' => array(
      'menu_name' => 'menu-the-system',
      'mlid' => 1200,
      'plid' => 0,
      'link_path' => 'node/38',
      'router_path' => 'node/%',
      'link_title' => 'Creating volunteer opportunities',
      'options' => array(),
      'module' => 'menu',
      'hidden' => 0,
      'external' => 0,
      'has_children' => 0,
      'expanded' => 0,
      'weight' => 0,
      'depth' => 1,
      'customized' => 0,
      'p1' => 1200,
      'p2' => 0,
      'p3' => 0,
      'p4' => 0,
      'p5' => 0,
      'p6' => 0,
      'p7' => 0,
      'p8' => 0,
      'p9' => 0,
      'updated' => 0,
      'vid' => 98,
      'uuid' => '2d978342-318a-4222-965d-5de206a7ca4e',
      'path' => 'node/%',
      'load_functions' => array(
        1 => 'node_load',
      ),
      'to_arg_functions' => '',
      'access_callback' => 'node_access',
      'access_arguments' => 'a:2:{i:0;s:4:"view";i:1;i:1;}',
      'page_callback' => 'node_page_view',
      'page_arguments' => 'a:1:{i:0;i:1;}',
      'delivery_callback' => '',
      'fit' => 2,
      'number_parts' => 2,
      'context' => 0,
      'tab_parent' => '',
      'tab_root' => 'node/%',
      'title' => 'Creating volunteer opportunities',
      'title_callback' => 'node_page_title',
      'title_arguments' => 'a:1:{i:0;i:1;}',
      'theme_callback' => '',
      'theme_arguments' => 'a:0:{}',
      'type' => 6,
      'description' => '',
      'position' => '',
      'include_file' => '',
      'link_weight' => 0,
      'href' => 'node/38',
      'access' => TRUE,
      'localized_options' => array(),
    ),
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
    'title' => 'Creating volunteer opportunities',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'article',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'about/creating-volunteer-opportunities',
        'language' => 'und',
      ),
    ),
    'uuid' => 'ced9c110-648f-4f9c-9648-39bd07b6465e',
  );
  $entities['ao_sample_content_dp'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/289d55ad-5ca4-4548-9863-b7903dc7d874',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'filtered_html',
          'summary' => '',
          'value' => '<p>Customizing reports</p>',
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
    'menu_link' => array(
      'menu_name' => 'menu-power-users',
      'mlid' => 1201,
      'plid' => 0,
      'link_path' => 'node/39',
      'router_path' => 'node/%',
      'link_title' => 'Customizing reports',
      'options' => array(),
      'module' => 'menu',
      'hidden' => 0,
      'external' => 0,
      'has_children' => 0,
      'expanded' => 0,
      'weight' => 0,
      'depth' => 1,
      'customized' => 0,
      'p1' => 1201,
      'p2' => 0,
      'p3' => 0,
      'p4' => 0,
      'p5' => 0,
      'p6' => 0,
      'p7' => 0,
      'p8' => 0,
      'p9' => 0,
      'updated' => 0,
      'vid' => 99,
      'uuid' => '8ce4ae60-4337-4651-9565-e15229829d30',
      'path' => 'node/%',
      'load_functions' => array(
        1 => 'node_load',
      ),
      'to_arg_functions' => '',
      'access_callback' => 'node_access',
      'access_arguments' => 'a:2:{i:0;s:4:"view";i:1;i:1;}',
      'page_callback' => 'node_page_view',
      'page_arguments' => 'a:1:{i:0;i:1;}',
      'delivery_callback' => '',
      'fit' => 2,
      'number_parts' => 2,
      'context' => 0,
      'tab_parent' => '',
      'tab_root' => 'node/%',
      'title' => 'Customizing reports',
      'title_callback' => 'node_page_title',
      'title_arguments' => 'a:1:{i:0;i:1;}',
      'theme_callback' => '',
      'theme_arguments' => 'a:0:{}',
      'type' => 6,
      'description' => '',
      'position' => '',
      'include_file' => '',
      'link_weight' => 0,
      'href' => 'node/39',
      'access' => TRUE,
      'localized_options' => array(),
    ),
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
    'title' => 'Customizing reports',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'article',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'about/customizing-reports',
        'language' => 'und',
      ),
    ),
    'uuid' => '289d55ad-5ca4-4548-9863-b7903dc7d874',
  );
  $entities['ao_sample_content_dp'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/3c7dbe48-d016-44f7-a818-0e71babf045c',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'full_html',
          'summary' => '',
          'value' => '<p>Creating report widgets</p>',
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
    'menu_link' => array(
      'menu_name' => 'menu-power-users',
      'mlid' => 1202,
      'plid' => 0,
      'link_path' => 'node/40',
      'router_path' => 'node/%',
      'link_title' => 'Creating report widgets',
      'options' => array(),
      'module' => 'menu',
      'hidden' => 0,
      'external' => 0,
      'has_children' => 0,
      'expanded' => 0,
      'weight' => 0,
      'depth' => 1,
      'customized' => 0,
      'p1' => 1202,
      'p2' => 0,
      'p3' => 0,
      'p4' => 0,
      'p5' => 0,
      'p6' => 0,
      'p7' => 0,
      'p8' => 0,
      'p9' => 0,
      'updated' => 0,
      'vid' => 100,
      'uuid' => '96a3ef34-1d16-44c0-83df-b7f8a7ac083f',
      'path' => 'node/%',
      'load_functions' => array(
        1 => 'node_load',
      ),
      'to_arg_functions' => '',
      'access_callback' => 'node_access',
      'access_arguments' => 'a:2:{i:0;s:4:"view";i:1;i:1;}',
      'page_callback' => 'node_page_view',
      'page_arguments' => 'a:1:{i:0;i:1;}',
      'delivery_callback' => '',
      'fit' => 2,
      'number_parts' => 2,
      'context' => 0,
      'tab_parent' => '',
      'tab_root' => 'node/%',
      'title' => 'Creating report widgets',
      'title_callback' => 'node_page_title',
      'title_arguments' => 'a:1:{i:0;i:1;}',
      'theme_callback' => '',
      'theme_arguments' => 'a:0:{}',
      'type' => 6,
      'description' => '',
      'position' => '',
      'include_file' => '',
      'link_weight' => 0,
      'href' => 'node/40',
      'access' => TRUE,
      'localized_options' => array(),
    ),
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
    'title' => 'Creating report widgets',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'article',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'about/creating-report-widgets',
        'language' => 'und',
      ),
    ),
    'uuid' => '3c7dbe48-d016-44f7-a818-0e71babf045c',
  );
  $entities['ao_sample_content_dp'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/a7c893d8-a885-4021-a5d2-4d28b4d485d0',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'filtered_html',
          'summary' => '',
          'value' => '<p>Customizing email layout</p>',
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
    'menu_link' => array(
      'menu_name' => 'menu-power-users',
      'mlid' => 1203,
      'plid' => 0,
      'link_path' => 'node/41',
      'router_path' => 'node/%',
      'link_title' => 'Customizing email layout',
      'options' => array(),
      'module' => 'menu',
      'hidden' => 0,
      'external' => 0,
      'has_children' => 0,
      'expanded' => 0,
      'weight' => 0,
      'depth' => 1,
      'customized' => 0,
      'p1' => 1203,
      'p2' => 0,
      'p3' => 0,
      'p4' => 0,
      'p5' => 0,
      'p6' => 0,
      'p7' => 0,
      'p8' => 0,
      'p9' => 0,
      'updated' => 0,
      'vid' => 101,
      'uuid' => 'c6e0bf2f-0106-4b02-b27b-2ac0980487af',
      'path' => 'node/%',
      'load_functions' => array(
        1 => 'node_load',
      ),
      'to_arg_functions' => '',
      'access_callback' => 'node_access',
      'access_arguments' => 'a:2:{i:0;s:4:"view";i:1;i:1;}',
      'page_callback' => 'node_page_view',
      'page_arguments' => 'a:1:{i:0;i:1;}',
      'delivery_callback' => '',
      'fit' => 2,
      'number_parts' => 2,
      'context' => 0,
      'tab_parent' => '',
      'tab_root' => 'node/%',
      'title' => 'Customizing email layout',
      'title_callback' => 'node_page_title',
      'title_arguments' => 'a:1:{i:0;i:1;}',
      'theme_callback' => '',
      'theme_arguments' => 'a:0:{}',
      'type' => 6,
      'description' => '',
      'position' => '',
      'include_file' => '',
      'link_weight' => 0,
      'href' => 'node/41',
      'access' => TRUE,
      'localized_options' => array(),
    ),
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
    'title' => 'Customizing email layout',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'article',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'about/customizing-email-layout',
        'language' => 'und',
      ),
    ),
    'uuid' => 'a7c893d8-a885-4021-a5d2-4d28b4d485d0',
  );
  $entities['ao_sample_content_dp'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/06d25250-9d33-4b7a-8cc5-9e814c14ade3',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'filtered_html',
          'summary' => '',
          'value' => '<p>Tracking offline activity</p>',
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
    'menu_link' => array(
      'menu_name' => 'menu-power-users',
      'mlid' => 1204,
      'plid' => 0,
      'link_path' => 'node/42',
      'router_path' => 'node/%',
      'link_title' => 'Tracking offline activity',
      'options' => array(),
      'module' => 'menu',
      'hidden' => 0,
      'external' => 0,
      'has_children' => 0,
      'expanded' => 0,
      'weight' => 0,
      'depth' => 1,
      'customized' => 0,
      'p1' => 1204,
      'p2' => 0,
      'p3' => 0,
      'p4' => 0,
      'p5' => 0,
      'p6' => 0,
      'p7' => 0,
      'p8' => 0,
      'p9' => 0,
      'updated' => 0,
      'vid' => 102,
      'uuid' => 'e783d645-7535-4c4c-90f5-05515a5fad5b',
      'path' => 'node/%',
      'load_functions' => array(
        1 => 'node_load',
      ),
      'to_arg_functions' => '',
      'access_callback' => 'node_access',
      'access_arguments' => 'a:2:{i:0;s:4:"view";i:1;i:1;}',
      'page_callback' => 'node_page_view',
      'page_arguments' => 'a:1:{i:0;i:1;}',
      'delivery_callback' => '',
      'fit' => 2,
      'number_parts' => 2,
      'context' => 0,
      'tab_parent' => '',
      'tab_root' => 'node/%',
      'title' => 'Tracking offline activity',
      'title_callback' => 'node_page_title',
      'title_arguments' => 'a:1:{i:0;i:1;}',
      'theme_callback' => '',
      'theme_arguments' => 'a:0:{}',
      'type' => 6,
      'description' => '',
      'position' => '',
      'include_file' => '',
      'link_weight' => 0,
      'href' => 'node/42',
      'access' => TRUE,
      'localized_options' => array(),
    ),
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
    'title' => 'Tracking offline activity',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'article',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'about/tracking-offline-activity',
        'language' => 'und',
      ),
    ),
    'uuid' => '06d25250-9d33-4b7a-8cc5-9e814c14ade3',
  );

  return $entities;
}
