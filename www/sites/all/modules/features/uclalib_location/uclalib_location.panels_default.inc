<?php
/**
 * @file
 * uclalib_location.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function uclalib_location_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'location_header';
  $mini->category = '';
  $mini->admin_title = 'Location Header';
  $mini->admin_description = '';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'Node',
      'keyword' => 'node',
      'name' => 'entity:node',
      'entity_id' => '',
      'id' => 1,
    ),
  );
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '20dc64cb-2827-4472-9588-d005653aa9fc';
  $display->window_title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0677b681-c039-44da-9280-48e419ae6b64';
    $pane->panel = 'middle';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 1,
      'markup' => 'h1',
      'id' => '',
      'class' => '',
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 1,
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
    $pane->uuid = '0677b681-c039-44da-9280-48e419ae6b64';
    $display->content['new-0677b681-c039-44da-9280-48e419ae6b64'] = $pane;
    $display->panels['middle'][0] = 'new-0677b681-c039-44da-9280-48e419ae6b64';
    $pane = new stdClass();
    $pane->pid = 'new-c5270868-4fdd-4890-95ed-e7670d051a8e';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'location_map_pin-map_pin_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '%node:nid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c5270868-4fdd-4890-95ed-e7670d051a8e';
    $display->content['new-c5270868-4fdd-4890-95ed-e7670d051a8e'] = $pane;
    $display->panels['middle'][1] = 'new-c5270868-4fdd-4890-95ed-e7670d051a8e';
    $pane = new stdClass();
    $pane->pid = 'new-4d59437d-ecb7-41cd-93d7-8ecaeb3fa590';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_address';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '4d59437d-ecb7-41cd-93d7-8ecaeb3fa590';
    $display->content['new-4d59437d-ecb7-41cd-93d7-8ecaeb3fa590'] = $pane;
    $display->panels['middle'][2] = 'new-4d59437d-ecb7-41cd-93d7-8ecaeb3fa590';
    $pane = new stdClass();
    $pane->pid = 'new-585e4e8b-496e-443c-b53e-e427b1b53b5d';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_location_phone';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'phone',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 1,
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
    $pane->uuid = '585e4e8b-496e-443c-b53e-e427b1b53b5d';
    $display->content['new-585e4e8b-496e-443c-b53e-e427b1b53b5d'] = $pane;
    $display->panels['middle'][3] = 'new-585e4e8b-496e-443c-b53e-e427b1b53b5d';
    $pane = new stdClass();
    $pane->pid = 'new-71418c75-1849-4aac-91c0-a22195317a1c';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_location_email';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'email_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '71418c75-1849-4aac-91c0-a22195317a1c';
    $display->content['new-71418c75-1849-4aac-91c0-a22195317a1c'] = $pane;
    $display->panels['middle'][4] = 'new-71418c75-1849-4aac-91c0-a22195317a1c';
    $pane = new stdClass();
    $pane->pid = 'new-927eedf1-0c3d-41d2-b4dc-bb0f32e9861c';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_location_social_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'social_links',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'view_mode' => 'default',
      ),
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '927eedf1-0c3d-41d2-b4dc-bb0f32e9861c';
    $display->content['new-927eedf1-0c3d-41d2-b4dc-bb0f32e9861c'] = $pane;
    $display->panels['middle'][5] = 'new-927eedf1-0c3d-41d2-b4dc-bb0f32e9861c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-0677b681-c039-44da-9280-48e419ae6b64';
  $mini->display = $display;
  $export['location_header'] = $mini;

  return $export;
}
