<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function fjvu_stotteordninger_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function fjvu_stotteordninger_node_info() {
  $items = array(
    'stoetteordninger' => array(
      'name' => t('Støtteordninger'),
      'module' => 'features',
      'description' => t('Støtteordningsformen bruges i forbindelse med at opsætte støtteordningssider til hjemmesiden'),
      'has_title' => '1',
      'title_label' => t('Støtteordning'),
      'has_body' => '1',
      'body_label' => t('Beskriv støtteordningens formål og hvad den støtter'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
