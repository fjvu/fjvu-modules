<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function fjvu_stotteordninger_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation:node/add/stoetteordninger
  $menu_links['navigation:node/add/stoetteordninger'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/stoetteordninger',
    'router_path' => 'node/add/stoetteordninger',
    'link_title' => 'Støtteordninger',
    'options' => array(
      'attributes' => array(
        'title' => 'Støtteordningsformen bruges i forbindelse med at opsætte støtteordningssider til hjemmesiden',
      ),
    ),
    'module' => 'system',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Støtteordninger');


  return $menu_links;
}
