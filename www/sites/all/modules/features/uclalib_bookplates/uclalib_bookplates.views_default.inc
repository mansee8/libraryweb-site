<?php
/**
 * @file
 * uclalib_bookplates.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function uclalib_bookplates_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'bookplates_full_content';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_bookplates';
  $view->human_name = 'Bookplates Search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Read more about this endowment...';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Field: Indexed Content: Bookplate Description */
  $handler->display->display_options['fields']['field_bookplate_description']['id'] = 'field_bookplate_description';
  $handler->display->display_options['fields']['field_bookplate_description']['table'] = 'search_api_index_bookplates';
  $handler->display->display_options['fields']['field_bookplate_description']['field'] = 'field_bookplate_description';
  $handler->display->display_options['fields']['field_bookplate_description']['label'] = '';
  $handler->display->display_options['fields']['field_bookplate_description']['element_label_colon'] = FALSE;
  /* Field: Indexed Content: Subject Area(s) */
  $handler->display->display_options['fields']['field_bookplates_subject_area_1']['id'] = 'field_bookplates_subject_area_1';
  $handler->display->display_options['fields']['field_bookplates_subject_area_1']['table'] = 'search_api_index_bookplates';
  $handler->display->display_options['fields']['field_bookplates_subject_area_1']['field'] = 'field_bookplates_subject_area';
  $handler->display->display_options['fields']['field_bookplates_subject_area_1']['label'] = '';
  $handler->display->display_options['fields']['field_bookplates_subject_area_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bookplates_subject_area_1']['list']['separator'] = ' ';
  $handler->display->display_options['fields']['field_bookplates_subject_area_1']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_bookplates_subject_area_1']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_bookplates_subject_area_1']['bypass_access'] = 1;
  /* Field: Indexed Content: Spak Code */
  $handler->display->display_options['fields']['field_bookplates_spak_code']['id'] = 'field_bookplates_spak_code';
  $handler->display->display_options['fields']['field_bookplates_spak_code']['table'] = 'search_api_index_bookplates';
  $handler->display->display_options['fields']['field_bookplates_spak_code']['field'] = 'field_bookplates_spak_code';
  $handler->display->display_options['fields']['field_bookplates_spak_code']['label'] = '';
  $handler->display->display_options['fields']['field_bookplates_spak_code']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bookplates_spak_code']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_bookplates_spak_code']['group_column'] = '';
  /* Filter criterion: Indexed Content: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_bookplates';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Content type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_bookplates';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';

  /* Display: Content Pane */
  $handler = $view->new_display('panel_pane', 'Content Pane', 'bookplates_pane');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'Used in solr search';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No results found for this search.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Indexed Content: Node ID */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'search_api_index_bookplates';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  /* Sort criterion: Search: Relevance */
  $handler->display->display_options['sorts']['search_api_relevance']['id'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['table'] = 'search_api_index_bookplates';
  $handler->display->display_options['sorts']['search_api_relevance']['field'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_bookplates';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['operator'] = 'OR';
  $handler->display->display_options['filters']['search_api_views_fulltext']['group'] = 1;
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    8 => 0,
    5 => 0,
    9 => 0,
    10 => 0,
    3 => 0,
    6 => 0,
    7 => 0,
    11 => 0,
  );
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['link_to_view'] = '0';
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Bookplates Context */
  $handler = $view->new_display('ctools_context', 'Bookplates Context', 'ctools_context_1');
  $handler->display->display_options['style_plugin'] = 'ctools_context';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Content: Bookplate Description */
  $handler->display->display_options['fields']['field_bookplate_description']['id'] = 'field_bookplate_description';
  $handler->display->display_options['fields']['field_bookplate_description']['table'] = 'search_api_index_bookplates';
  $handler->display->display_options['fields']['field_bookplate_description']['field'] = 'field_bookplate_description';
  $handler->display->display_options['fields']['field_bookplate_description']['label'] = '';
  $handler->display->display_options['fields']['field_bookplate_description']['element_label_colon'] = FALSE;
  /* Field: Indexed Content: Subject Area(s) */
  $handler->display->display_options['fields']['field_bookplates_subject_area_1']['id'] = 'field_bookplates_subject_area_1';
  $handler->display->display_options['fields']['field_bookplates_subject_area_1']['table'] = 'search_api_index_bookplates';
  $handler->display->display_options['fields']['field_bookplates_subject_area_1']['field'] = 'field_bookplates_subject_area';
  $handler->display->display_options['fields']['field_bookplates_subject_area_1']['label'] = '';
  $handler->display->display_options['fields']['field_bookplates_subject_area_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bookplates_subject_area_1']['list']['separator'] = ' ';
  $handler->display->display_options['fields']['field_bookplates_subject_area_1']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_bookplates_subject_area_1']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_bookplates_subject_area_1']['bypass_access'] = 1;
  /* Field: Indexed Content: Spak Code */
  $handler->display->display_options['fields']['field_bookplates_spak_code']['id'] = 'field_bookplates_spak_code';
  $handler->display->display_options['fields']['field_bookplates_spak_code']['table'] = 'search_api_index_bookplates';
  $handler->display->display_options['fields']['field_bookplates_spak_code']['field'] = 'field_bookplates_spak_code';
  $handler->display->display_options['fields']['field_bookplates_spak_code']['label'] = '';
  $handler->display->display_options['fields']['field_bookplates_spak_code']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bookplates_spak_code']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_bookplates_spak_code']['group_column'] = '';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Indexed Content: Node ID */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'search_api_index_bookplates';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  /* Sort criterion: Search: Relevance */
  $handler->display->display_options['sorts']['search_api_relevance']['id'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['table'] = 'search_api_index_bookplates';
  $handler->display->display_options['sorts']['search_api_relevance']['field'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Content: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_bookplates';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'bookplates' => 'bookplates',
  );
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    8 => 0,
    5 => 0,
    9 => 0,
    10 => 0,
    3 => 0,
    6 => 0,
    7 => 0,
    11 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = 0;
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_bookplates';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['operator'] = 'OR';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    8 => 0,
    5 => 0,
    9 => 0,
    10 => 0,
    3 => 0,
    6 => 0,
    7 => 0,
    11 => 0,
  );
  $handler->display->display_options['inherit_panels_path'] = '1';
  $export['bookplates_full_content'] = $view;

  $view = new view();
  $view->name = 'bookplates_landing_page';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Bookplates Landing Page';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Read more about this endowment...';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'field_bookplates_subject_area_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'full_html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '%1';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '49';
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'div';
  /* Field: Content: Donor(s) */
  $handler->display->display_options['fields']['field_donor_name_bookplates']['id'] = 'field_donor_name_bookplates';
  $handler->display->display_options['fields']['field_donor_name_bookplates']['table'] = 'field_data_field_donor_name_bookplates';
  $handler->display->display_options['fields']['field_donor_name_bookplates']['field'] = 'field_donor_name_bookplates';
  $handler->display->display_options['fields']['field_donor_name_bookplates']['label'] = 'Made possible by a gift from';
  $handler->display->display_options['fields']['field_donor_name_bookplates']['alter']['text'] = '[field_donor_name_bookplates-format]';
  $handler->display->display_options['fields']['field_donor_name_bookplates']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_donor_name_bookplates']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_donor_name_bookplates']['element_type'] = '0';
  $handler->display->display_options['fields']['field_donor_name_bookplates']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_donor_name_bookplates']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_donor_name_bookplates']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['field_donor_name_bookplates']['element_wrapper_class'] = 'bookplates-donor-gift';
  $handler->display->display_options['fields']['field_donor_name_bookplates']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_donor_name_bookplates']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_donor_name_bookplates']['separator'] = ' and ';
  /* Field: Content: Bookplate Image */
  $handler->display->display_options['fields']['field_bookplate_image']['id'] = 'field_bookplate_image';
  $handler->display->display_options['fields']['field_bookplate_image']['table'] = 'field_data_field_bookplate_image';
  $handler->display->display_options['fields']['field_bookplate_image']['field'] = 'field_bookplate_image';
  $handler->display->display_options['fields']['field_bookplate_image']['label'] = '';
  $handler->display->display_options['fields']['field_bookplate_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bookplate_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_bookplate_image']['type'] = 'image_link_formatter';
  $handler->display->display_options['fields']['field_bookplate_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_type'] = 'div';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['link_to_node'] = TRUE;
  /* Field: Content: Bookplate Description */
  $handler->display->display_options['fields']['field_bookplate_description']['id'] = 'field_bookplate_description';
  $handler->display->display_options['fields']['field_bookplate_description']['table'] = 'field_data_field_bookplate_description';
  $handler->display->display_options['fields']['field_bookplate_description']['field'] = 'field_bookplate_description';
  $handler->display->display_options['fields']['field_bookplate_description']['label'] = '';
  $handler->display->display_options['fields']['field_bookplate_description']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_bookplate_description']['alter']['path'] = '[nid]';
  $handler->display->display_options['fields']['field_bookplate_description']['alter']['max_length'] = '300';
  $handler->display->display_options['fields']['field_bookplate_description']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_bookplate_description']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['field_bookplate_description']['alter']['more_link_text'] = 'Read more about this endowment...';
  $handler->display->display_options['fields']['field_bookplate_description']['alter']['more_link_path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_bookplate_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_bookplate_description']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_bookplate_description']['element_class'] = 'read-more';
  $handler->display->display_options['fields']['field_bookplate_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bookplate_description']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_bookplate_description']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['anyall'] = '+';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['vocabularies'] = array(
    'collection_endowment_initiative' => 'collection_endowment_initiative',
  );
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'bookplates' => 'bookplates',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Bookplates Landing Page */
  $handler = $view->new_display('page', 'Bookplates Landing Page', 'bookplates_landing_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '8, 20, 40, 60, 200';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['row_class'] = 'grid-3';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_donor_name_bookplates' => 'field_donor_name_bookplates',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '40';
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Bookplate Image */
  $handler->display->display_options['fields']['field_bookplate_image']['id'] = 'field_bookplate_image';
  $handler->display->display_options['fields']['field_bookplate_image']['table'] = 'field_data_field_bookplate_image';
  $handler->display->display_options['fields']['field_bookplate_image']['field'] = 'field_bookplate_image';
  $handler->display->display_options['fields']['field_bookplate_image']['label'] = '';
  $handler->display->display_options['fields']['field_bookplate_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bookplate_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_bookplate_image']['type'] = 'image_link_formatter';
  $handler->display->display_options['fields']['field_bookplate_image']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Content: Donor(s) */
  $handler->display->display_options['fields']['field_donor_name_bookplates']['id'] = 'field_donor_name_bookplates';
  $handler->display->display_options['fields']['field_donor_name_bookplates']['table'] = 'field_data_field_donor_name_bookplates';
  $handler->display->display_options['fields']['field_donor_name_bookplates']['field'] = 'field_donor_name_bookplates';
  $handler->display->display_options['fields']['field_donor_name_bookplates']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_donor_name_bookplates']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_donor_name_bookplates']['multi_type'] = 'ul';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Sort by (field_sort_by) */
  $handler->display->display_options['sorts']['field_sort_by_value']['id'] = 'field_sort_by_value';
  $handler->display->display_options['sorts']['field_sort_by_value']['table'] = 'field_data_field_sort_by';
  $handler->display->display_options['sorts']['field_sort_by_value']['field'] = 'field_sort_by_value';
  /* Sort criterion: Content: Updated/commented date */
  $handler->display->display_options['sorts']['last_updated']['id'] = 'last_updated';
  $handler->display->display_options['sorts']['last_updated']['table'] = 'node_comment_statistics';
  $handler->display->display_options['sorts']['last_updated']['field'] = 'last_updated';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'bookplates' => 'bookplates',
  );
  /* Filter criterion: Content: Subject Area(s) (field_bookplates_subject_area) */
  $handler->display->display_options['filters']['field_bookplates_subject_area_tid']['id'] = 'field_bookplates_subject_area_tid';
  $handler->display->display_options['filters']['field_bookplates_subject_area_tid']['table'] = 'field_data_field_bookplates_subject_area';
  $handler->display->display_options['filters']['field_bookplates_subject_area_tid']['field'] = 'field_bookplates_subject_area_tid';
  $handler->display->display_options['filters']['field_bookplates_subject_area_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_bookplates_subject_area_tid']['expose']['operator_id'] = 'field_bookplates_subject_area_tid_op';
  $handler->display->display_options['filters']['field_bookplates_subject_area_tid']['expose']['operator'] = 'field_bookplates_subject_area_tid_op';
  $handler->display->display_options['filters']['field_bookplates_subject_area_tid']['expose']['identifier'] = 'field_bookplates_subject_area_tid';
  $handler->display->display_options['filters']['field_bookplates_subject_area_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_bookplates_subject_area_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    8 => 0,
    5 => 0,
    9 => 0,
    10 => 0,
    3 => 0,
    6 => 0,
    7 => 0,
    11 => 0,
  );
  $handler->display->display_options['filters']['field_bookplates_subject_area_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_bookplates_subject_area_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_bookplates_subject_area_tid']['vocabulary'] = 'collection_endowment_initiative';
  $handler->display->display_options['filters']['field_bookplates_subject_area_tid']['error_message'] = FALSE;
  $handler->display->display_options['path'] = 'bookplates-landing-page';

  /* Display: Bookplates Vocablulary */
  $handler = $view->new_display('ctools_context', 'Bookplates Vocablulary', 'ctools_context_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'ctools_context';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Bookplate Image */
  $handler->display->display_options['fields']['field_bookplate_image']['id'] = 'field_bookplate_image';
  $handler->display->display_options['fields']['field_bookplate_image']['table'] = 'field_data_field_bookplate_image';
  $handler->display->display_options['fields']['field_bookplate_image']['field'] = 'field_bookplate_image';
  $handler->display->display_options['fields']['field_bookplate_image']['label'] = '';
  $handler->display->display_options['fields']['field_bookplate_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bookplate_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_bookplate_image']['type'] = 'fancybox';
  $handler->display->display_options['fields']['field_bookplate_image']['settings'] = array(
    'fancybox_image_style_content' => 'medium',
    'fancybox_image_style_fancybox' => 'large',
    'fancybox_gallery' => 'post',
    'fancybox_gallery_custom' => '',
    'fancybox_caption' => 'title',
    'fancybox_caption_custom' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '49';
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Donor(s) */
  $handler->display->display_options['fields']['field_donor_name_bookplates']['id'] = 'field_donor_name_bookplates';
  $handler->display->display_options['fields']['field_donor_name_bookplates']['table'] = 'field_data_field_donor_name_bookplates';
  $handler->display->display_options['fields']['field_donor_name_bookplates']['field'] = 'field_donor_name_bookplates';
  $handler->display->display_options['fields']['field_donor_name_bookplates']['label'] = '';
  $handler->display->display_options['fields']['field_donor_name_bookplates']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_donor_name_bookplates']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_donor_name_bookplates']['multi_type'] = 'ul';
  /* Field: Content: Subject Area(s) */
  $handler->display->display_options['fields']['field_bookplates_subject_area']['id'] = 'field_bookplates_subject_area';
  $handler->display->display_options['fields']['field_bookplates_subject_area']['table'] = 'field_data_field_bookplates_subject_area';
  $handler->display->display_options['fields']['field_bookplates_subject_area']['field'] = 'field_bookplates_subject_area';
  $handler->display->display_options['fields']['field_bookplates_subject_area']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bookplates_subject_area']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_bookplates_subject_area']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_bookplates_subject_area']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_bookplates_subject_area']['multi_type'] = 'ul';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['text'] = '[view_node]';
  $handler->display->display_options['fields']['view_node']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'READ MORE...';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['anyall'] = '+';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['vocabularies'] = array(
    'collection_endowment_initiative' => 'collection_endowment_initiative',
  );
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['reduce_duplicates'] = TRUE;
  $export['bookplates_landing_page'] = $view;

  $view = new view();
  $view->name = 'bookplates_single_node';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Bookplates Single Node';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Read more about this endowment...';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_url_after_spak_code' => 'field_url_after_spak_code',
    'field_url_before_spak_code' => 'field_url_before_spak_code',
    'field_bookplates_spak_code' => 'field_bookplates_spak_code',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Field: Content: Donor(s) */
  $handler->display->display_options['fields']['field_donor_name_bookplates']['id'] = 'field_donor_name_bookplates';
  $handler->display->display_options['fields']['field_donor_name_bookplates']['table'] = 'field_data_field_donor_name_bookplates';
  $handler->display->display_options['fields']['field_donor_name_bookplates']['field'] = 'field_donor_name_bookplates';
  $handler->display->display_options['fields']['field_donor_name_bookplates']['label'] = 'Made possible by a gift from ';
  $handler->display->display_options['fields']['field_donor_name_bookplates']['element_type'] = '0';
  $handler->display->display_options['fields']['field_donor_name_bookplates']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_donor_name_bookplates']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_donor_name_bookplates']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['field_donor_name_bookplates']['element_wrapper_class'] = 'bookplates-donor-gift';
  $handler->display->display_options['fields']['field_donor_name_bookplates']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_donor_name_bookplates']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_donor_name_bookplates']['multi_type'] = 'ul';
  $handler->display->display_options['fields']['field_donor_name_bookplates']['separator'] = '';
  /* Field: Content: Bookplate Image */
  $handler->display->display_options['fields']['field_bookplate_image']['id'] = 'field_bookplate_image';
  $handler->display->display_options['fields']['field_bookplate_image']['table'] = 'field_data_field_bookplate_image';
  $handler->display->display_options['fields']['field_bookplate_image']['field'] = 'field_bookplate_image';
  $handler->display->display_options['fields']['field_bookplate_image']['label'] = '';
  $handler->display->display_options['fields']['field_bookplate_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bookplate_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_bookplate_image']['settings'] = array(
    'image_style' => 'large',
    'image_link' => '',
  );
  /* Field: Content: Bookplate Description */
  $handler->display->display_options['fields']['field_bookplate_description']['id'] = 'field_bookplate_description';
  $handler->display->display_options['fields']['field_bookplate_description']['table'] = 'field_data_field_bookplate_description';
  $handler->display->display_options['fields']['field_bookplate_description']['field'] = 'field_bookplate_description';
  $handler->display->display_options['fields']['field_bookplate_description']['label'] = '';
  $handler->display->display_options['fields']['field_bookplate_description']['element_label_colon'] = FALSE;
  /* Field: Content: Subject Area(s) */
  $handler->display->display_options['fields']['field_bookplates_subject_area_1']['id'] = 'field_bookplates_subject_area_1';
  $handler->display->display_options['fields']['field_bookplates_subject_area_1']['table'] = 'field_data_field_bookplates_subject_area';
  $handler->display->display_options['fields']['field_bookplates_subject_area_1']['field'] = 'field_bookplates_subject_area';
  $handler->display->display_options['fields']['field_bookplates_subject_area_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bookplates_subject_area_1']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_bookplates_subject_area_1']['multi_type'] = 'ul';
  /* Field: Content: Spak Code */
  $handler->display->display_options['fields']['field_bookplates_spak_code']['id'] = 'field_bookplates_spak_code';
  $handler->display->display_options['fields']['field_bookplates_spak_code']['table'] = 'field_data_field_bookplates_spak_code';
  $handler->display->display_options['fields']['field_bookplates_spak_code']['field'] = 'field_bookplates_spak_code';
  $handler->display->display_options['fields']['field_bookplates_spak_code']['label'] = '';
  $handler->display->display_options['fields']['field_bookplates_spak_code']['alter']['text'] = 'See all items purchased through this Endowment.';
  $handler->display->display_options['fields']['field_bookplates_spak_code']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bookplates_spak_code']['hide_empty'] = TRUE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'bookplates' => 'bookplates',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $export['bookplates_single_node'] = $view;

  return $export;
}
