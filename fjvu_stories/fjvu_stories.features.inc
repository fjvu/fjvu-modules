<?php
/**
 * @file
 * fjvu_stories.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fjvu_stories_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function fjvu_stories_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_node_info().
 */
function fjvu_stories_node_info() {
  $items = array(
    'story' => array(
      'name' => t('Artikel'),
      'base' => 'node_content',
      'description' => t('Artikelformen er velegnet til nyheder, opslag, blogs og lignende. Artikelformen vises som standard på forsiden, og det er muligt for brugerne at skrive kommentarer til opslaget. '),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  return $items;
}
