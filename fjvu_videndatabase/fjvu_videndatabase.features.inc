<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function fjvu_videndatabase_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function fjvu_videndatabase_node_info() {
  $items = array(
    'videndatabase' => array(
      'name' => t('Videndatabase'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titel på dokument'),
      'has_body' => '1',
      'body_label' => t('Kort beskrivelse af indholdet'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
