<?php
/**
 * @file
 * fjvu_stories.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function fjvu_stories_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'article_archive';
  $view->description = 'Nyhedsarkiv';
  $view->tag = 'fjvu';
  $view->base_table = 'node';
  $view->human_name = 'Article archive';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Nyhedsarkiv */
  $handler = $view->new_display('default', 'Nyhedsarkiv', 'default');
  $handler->display->display_options['title'] = 'Nyheder';
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementer pr. side';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'body' => 'title',
    'field_article_picture' => 'field_article_picture',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '<br>',
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_article_picture' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-right',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Sidefod: Global: Tekstområde */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Felt: Indhold: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '250',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Felt: Indhold: Billede */
  $handler->display->display_options['fields']['field_article_picture']['id'] = 'field_article_picture';
  $handler->display->display_options['fields']['field_article_picture']['table'] = 'field_data_field_article_picture';
  $handler->display->display_options['fields']['field_article_picture']['field'] = 'field_article_picture';
  $handler->display->display_options['fields']['field_article_picture']['label'] = '';
  $handler->display->display_options['fields']['field_article_picture']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_article_picture']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_article_picture']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_article_picture']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_article_picture']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_article_picture']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_article_picture']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_article_picture']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_article_picture']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_article_picture']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_article_picture']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_article_picture']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_article_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_article_picture']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_article_picture']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_article_picture']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_article_picture']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_article_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_article_picture']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_article_picture']['field_api_classes'] = 0;
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'story' => 'story',
  );
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Tags (taxonomy_vocabulary_4) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_4_tid']['id'] = 'taxonomy_vocabulary_4_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_4_tid']['table'] = 'field_data_taxonomy_vocabulary_4';
  $handler->display->display_options['filters']['taxonomy_vocabulary_4_tid']['field'] = 'taxonomy_vocabulary_4_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_4_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_4_tid']['expose']['operator_id'] = 'taxonomy_vocabulary_4_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_4_tid']['expose']['label'] = 'Tags (taxonomy_vocabulary_4)';
  $handler->display->display_options['filters']['taxonomy_vocabulary_4_tid']['expose']['use_operator'] = FALSE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_4_tid']['expose']['operator'] = 'taxonomy_vocabulary_4_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_4_tid']['expose']['identifier'] = 'taxonomy_vocabulary_4_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_4_tid']['expose']['required'] = FALSE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_4_tid']['expose']['remember'] = FALSE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_4_tid']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_4_tid']['reduce_duplicates'] = 1;
  $handler->display->display_options['filters']['taxonomy_vocabulary_4_tid']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_vocabulary_4_tid']['vocabulary'] = 'vocabulary_4';
  $handler->display->display_options['filters']['taxonomy_vocabulary_4_tid']['error_message'] = 1;

  /* Display: Side */
  $handler = $view->new_display('page', 'Side', 'page_1');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_article_picture' => 'title',
    'body' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '<br>',
    ),
    'field_article_picture' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-right',
      'separator' => '',
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Billede */
  $handler->display->display_options['fields']['field_article_picture']['id'] = 'field_article_picture';
  $handler->display->display_options['fields']['field_article_picture']['table'] = 'field_data_field_article_picture';
  $handler->display->display_options['fields']['field_article_picture']['field'] = 'field_article_picture';
  $handler->display->display_options['fields']['field_article_picture']['label'] = '';
  $handler->display->display_options['fields']['field_article_picture']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_article_picture']['alter']['text'] = '<div style="float:right;">[field_article_picture]</div>';
  $handler->display->display_options['fields']['field_article_picture']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_article_picture']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_article_picture']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_article_picture']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_article_picture']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_article_picture']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_article_picture']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_article_picture']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_article_picture']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_article_picture']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_article_picture']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_article_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_article_picture']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_article_picture']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_article_picture']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_article_picture']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_article_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_article_picture']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_article_picture']['field_api_classes'] = 0;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<b>[title]</b>';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Felt: Indhold: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '250',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'story' => 'story',
  );
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Tags (taxonomy_vocabulary_4) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_4_tid']['id'] = 'taxonomy_vocabulary_4_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_4_tid']['table'] = 'field_data_taxonomy_vocabulary_4';
  $handler->display->display_options['filters']['taxonomy_vocabulary_4_tid']['field'] = 'taxonomy_vocabulary_4_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_4_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_4_tid']['expose']['operator_id'] = 'taxonomy_vocabulary_4_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_4_tid']['expose']['label'] = 'Tags';
  $handler->display->display_options['filters']['taxonomy_vocabulary_4_tid']['expose']['operator'] = 'taxonomy_vocabulary_4_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_4_tid']['expose']['identifier'] = 'taxonomy_vocabulary_4_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_4_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['taxonomy_vocabulary_4_tid']['reduce_duplicates'] = 1;
  $handler->display->display_options['filters']['taxonomy_vocabulary_4_tid']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_vocabulary_4_tid']['vocabulary'] = 'vocabulary_4';
  $handler->display->display_options['filters']['taxonomy_vocabulary_4_tid']['error_message'] = 1;
  $handler->display->display_options['path'] = 'nyheder';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Nyheder';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';

  /* Display: Blok */
  $handler = $view->new_display('block', 'Blok', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Felt: Indhold: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Brødtekst';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '100',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Felt: Indhold: Billede */
  $handler->display->display_options['fields']['field_article_picture']['id'] = 'field_article_picture';
  $handler->display->display_options['fields']['field_article_picture']['table'] = 'field_data_field_article_picture';
  $handler->display->display_options['fields']['field_article_picture']['field'] = 'field_article_picture';
  $handler->display->display_options['fields']['field_article_picture']['label'] = '';
  $handler->display->display_options['fields']['field_article_picture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_article_picture']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_article_picture']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_article_picture']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_article_picture']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_article_picture']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_article_picture']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_article_picture']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_article_picture']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_article_picture']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_article_picture']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_article_picture']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_article_picture']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_article_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_article_picture']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_article_picture']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_article_picture']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_article_picture']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_article_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_article_picture']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_article_picture']['field_api_classes'] = 0;

  /* Display: Frontpage pane */
  $handler = $view->new_display('panel_pane', 'Frontpage pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Seneste nyheder';
  $handler->display->display_options['display_description'] = 'Content pane used for the frontpage';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Sidefod: Global: Tekstområde */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = FALSE;
  $handler->display->display_options['footer']['area']['content'] = '<p><a href="/nyheder">Flere nyheder</a></p>';
  $handler->display->display_options['footer']['area']['format'] = '1';
  $handler->display->display_options['footer']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Billede */
  $handler->display->display_options['fields']['field_article_picture']['id'] = 'field_article_picture';
  $handler->display->display_options['fields']['field_article_picture']['table'] = 'field_data_field_article_picture';
  $handler->display->display_options['fields']['field_article_picture']['field'] = 'field_article_picture';
  $handler->display->display_options['fields']['field_article_picture']['label'] = '';
  $handler->display->display_options['fields']['field_article_picture']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_article_picture']['alter']['text'] = '[field_article_picture]<br><a href="/nyheder">Flere nyheder</a>';
  $handler->display->display_options['fields']['field_article_picture']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_article_picture']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_article_picture']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_article_picture']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_article_picture']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_article_picture']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_article_picture']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_article_picture']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_article_picture']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_article_picture']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_article_picture']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_article_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_article_picture']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_article_picture']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_article_picture']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_article_picture']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_article_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_article_picture']['settings'] = array(
    'image_style' => 'news_frontpage',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_article_picture']['field_api_classes'] = 0;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h4>[title]</h4>';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '35';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['title']['alter']['html'] = 1;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Felt: Indhold: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 1;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '85';
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '135',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'story' => 'story',
  );
  $handler->display->display_options['filters']['type']['group'] = 0;
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;

  /* Display: Archive pane */
  $handler = $view->new_display('panel_pane', 'Archive pane', 'panel_pane_2');
  $handler->display->display_options['display_description'] = 'Content pane used for showing all the stories';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h4>[title]</h4>';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Felt: Indhold: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '250',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Felt: Indhold: Billede */
  $handler->display->display_options['fields']['field_article_picture']['id'] = 'field_article_picture';
  $handler->display->display_options['fields']['field_article_picture']['table'] = 'field_data_field_article_picture';
  $handler->display->display_options['fields']['field_article_picture']['field'] = 'field_article_picture';
  $handler->display->display_options['fields']['field_article_picture']['label'] = '';
  $handler->display->display_options['fields']['field_article_picture']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_article_picture']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_article_picture']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_article_picture']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_article_picture']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_article_picture']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_article_picture']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_article_picture']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_article_picture']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_article_picture']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_article_picture']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_article_picture']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_article_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_article_picture']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_article_picture']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_article_picture']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_article_picture']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_article_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_article_picture']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_article_picture']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'story' => 'story',
  );
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Tags (taxonomy_vocabulary_4) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_4_tid']['id'] = 'taxonomy_vocabulary_4_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_4_tid']['table'] = 'field_data_taxonomy_vocabulary_4';
  $handler->display->display_options['filters']['taxonomy_vocabulary_4_tid']['field'] = 'taxonomy_vocabulary_4_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_4_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_4_tid']['expose']['operator_id'] = 'taxonomy_vocabulary_4_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_4_tid']['expose']['label'] = 'Tags';
  $handler->display->display_options['filters']['taxonomy_vocabulary_4_tid']['expose']['operator'] = 'taxonomy_vocabulary_4_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_4_tid']['expose']['identifier'] = 'taxonomy_vocabulary_4_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_4_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['taxonomy_vocabulary_4_tid']['reduce_duplicates'] = 1;
  $handler->display->display_options['filters']['taxonomy_vocabulary_4_tid']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_vocabulary_4_tid']['vocabulary'] = 'vocabulary_4';
  $handler->display->display_options['filters']['taxonomy_vocabulary_4_tid']['error_message'] = 1;
  $translatables['article_archive'] = array(
    t('Nyhedsarkiv'),
    t('Nyheder'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Elementer pr. side'),
    t('- Alle -'),
    t('Forskydning'),
    t('Tags (taxonomy_vocabulary_4)'),
    t('Side'),
    t('<div style="float:right;">[field_article_picture]</div>'),
    t('<b>[title]</b>'),
    t('Tags'),
    t('Blok'),
    t('Brødtekst'),
    t('Frontpage pane'),
    t('Seneste nyheder'),
    t('Content pane used for the frontpage'),
    t('<p><a href="/nyheder">Flere nyheder</a></p>'),
    t('[field_article_picture]<br><a href="/nyheder">Flere nyheder</a>'),
    t('<h4>[title]</h4>'),
    t('View panes'),
    t('Archive pane'),
    t('Content pane used for showing all the stories'),
  );
  $export['article_archive'] = $view;

  return $export;
}
