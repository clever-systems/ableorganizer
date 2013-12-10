<?php
/**
 * @file
 * ableorganizer_sample_content.box.inc
 */

/**
 * Implements hook_default_box().
 */
function ableorganizer_sample_content_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'above_content_lower';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'AO Promo - What it does';
  $box->options = array(
    'body' => array(
      'value' => '<h2><span>What it does</span></h2><div class="ao_profeat_holder"><!-- profeat wrapper //--><div class="ao_profeat ao_profeat_donation"><div class="ao_profeat_icon_outer"><div class="ao_profeat_icon"><span>&nbsp;</span></div></div><h3>Fundraising</h3>Manage online and offline donations.<div class="button ao_profeat_button">See How</div><div class="ao_profeat_dialog_content"><div class="ao_profeat_dialog_title ao_profeat_dialog_fundraising"><div class="title_bg"><div class="ao_profeat_dialog_icon"><span>&nbsp;</span></div><div class="title_inner">Fundraising</div></div></div><ul><li>Create online donation forms.</li><li>Register offline donations through the CRM interface.</li><li>Create lists of donors.</li><li>Includes LYBUNT and SYBUNT reports.</li></ul></div></div><!-- profeat wrapper //--><div class="ao_profeat ao_profeat_event"><div class="ao_profeat_icon_outer"><div class="ao_profeat_icon"><span>&nbsp;</span></div></div><h3>Events</h3>Register people for events, sell tickets and more.<div class="button ao_profeat_button">See How</div><div class="ao_profeat_dialog_content"><div class="ao_profeat_dialog_title ao_profeat_dialog_events"><div class="title_bg"><div class="ao_profeat_dialog_icon"><span>&nbsp;</span></div><div class="title_inner">Events</div></div></div><ul><li>Create online donation forms.</li><li>Register offline donations through the CRM interface.</li><li>Create lists of donors.</li><li>Includes LYBUNT and SYBUNT reports.</li></ul></div></div><!-- profeat wrapper //--><div class="ao_profeat ao_profeat_petition"><div class="ao_profeat_icon_outer"><div class="ao_profeat_icon"><span>&nbsp;</span></div></div><h3>Petitions</h3>Track signatures in support of specific initiatives.<div class="button ao_profeat_button">See How</div><div class="ao_profeat_dialog_content"><div class="ao_profeat_dialog_title ao_profeat_dialog_petition"><div class="title_bg"><div class="ao_profeat_dialog_icon"><span>&nbsp;</span></div><div class="title_inner">Petitions</div></div></div><ul><li>Create online donation forms.</li><li>Register offline donations through the CRM interface.</li><li>Create lists of donors.</li><li>Includes LYBUNT and SYBUNT reports.</li></ul></div></div><!-- profeat wrapper //--><div class="ao_profeat ao_profeat_volunteer"><div class="ao_profeat_icon_outer"><div class="ao_profeat_icon"><span>&nbsp;</span></div></div><h3>Volunteer</h3>Register volunteers and list ways to get involved.<div class="button ao_profeat_button">See How</div><div class="ao_profeat_dialog_content"><div class="ao_profeat_dialog_title ao_profeat_dialog_volunteer"><div class="title_bg"><div class="ao_profeat_dialog_icon"><span>&nbsp;</span></div><div class="title_inner">Volunteer</div></div></div><ul><li>Create online donation forms.</li><li>Register offline donations through the CRM interface.</li><li>Create lists of donors.</li><li>Includes LYBUNT and SYBUNT reports.</li></ul></div></div><div class="ao_profeat_dialog"></div></div>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['above_content_lower'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'documentation_header';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'AO Documentation Header';
  $box->options = array(
    'body' => array(
      'value' => '<h2>Documentation</h2>',
      'format' => 'full_html',
    ),
  );
  $export['documentation_header'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'hero_content';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'AO Promo - Hero Content';
  $box->options = array(
    'body' => array(
      'value' => '<div class="hero_text"><h2>Build. Engage. Organize.</h2>AbleOrganizer empowers organizations with effective tools for building ideas into movements.</div>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['hero_content'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'lower_zone';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'AO Promo - Benefits';
  $box->options = array(
    'body' => array(
      'value' => '<h2><span>Benefits</span></h2><div class="ao-featlist"><ul><li>Complete contact management solution</li><li>Drag and drop form creation</li><li>Comprehensive reports</li><li>Flexible platform</li><li>Customizable interface</li><li>Contact to user integration</li></ul></div><div class="ao-featlist"><ul><li>Complete contact management solution</li><li>Drag and drop form creation</li><li>Comprehensive reports</li><li>Flexible platform</li><li>Customizable interface</li><li>Contact to user integration</li></ul></div><div class="ao-down-arrow">&nbsp;</div>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['lower_zone'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'lower_zone_2';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'AO Promo - Get Able';
  $box->options = array(
    'body' => array(
      'value' => '<h2><span>Get Able</span></h2><h3>AbleOrganizer is a Community Engagement Platform</h3><div class="ao-info-masthead">Open source and built to be customized. Here\'s how to get started fast and make the most out of it.</div><div class="ao-info-holder"><!-- infoitem //--><div class="ao-info-item"><h4>Getting started</h4>How to install AbleOrganizer, configure donation processing, configure outbound email and other topics.<div class="button ao-info-btn"><a href="about">Learn More</a></div></div><!-- infoitem //--><div class="ao-info-item"><h4>The platform</h4>How to work with donation forms, event registration, contact records, activities, linking users and contacts, and more.<div class="button ao-info-btn"><a href="/about/the-system">Learn More</a></div></div><!-- infoitem //--><div class="ao-info-item"><h4>Power Users</h4>How to get the most out of AbleOrganizer, extend the system, and otherwise make Drupal more powerful than ever.<div class="button ao-info-btn"><a href="/about/extending-the-platform">Learn More</a></div></div></div><div class="ao-down-arrow">&nbsp;</div>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['lower_zone_2'] = $box;

  return $export;
}
