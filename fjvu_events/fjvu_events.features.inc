<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function fjvu_events_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function fjvu_events_node_info() {
  $items = array(
    'event' => array(
      'name' => t('Event'),
      'module' => 'features',
      'description' => t('En begivenhed.'),
      'has_title' => '1',
      'title_label' => t('Navn'),
      'has_body' => '1',
      'body_label' => t('Beskrivelse'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function fjvu_events_views_api() {
  return array(
    'api' => '2',
  );
}
