<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function fjvu_documents_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function fjvu_documents_node_info() {
  $items = array(
    'documents' => array(
      'name' => t('Documents'),
      'module' => 'features',
      'description' => t('Form der bruges til at oprette dokumenter til videndatabasen'),
      'has_title' => '1',
      'title_label' => t('Titel på dokument'),
      'has_body' => '1',
      'body_label' => t('Kort beskrivelse af indholdet'),
      'min_word_count' => '0',
      'help' => t('<p>Udfyld felterne og tryk p&aring; gem nederst</p>'),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function fjvu_documents_views_api() {
  return array(
    'api' => '2',
  );
}
