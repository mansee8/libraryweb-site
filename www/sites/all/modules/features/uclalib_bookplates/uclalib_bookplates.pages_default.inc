<?php
/**
 * @file
 * uclalib_bookplates.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function uclalib_bookplates_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_51f84529-a3a2-4b4e-b6d8-31e6044daae0';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -20;
  $handler->conf = array(
    'title' => 'Bookplates',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'bookplates' => 'bookplates',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'or',
    ),
  );
  $display = new panels_display();
  $display->layout = 'sidebar-left';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'sidebar_left' => NULL,
      'main' => NULL,
      'below_main_left' => NULL,
      'below_main_right' => NULL,
      'secondary' => NULL,
      'below_secondary_left' => NULL,
      'below_secondary_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Collection Endowments';
  $display->uuid = '2b8a5ef6-b358-452c-a9ce-94c35f66f55f';
  $display->window_title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-53057e06-2bd4-498e-aabb-7033213d00e0';
    $pane->panel = 'main';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 0,
      'no_extras' => 1,
      'override_title' => 0,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 0,
      'leave_node_title' => 1,
      'build_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '53057e06-2bd4-498e-aabb-7033213d00e0';
    $display->content['new-53057e06-2bd4-498e-aabb-7033213d00e0'] = $pane;
    $display->panels['main'][0] = 'new-53057e06-2bd4-498e-aabb-7033213d00e0';
    $pane = new stdClass();
    $pane->pid = 'new-e545e4a1-efc6-4acc-a2d2-4186256789db';
    $pane->panel = 'main';
    $pane->type = 'views';
    $pane->subtype = 'bookplates_single_node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'e545e4a1-efc6-4acc-a2d2-4186256789db';
    $display->content['new-e545e4a1-efc6-4acc-a2d2-4186256789db'] = $pane;
    $display->panels['main'][1] = 'new-e545e4a1-efc6-4acc-a2d2-4186256789db';
    $pane = new stdClass();
    $pane->pid = 'new-db284ac2-8c85-4c1a-861e-afba19145998';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'bookplates_subject_areas-panel_pane_1';
    $pane->shown = FALSE;
    $pane->access = array(
      'plugins' => array(),
    );
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '%taxonomy_term:name',
      ),
      'override_title' => 1,
      'override_title_text' => 'Collection Endowments',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'db284ac2-8c85-4c1a-861e-afba19145998';
    $display->content['new-db284ac2-8c85-4c1a-861e-afba19145998'] = $pane;
    $display->panels['main'][2] = 'new-db284ac2-8c85-4c1a-861e-afba19145998';
    $pane = new stdClass();
    $pane->pid = 'new-724bbc15-6ae2-4aac-86be-b4ea82ffc408';
    $pane->panel = 'sidebar_left';
    $pane->type = 'uclalib_nav';
    $pane->subtype = 'uclalib_nav';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'sidebar-options',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '724bbc15-6ae2-4aac-86be-b4ea82ffc408';
    $display->content['new-724bbc15-6ae2-4aac-86be-b4ea82ffc408'] = $pane;
    $display->panels['sidebar_left'][0] = 'new-724bbc15-6ae2-4aac-86be-b4ea82ffc408';
    $pane = new stdClass();
    $pane->pid = 'new-3cb57e0e-d422-4efe-9e6a-e49ffbc08671';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Back to Bookplates breadcrumbs',
      'title' => '',
      'body' => '<p><a href="/bookplates">&lt; All Bookplates</a></p>
',
      'format' => 'full_html',
      'substitute' => 1,
      'name' => 'bookplates_breadcrumbs',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3cb57e0e-d422-4efe-9e6a-e49ffbc08671';
    $display->content['new-3cb57e0e-d422-4efe-9e6a-e49ffbc08671'] = $pane;
    $display->panels['top'][0] = 'new-3cb57e0e-d422-4efe-9e6a-e49ffbc08671';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-3cb57e0e-d422-4efe-9e6a-e49ffbc08671';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_51f84529-a3a2-4b4e-b6d8-31e6044daae0'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view__panel_context_106d1ac8-d0a0-46a9-a879-67d3e65c2b65';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -98;
  $handler->conf = array(
    'title' => 'Bookplates Subject Area',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'collection_endowment_initiative' => 'collection_endowment_initiative',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'context_exists',
          'settings' => array(
            'exists' => '1',
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'or',
    ),
  );
  $display = new panels_display();
  $display->layout = 'sidebar-left-golden';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'sidebar_left' => NULL,
      'main' => NULL,
      'below_main_left' => NULL,
      'below_main_right' => NULL,
      'secondary' => NULL,
      'below_secondary_left' => NULL,
      'below_secondary_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Collection Endowments';
  $display->uuid = '8f7910d2-1e76-4f28-a45d-4619c4a47230';
  $display->window_title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-df7d44a8-a50e-4b4d-b90d-60f1455f85c0';
    $pane->panel = 'main';
    $pane->type = 'views';
    $pane->subtype = 'bookplates_landing_page';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '10',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'df7d44a8-a50e-4b4d-b90d-60f1455f85c0';
    $display->content['new-df7d44a8-a50e-4b4d-b90d-60f1455f85c0'] = $pane;
    $display->panels['main'][0] = 'new-df7d44a8-a50e-4b4d-b90d-60f1455f85c0';
    $pane = new stdClass();
    $pane->pid = 'new-dab89867-e312-47cb-bc60-30803c0afc09';
    $pane->panel = 'sidebar_left';
    $pane->type = 'uclalib_nav';
    $pane->subtype = 'uclalib_nav';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'dab89867-e312-47cb-bc60-30803c0afc09';
    $display->content['new-dab89867-e312-47cb-bc60-30803c0afc09'] = $pane;
    $display->panels['sidebar_left'][0] = 'new-dab89867-e312-47cb-bc60-30803c0afc09';
    $pane = new stdClass();
    $pane->pid = 'new-1d9d4c21-1d76-47a8-af9b-5d1871fa3879';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'bookplates_breadcrumbs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1d9d4c21-1d76-47a8-af9b-5d1871fa3879';
    $display->content['new-1d9d4c21-1d76-47a8-af9b-5d1871fa3879'] = $pane;
    $display->panels['top'][0] = 'new-1d9d4c21-1d76-47a8-af9b-5d1871fa3879';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-dab89867-e312-47cb-bc60-30803c0afc09';
  $handler->conf['display'] = $display;
  $export['term_view__panel_context_106d1ac8-d0a0-46a9-a879-67d3e65c2b65'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function uclalib_bookplates_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'bookplates';
  $page->task = 'page';
  $page->admin_title = 'Bookplates';
  $page->admin_description = '';
  $page->path = 'bookplates';
  $page->access = array(
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'none',
    'title' => '',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_bookplates__panel';
  $handler->task = 'page';
  $handler->subtask = 'bookplates';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Bookplates',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
    'access' => array(
      'logic' => 'and',
      'plugins' => array(),
    ),
  );
  $display = new panels_display();
  $display->layout = 'sidebar-left-golden';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'sidebar_left' => NULL,
      'main' => NULL,
      'below_main_left' => NULL,
      'below_main_right' => NULL,
      'secondary' => NULL,
      'below_secondary_left' => NULL,
      'below_secondary_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Collection Endowments';
  $display->uuid = '5730a645-80d8-4490-9906-bd90d72db03d';
  $display->window_title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-58b6a450-81d4-4bd3-a63d-0a308f856142';
    $pane->panel = 'main';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'bookplates',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'query_string_exists',
          'settings' => array(
            'key' => 'items_per_page',
          ),
          'not' => TRUE,
        ),
        2 => array(
          'name' => 'query_string_exists',
          'settings' => array(
            'key' => 'search_api_views_fulltext',
          ),
          'not' => TRUE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'About Bookplates',
      'title' => '',
      'body' => '<p><span style="font-size:16px;">Endowments at The University of California, Los Angeles are a sound investment in a better future. With an endowed gift, you provide permanent support for the UCLA Library and create a living legacy that spans generations. If you have questions or would like to establish an endowment, please contact <a href="http://library.ucla.edu/about/giving-library/contact-us">Library Development</a>.</span></p>
<hr>
<p>&nbsp;</p>
',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '58b6a450-81d4-4bd3-a63d-0a308f856142';
    $display->content['new-58b6a450-81d4-4bd3-a63d-0a308f856142'] = $pane;
    $display->panels['main'][0] = 'new-58b6a450-81d4-4bd3-a63d-0a308f856142';
    $pane = new stdClass();
    $pane->pid = 'new-b00e79e1-4a09-4995-b90a-222d155bbb59';
    $pane->panel = 'main';
    $pane->type = 'views';
    $pane->subtype = 'bookplates_landing_page';
    $pane->shown = TRUE;
    $pane->access = array(
      'logic' => 'or',
      'plugins' => array(
        0 => array(
          'name' => 'query_string_exists',
          'settings' => array(
            'key' => 'search_api_views_fulltext',
          ),
          'not' => TRUE,
        ),
        1 => array(
          'name' => 'front',
          'settings' => NULL,
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '10',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => 'bookplates',
      'display' => 'bookplates_landing_page',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'b00e79e1-4a09-4995-b90a-222d155bbb59';
    $display->content['new-b00e79e1-4a09-4995-b90a-222d155bbb59'] = $pane;
    $display->panels['main'][1] = 'new-b00e79e1-4a09-4995-b90a-222d155bbb59';
    $pane = new stdClass();
    $pane->pid = 'new-9003af41-ee69-4006-b051-f5b60f6f557b';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'bookplates_full_content-bookplates_pane';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'query_string_exists',
          'settings' => array(
            'key' => 'search_api_views_fulltext',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'or',
    );
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '9003af41-ee69-4006-b051-f5b60f6f557b';
    $display->content['new-9003af41-ee69-4006-b051-f5b60f6f557b'] = $pane;
    $display->panels['main'][2] = 'new-9003af41-ee69-4006-b051-f5b60f6f557b';
    $pane = new stdClass();
    $pane->pid = 'new-cb453f78-d7b0-4208-a942-3be84ec96b8a';
    $pane->panel = 'sidebar_left';
    $pane->type = 'block';
    $pane->subtype = 'views-cc66f41f56902ca4d45831e1c0e85613';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'inherit_path' => 1,
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'sidebar-search',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'cb453f78-d7b0-4208-a942-3be84ec96b8a';
    $display->content['new-cb453f78-d7b0-4208-a942-3be84ec96b8a'] = $pane;
    $display->panels['sidebar_left'][0] = 'new-cb453f78-d7b0-4208-a942-3be84ec96b8a';
    $pane = new stdClass();
    $pane->pid = 'new-3c2cb5d8-ecbf-467b-962e-d13e769749ab';
    $pane->panel = 'sidebar_left';
    $pane->type = 'block';
    $pane->subtype = 'views-325a6df0a2b3efc28dd7107fef13cd64';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'inherit_path' => 1,
      'override_title' => 1,
      'override_title_text' => 'Subject Areas',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'pane_collapsed' => 0,
      ),
      'style' => 'collapsible',
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'sidebar-options',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '3c2cb5d8-ecbf-467b-962e-d13e769749ab';
    $display->content['new-3c2cb5d8-ecbf-467b-962e-d13e769749ab'] = $pane;
    $display->panels['sidebar_left'][1] = 'new-3c2cb5d8-ecbf-467b-962e-d13e769749ab';
    $pane = new stdClass();
    $pane->pid = 'new-56ea9b8e-ce96-42af-8fd6-db9c4c446618';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'bookplates_breadcrumbs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '56ea9b8e-ce96-42af-8fd6-db9c4c446618';
    $display->content['new-56ea9b8e-ce96-42af-8fd6-db9c4c446618'] = $pane;
    $display->panels['top'][0] = 'new-56ea9b8e-ce96-42af-8fd6-db9c4c446618';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['bookplates'] = $page;

  return $pages;

}
