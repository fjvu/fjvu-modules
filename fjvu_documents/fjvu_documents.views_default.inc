<?php
/**
 * @file
 * fjvu_documents.views_default.inc
 */

/**
 * Implementation of hook_views_default_views().
 */
function fjvu_documents_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'documents_list';
  $view->description = 'Documents list';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Videndatabase';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'input_required';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = 0;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = 1;
  $handler->display->display_options['exposed_form']['options']['text_input_required'] = 'Brug søgekriterierne til venstre.';
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = '1';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementer pr. side';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'body' => 'title',
    'field_documents_year' => 'field_documents_year',
    'taxonomy_vocabulary_6' => 'taxonomy_vocabulary_6',
  );
  $handler->display->display_options['style_options']['default'] = 'field_documents_year';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
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
    'field_documents_year' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
    ),
    'taxonomy_vocabulary_6' => array(
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 1;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'Den valgte søgning gav ingen resultater.';
  $handler->display->display_options['empty']['area']['format'] = '1';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title] ([field_documents_year])';
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
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
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
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Felt: Indhold: Årstal */
  $handler->display->display_options['fields']['field_documents_year']['id'] = 'field_documents_year';
  $handler->display->display_options['fields']['field_documents_year']['table'] = 'field_data_field_documents_year';
  $handler->display->display_options['fields']['field_documents_year']['field'] = 'field_documents_year';
  $handler->display->display_options['fields']['field_documents_year']['label'] = 'År';
  $handler->display->display_options['fields']['field_documents_year']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_documents_year']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_documents_year']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_documents_year']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_documents_year']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_documents_year']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_documents_year']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_documents_year']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_documents_year']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_documents_year']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_documents_year']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_documents_year']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_documents_year']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_documents_year']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_documents_year']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_documents_year']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_documents_year']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_documents_year']['settings'] = array(
    'format_type' => 'year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_documents_year']['field_api_classes'] = 0;
  /* Felt: Indhold: Forfattere */
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['id'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['table'] = 'field_data_taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['field'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['alter']['external'] = 0;
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['alter']['html'] = 0;
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['hide_empty'] = 0;
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['empty_zero'] = 0;
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['group_rows'] = 1;
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['delta_offset'] = '0';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['field_api_classes'] = 0;
  /* Sorteringskriterie: Indhold: Titel */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Indhold: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['exception']['title_enable'] = 1;
  $handler->display->display_options['arguments']['tid']['exception']['title'] = 'All';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['tid']['add_table'] = 0;
  $handler->display->display_options['arguments']['tid']['require_value'] = 0;
  $handler->display->display_options['arguments']['tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['arguments']['tid']['set_breadcrumb'] = 0;
  /* Filter criterion: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'documents' => 'documents',
  );
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');

  /* Display: Side */
  $handler = $view->new_display('page', 'Side', 'page_1');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Overskrift: Global: Text area */
  $handler->display->display_options['header']['text']['id'] = 'area';
  $handler->display->display_options['header']['text']['table'] = 'views';
  $handler->display->display_options['header']['text']['field'] = 'area';
  $handler->display->display_options['header']['text']['empty'] = TRUE;
  $handler->display->display_options['header']['text']['content'] = '<p>Videndatabasen indeholder rapporter, artikler, links og henvisninger til kontaktpersoner og øvrige ressourcer. Pt. indeholder videndatabasen over 200 dokumenter.</p>
';
  $handler->display->display_options['header']['text']['format'] = '1';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'documents' => 'documents',
  );
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Søg: Søgeord */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['operator'] = 'required';
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Søg i videndatabasen';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  /* Filter criterion: Indhold: År (taxonomy_vocabulary_8) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_8_tid']['id'] = 'taxonomy_vocabulary_8_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_8_tid']['table'] = 'field_data_taxonomy_vocabulary_8';
  $handler->display->display_options['filters']['taxonomy_vocabulary_8_tid']['field'] = 'taxonomy_vocabulary_8_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_8_tid']['value'] = '';
  $handler->display->display_options['filters']['taxonomy_vocabulary_8_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_8_tid']['expose']['operator_id'] = 'taxonomy_vocabulary_8_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_8_tid']['expose']['label'] = 'År';
  $handler->display->display_options['filters']['taxonomy_vocabulary_8_tid']['expose']['operator'] = 'taxonomy_vocabulary_8_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_8_tid']['expose']['identifier'] = 'taxonomy_vocabulary_8_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_8_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['taxonomy_vocabulary_8_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['taxonomy_vocabulary_8_tid']['vocabulary'] = 'vocabulary_8';
  $handler->display->display_options['filters']['taxonomy_vocabulary_8_tid']['error_message'] = 1;
  /* Filter criterion: Indhold: Kilde (taxonomy_vocabulary_7) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_7_tid']['id'] = 'taxonomy_vocabulary_7_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_7_tid']['table'] = 'field_data_taxonomy_vocabulary_7';
  $handler->display->display_options['filters']['taxonomy_vocabulary_7_tid']['field'] = 'taxonomy_vocabulary_7_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_7_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_7_tid']['expose']['operator_id'] = 'taxonomy_vocabulary_7_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_7_tid']['expose']['label'] = 'Kilde';
  $handler->display->display_options['filters']['taxonomy_vocabulary_7_tid']['expose']['operator'] = 'taxonomy_vocabulary_7_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_7_tid']['expose']['identifier'] = 'taxonomy_vocabulary_7_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_7_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['taxonomy_vocabulary_7_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['taxonomy_vocabulary_7_tid']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_vocabulary_7_tid']['vocabulary'] = 'vocabulary_7';
  $handler->display->display_options['filters']['taxonomy_vocabulary_7_tid']['error_message'] = 1;
  $handler->display->display_options['path'] = 'documents';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Videndatabase';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $translatables['documents_list'] = array(
    t('Defaults'),
    t('Videndatabase'),
    t('more'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Asc'),
    t('Desc'),
    t('Brug søgekriterierne til venstre.'),
    t('Elementer pr. side'),
    t('- All -'),
    t('Forskydning'),
    t('Den valgte søgning gav ingen resultater.'),
    t('Titel'),
    t('[title] ([field_documents_year])'),
    t('År'),
    t('Forfattere'),
    t('All'),
    t('Block'),
    t('Side'),
    t('<p>Videndatabasen indeholder rapporter, artikler, links og henvisninger til kontaktpersoner og øvrige ressourcer. Pt. indeholder videndatabasen over 200 dokumenter.</p>
'),
    t('Søg i videndatabasen'),
    t('Kilde'),
  );
  $export['documents_list'] = $view;

  return $export;
}
