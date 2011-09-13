<?php
/**
 * @file
 * fjvu_documents.features.inc
 */

/**
 * Implementation of hook_views_api().
 */
function fjvu_documents_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implementation of hook_node_info().
 */
function fjvu_documents_node_info() {
  $items = array(
    'documents' => array(
      'name' => t('Documents'),
      'base' => 'node_content',
      'description' => t('Form der bruges til at oprette dokumenter til videndatabasen'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  return $items;
}
