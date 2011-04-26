<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function fjvu_documents_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation:documents
  $menu_links['navigation:documents'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'documents',
    'router_path' => 'documents',
    'link_title' => 'Videndatabase',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Videndatabase');


  return $menu_links;
}
