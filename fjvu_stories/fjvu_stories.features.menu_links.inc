<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function fjvu_stories_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation:nyheder
  $menu_links['navigation:nyheder'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'nyheder',
    'router_path' => 'nyheder',
    'link_title' => 'Nyheder',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Nyheder');


  return $menu_links;
}
