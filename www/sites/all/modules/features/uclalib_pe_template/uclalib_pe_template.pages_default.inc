<?php
/**
 * @file
 * uclalib_pe_template.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function uclalib_pe_template_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template_panel_context';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Default site layout',
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
  $display->layout = 'omega:basic';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'branding' => NULL,
      'header' => NULL,
      'navigation' => NULL,
      'highlighted' => NULL,
      'help' => NULL,
      'content' => NULL,
      'sidebar_first' => NULL,
      'sidebar_second' => NULL,
      'footer' => NULL,
      'colophon_first' => NULL,
      'colophon_second' => NULL,
      'colophon_third' => NULL,
    ),
    'content' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'b7833982-c1c9-4884-9ec1-32f48698fb87';
  $display->window_title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c3a5e57e-a7e1-4102-b02c-5fd6910a68ef';
    $pane->panel = 'branding';
    $pane->type = 'page_logo';
    $pane->subtype = 'page_logo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c3a5e57e-a7e1-4102-b02c-5fd6910a68ef';
    $display->content['new-c3a5e57e-a7e1-4102-b02c-5fd6910a68ef'] = $pane;
    $display->panels['branding'][0] = 'new-c3a5e57e-a7e1-4102-b02c-5fd6910a68ef';
    $pane = new stdClass();
    $pane->pid = 'new-e600c591-723c-456c-b844-3bfab3078905';
    $pane->panel = 'colophon_first';
    $pane->type = 'block';
    $pane->subtype = 'bean-colophon-about';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e600c591-723c-456c-b844-3bfab3078905';
    $display->content['new-e600c591-723c-456c-b844-3bfab3078905'] = $pane;
    $display->panels['colophon_first'][0] = 'new-e600c591-723c-456c-b844-3bfab3078905';
    $pane = new stdClass();
    $pane->pid = 'new-9c2b99b9-78df-4f4b-91e1-b5c0263108f8';
    $pane->panel = 'colophon_second';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-colophon-first';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '9c2b99b9-78df-4f4b-91e1-b5c0263108f8';
    $display->content['new-9c2b99b9-78df-4f4b-91e1-b5c0263108f8'] = $pane;
    $display->panels['colophon_second'][0] = 'new-9c2b99b9-78df-4f4b-91e1-b5c0263108f8';
    $pane = new stdClass();
    $pane->pid = 'new-4f79c929-7e2b-45a9-9610-2a7b252afcd2';
    $pane->panel = 'colophon_third';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-colophon-second';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '4f79c929-7e2b-45a9-9610-2a7b252afcd2';
    $display->content['new-4f79c929-7e2b-45a9-9610-2a7b252afcd2'] = $pane;
    $display->panels['colophon_third'][0] = 'new-4f79c929-7e2b-45a9-9610-2a7b252afcd2';
    $pane = new stdClass();
    $pane->pid = 'new-03996b15-aebb-4842-ae0c-59b2d554978e';
    $pane->panel = 'content';
    $pane->type = 'page_content';
    $pane->subtype = 'page_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_page_content_1',
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
    $pane->uuid = '03996b15-aebb-4842-ae0c-59b2d554978e';
    $display->content['new-03996b15-aebb-4842-ae0c-59b2d554978e'] = $pane;
    $display->panels['content'][0] = 'new-03996b15-aebb-4842-ae0c-59b2d554978e';
    $pane = new stdClass();
    $pane->pid = 'new-822cb1e2-84f4-476a-ac29-e01d5eebd828';
    $pane->panel = 'footer';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-footer';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '822cb1e2-84f4-476a-ac29-e01d5eebd828';
    $display->content['new-822cb1e2-84f4-476a-ac29-e01d5eebd828'] = $pane;
    $display->panels['footer'][0] = 'new-822cb1e2-84f4-476a-ac29-e01d5eebd828';
    $pane = new stdClass();
    $pane->pid = 'new-d52f106c-80dc-40c8-8b35-a2af356390f0';
    $pane->panel = 'header';
    $pane->type = 'block';
    $pane->subtype = 'system-user-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = 'd52f106c-80dc-40c8-8b35-a2af356390f0';
    $display->content['new-d52f106c-80dc-40c8-8b35-a2af356390f0'] = $pane;
    $display->panels['header'][0] = 'new-d52f106c-80dc-40c8-8b35-a2af356390f0';
    $pane = new stdClass();
    $pane->pid = 'new-f97dc881-cfe4-40ea-8c77-f69d44039cb9';
    $pane->panel = 'header';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Ask A Librarian [PLACEHOLDER]',
      'title' => '',
      'body' => '<a class="btn-ask" href="/support/research-help"><span class="icon-help"></span> Ask A Librarian</a>',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pane-ask-a-librarian',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'f97dc881-cfe4-40ea-8c77-f69d44039cb9';
    $display->content['new-f97dc881-cfe4-40ea-8c77-f69d44039cb9'] = $pane;
    $display->panels['header'][1] = 'new-f97dc881-cfe4-40ea-8c77-f69d44039cb9';
    $pane = new stdClass();
    $pane->pid = 'new-4a1d85b4-084b-45a5-b32e-785f8d118d46';
    $pane->panel = 'header';
    $pane->type = 'search_form';
    $pane->subtype = 'search_form';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '4a1d85b4-084b-45a5-b32e-785f8d118d46';
    $display->content['new-4a1d85b4-084b-45a5-b32e-785f8d118d46'] = $pane;
    $display->panels['header'][2] = 'new-4a1d85b4-084b-45a5-b32e-785f8d118d46';
    $pane = new stdClass();
    $pane->pid = 'new-5396ef1e-5f47-46cf-a786-72d4ffad7281';
    $pane->panel = 'header';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Give Now Button [PLACEHOLDER]',
      'title' => '',
      'body' => '<p><a class="give_now_sprites" href="https://giving.ucla.edu/Standard/NetDonate.aspx?SiteNum=463">Give Now</a></p>',
      'format' => 'full_html',
      'substitute' => 0,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pane-give-now-button',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '5396ef1e-5f47-46cf-a786-72d4ffad7281';
    $display->content['new-5396ef1e-5f47-46cf-a786-72d4ffad7281'] = $pane;
    $display->panels['header'][3] = 'new-5396ef1e-5f47-46cf-a786-72d4ffad7281';
    $pane = new stdClass();
    $pane->pid = 'new-2ce2b75f-31cd-4af2-ad7d-7e4538bd5447';
    $pane->panel = 'help';
    $pane->type = 'page_messages';
    $pane->subtype = 'page_messages';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2ce2b75f-31cd-4af2-ad7d-7e4538bd5447';
    $display->content['new-2ce2b75f-31cd-4af2-ad7d-7e4538bd5447'] = $pane;
    $display->panels['help'][0] = 'new-2ce2b75f-31cd-4af2-ad7d-7e4538bd5447';
    $pane = new stdClass();
    $pane->pid = 'new-6437a63b-88a8-4408-b7a6-b34bd467a10a';
    $pane->panel = 'help';
    $pane->type = 'panels_mini';
    $pane->subtype = 'alert_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array(
      'method' => '0',
      'settings' => array(),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '6437a63b-88a8-4408-b7a6-b34bd467a10a';
    $display->content['new-6437a63b-88a8-4408-b7a6-b34bd467a10a'] = $pane;
    $display->panels['help'][1] = 'new-6437a63b-88a8-4408-b7a6-b34bd467a10a';
    $pane = new stdClass();
    $pane->pid = 'new-7c546006-b2c0-4d9f-b66d-6766ebfd3163';
    $pane->panel = 'help';
    $pane->type = 'page_help';
    $pane->subtype = 'page_help';
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
    $pane->uuid = '7c546006-b2c0-4d9f-b66d-6766ebfd3163';
    $display->content['new-7c546006-b2c0-4d9f-b66d-6766ebfd3163'] = $pane;
    $display->panels['help'][2] = 'new-7c546006-b2c0-4d9f-b66d-6766ebfd3163';
    $pane = new stdClass();
    $pane->pid = 'new-17fc25b6-f0fa-4bde-8670-f1f2f072aca6';
    $pane->panel = 'help';
    $pane->type = 'page_feed_icons';
    $pane->subtype = 'page_feed_icons';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '17fc25b6-f0fa-4bde-8670-f1f2f072aca6';
    $display->content['new-17fc25b6-f0fa-4bde-8670-f1f2f072aca6'] = $pane;
    $display->panels['help'][3] = 'new-17fc25b6-f0fa-4bde-8670-f1f2f072aca6';
    $pane = new stdClass();
    $pane->pid = 'new-ea915ace-d68f-4e68-aa3a-996e44d19cb5';
    $pane->panel = 'highlighted';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h1',
      'class' => '',
      'id' => '',
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
    $pane->uuid = 'ea915ace-d68f-4e68-aa3a-996e44d19cb5';
    $display->content['new-ea915ace-d68f-4e68-aa3a-996e44d19cb5'] = $pane;
    $display->panels['highlighted'][0] = 'new-ea915ace-d68f-4e68-aa3a-996e44d19cb5';
    $pane = new stdClass();
    $pane->pid = 'new-16d716d2-a109-46d3-882c-5222a852257f';
    $pane->panel = 'highlighted';
    $pane->type = 'page_tabs';
    $pane->subtype = 'page_tabs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'both',
      'id' => 'tabs',
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
    $pane->uuid = '16d716d2-a109-46d3-882c-5222a852257f';
    $display->content['new-16d716d2-a109-46d3-882c-5222a852257f'] = $pane;
    $display->panels['highlighted'][1] = 'new-16d716d2-a109-46d3-882c-5222a852257f';
    $pane = new stdClass();
    $pane->pid = 'new-5e1687a8-0089-4fa2-96fd-299cfbc55346';
    $pane->panel = 'navigation';
    $pane->type = 'page_primary_links';
    $pane->subtype = 'page_primary_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '5e1687a8-0089-4fa2-96fd-299cfbc55346';
    $display->content['new-5e1687a8-0089-4fa2-96fd-299cfbc55346'] = $pane;
    $display->panels['navigation'][0] = 'new-5e1687a8-0089-4fa2-96fd-299cfbc55346';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-c3a5e57e-a7e1-4102-b02c-5fd6910a68ef';
  $handler->conf['display'] = $display;
  $export['site_template_panel_context'] = $handler;

  return $export;
}
