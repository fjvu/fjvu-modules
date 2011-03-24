<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function fjvu_stories_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function fjvu_stories_node_info() {
  $items = array(
    'story' => array(
      'name' => t('Artikel'),
      'module' => 'features',
      'description' => t('Artikelformen er velegnet til nyheder, opslag, blogs og lignende. Artikelformen vises som standard på forsiden, og det er muligt for brugerne at skrive kommentarer til opslaget. '),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'has_body' => '1',
      'body_label' => t('Brødtekst'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function fjvu_stories_views_api() {
  return array(
    'api' => '2',
  );
}
