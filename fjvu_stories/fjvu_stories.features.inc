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
      'description' => t('En <em>artikel</em>, som minder om en <em>side</em>, gør det nemt at oprette og vise indhold, der informerer eller engagerer sitets besøgende. Pressemeddelelser, opslag og blog-lignende indlæg kan alle oprettes som <em>artikler</em>. Som standard vises <em>artikler</em> på sitets forside, og det er muligt for brugerne at skrive kommentarer.'),
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
