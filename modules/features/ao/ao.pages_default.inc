<?php
/**
 * @file
 * ao.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function ao_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'user_view_panel_context';
  $handler->task = 'user_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'AO User Profile',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 1,
          1 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left',
          1 => 'right',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'left' => array(
        'type' => 'region',
        'title' => 'Left',
        'width' => 50,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      'right' => array(
        'type' => 'region',
        'title' => 'Right',
        'width' => 50,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ec2432e0-3332-41a5-af83-ff6e81b47820';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-01a599c3-248b-47d2-93b3-b341d99d3396';
    $pane->panel = 'left';
    $pane->type = 'user_picture';
    $pane->subtype = 'user_picture';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:user_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '01a599c3-248b-47d2-93b3-b341d99d3396';
    $display->content['new-01a599c3-248b-47d2-93b3-b341d99d3396'] = $pane;
    $display->panels['left'][0] = 'new-01a599c3-248b-47d2-93b3-b341d99d3396';
    $pane = new stdClass();
    $pane->pid = 'new-61ac2b38-bcca-4115-94e6-901e2b1ca0eb';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-user-profile-links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '61ac2b38-bcca-4115-94e6-901e2b1ca0eb';
    $display->content['new-61ac2b38-bcca-4115-94e6-901e2b1ca0eb'] = $pane;
    $display->panels['left'][1] = 'new-61ac2b38-bcca-4115-94e6-901e2b1ca0eb';
    $pane = new stdClass();
    $pane->pid = 'new-c094a2f6-1dd5-4e57-9096-12c68b5886f9';
    $pane->panel = 'left';
    $pane->type = 'ao_user_profile_contact_info';
    $pane->subtype = 'ao_user_profile_contact_info';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'display_title' => 0,
      'override_title' => 0,
      'override_title_text' => '',
      'view_mode' => 'ao_basic_display',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'c094a2f6-1dd5-4e57-9096-12c68b5886f9';
    $display->content['new-c094a2f6-1dd5-4e57-9096-12c68b5886f9'] = $pane;
    $display->panels['left'][2] = 'new-c094a2f6-1dd5-4e57-9096-12c68b5886f9';
    $pane = new stdClass();
    $pane->pid = 'new-d575dd70-d334-4c29-aa01-216530fd0032';
    $pane->panel = 'left';
    $pane->type = 'ao_user_access_wrapper';
    $pane->subtype = 'ao_user_access_wrapper';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'display_title' => 1,
      'view_name' => 'ableorganizer_5_latest_user_activities',
      'view_mode' => 'panel_pane_1',
      'access_control' => '1',
      'perm' => 'view any crm_core_contact entity',
      'override_title' => 1,
      'override_title_text' => 'Recent Activities',
      'panels_edit_name' => 'Recent Activities',
      'panels_edit_desc' => 'Recent Activities',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'd575dd70-d334-4c29-aa01-216530fd0032';
    $display->content['new-d575dd70-d334-4c29-aa01-216530fd0032'] = $pane;
    $display->panels['left'][3] = 'new-d575dd70-d334-4c29-aa01-216530fd0032';
    $pane = new stdClass();
    $pane->pid = 'new-65d67112-c1e5-4d17-9c5b-b675a3629d0d';
    $pane->panel = 'right';
    $pane->type = 'entity_field_extra';
    $pane->subtype = 'user:summary';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'argument_entity_id:user_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '65d67112-c1e5-4d17-9c5b-b675a3629d0d';
    $display->content['new-65d67112-c1e5-4d17-9c5b-b675a3629d0d'] = $pane;
    $display->panels['right'][0] = 'new-65d67112-c1e5-4d17-9c5b-b675a3629d0d';
    $pane = new stdClass();
    $pane->pid = 'new-027b7039-a494-424e-b594-fbe8b262209f';
    $pane->panel = 'right';
    $pane->type = 'ao_profile_stats';
    $pane->subtype = 'ao_profile_stats';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'display_title' => 1,
      'title' => 'What I Stand For',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '027b7039-a494-424e-b594-fbe8b262209f';
    $display->content['new-027b7039-a494-424e-b594-fbe8b262209f'] = $pane;
    $display->panels['right'][1] = 'new-027b7039-a494-424e-b594-fbe8b262209f';
    $pane = new stdClass();
    $pane->pid = 'new-265b1f54-8c0a-483f-b1f3-2ce004a862fe';
    $pane->panel = 'right';
    $pane->type = 'ao_user_access_wrapper';
    $pane->subtype = 'ao_user_access_wrapper';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'display_title' => 1,
      'override_title' => 1,
      'override_title_text' => 'Upcoming Events',
      'access_control' => '1',
      'perm' => 'view any crm_core_contact entity',
      'view_name' => 'ableorganizer_user_event_registration',
      'view_mode' => 'panel_pane_1',
      'panels_edit_name' => 'Upcoming events',
      'panels_edit_desc' => 'Upcoming events',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '265b1f54-8c0a-483f-b1f3-2ce004a862fe';
    $display->content['new-265b1f54-8c0a-483f-b1f3-2ce004a862fe'] = $pane;
    $display->panels['right'][2] = 'new-265b1f54-8c0a-483f-b1f3-2ce004a862fe';
    $pane = new stdClass();
    $pane->pid = 'new-7e18cc32-6ab6-43ed-8d85-22fcba1a3124';
    $pane->panel = 'right';
    $pane->type = 'ao_user_access_wrapper';
    $pane->subtype = 'ao_user_access_wrapper';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'display_title' => 1,
      'panels_edit_name' => 'Volunteer Commitments',
      'panels_edit_desc' => 'List of 5 upcoming volunteer commitments for the user.',
      'view_name' => 'ableorganizer_user_volunteer_registration',
      'view_mode' => 'panel_pane_1',
      'access_control' => '1',
      'perm' => 'view any crm_core_contact entity',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '7e18cc32-6ab6-43ed-8d85-22fcba1a3124';
    $display->content['new-7e18cc32-6ab6-43ed-8d85-22fcba1a3124'] = $pane;
    $display->panels['right'][3] = 'new-7e18cc32-6ab6-43ed-8d85-22fcba1a3124';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['user_view_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'view_panel_context';
  $handler->task = 'view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'AbleOrganizer Individual Contact Display Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'CRM Contact Type',
        'keyword' => 'crm_core_contact_type',
        'name' => 'entity:crm_core_contact_type',
        'entity_id' => '1',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_bundle:crm_core_contact',
          'settings' => array(
            'type' => array(
              'individual' => 'individual',
            ),
          ),
          'context' => 'argument_entity_id:crm_core_contact_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
        'class' => '',
        'column_class' => '',
        'row_class' => '',
        'region_class' => '',
        'no_scale' => FALSE,
        'fixed_width' => '',
        'column_separation' => '0.5em',
        'region_separation' => '0.5em',
        'row_separation' => '0.5em',
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 1,
          1 => 'main-row',
        ),
        'parent' => 'canvas',
        'class' => 'contact',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left',
          1 => 'right',
        ),
        'parent' => 'main',
        'class' => 'contact',
      ),
      'left' => array(
        'type' => 'region',
        'title' => 'Left',
        'width' => 50,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      'right' => array(
        'type' => 'region',
        'title' => 'Right',
        'width' => 50,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '37e04453-3da8-4b51-bdb5-1d5be69b502c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-cfb18e15-964f-4ebf-9f59-61d16fafff34';
    $pane->panel = 'left';
    $pane->type = 'ao_user_picture';
    $pane->subtype = 'ao_user_picture';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'display_title' => 0,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'cfb18e15-964f-4ebf-9f59-61d16fafff34';
    $display->content['new-cfb18e15-964f-4ebf-9f59-61d16fafff34'] = $pane;
    $display->panels['left'][0] = 'new-cfb18e15-964f-4ebf-9f59-61d16fafff34';
    $pane = new stdClass();
    $pane->pid = 'new-741ceaa9-b0b1-432a-b2a1-ecc2ba0c5d55';
    $pane->panel = 'left';
    $pane->type = 'entity_view';
    $pane->subtype = 'crm_core_contact';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'argument_entity_id:crm_core_contact_1',
      'override_title' => 1,
      'override_title_text' => 'Contact Information',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '741ceaa9-b0b1-432a-b2a1-ecc2ba0c5d55';
    $display->content['new-741ceaa9-b0b1-432a-b2a1-ecc2ba0c5d55'] = $pane;
    $display->panels['left'][1] = 'new-741ceaa9-b0b1-432a-b2a1-ecc2ba0c5d55';
    $pane = new stdClass();
    $pane->pid = 'new-98038485-8f81-4504-bc8a-32bc35de4351';
    $pane->panel = 'right';
    $pane->type = 'ao_contact_stats';
    $pane->subtype = 'ao_contact_stats';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'display_title' => 1,
      'title' => 'What I Stand For',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '98038485-8f81-4504-bc8a-32bc35de4351';
    $display->content['new-98038485-8f81-4504-bc8a-32bc35de4351'] = $pane;
    $display->panels['right'][0] = 'new-98038485-8f81-4504-bc8a-32bc35de4351';
    $pane = new stdClass();
    $pane->pid = 'new-06a0b812-d41e-4a83-b1d5-96f22c9fbb2b';
    $pane->panel = 'right';
    $pane->type = 'ao_5_recent_activities';
    $pane->subtype = 'ao_5_recent_activities';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'display_title' => 1,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '06a0b812-d41e-4a83-b1d5-96f22c9fbb2b';
    $display->content['new-06a0b812-d41e-4a83-b1d5-96f22c9fbb2b'] = $pane;
    $display->panels['right'][1] = 'new-06a0b812-d41e-4a83-b1d5-96f22c9fbb2b';
    $pane = new stdClass();
    $pane->pid = 'new-df35dbb8-ad30-4ad9-9685-b319c626b6d8';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'ao_contact_map_individual-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'df35dbb8-ad30-4ad9-9685-b319c626b6d8';
    $display->content['new-df35dbb8-ad30-4ad9-9685-b319c626b6d8'] = $pane;
    $display->panels['right'][2] = 'new-df35dbb8-ad30-4ad9-9685-b319c626b6d8';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['view_panel_context'] = $handler;

  return $export;
}
