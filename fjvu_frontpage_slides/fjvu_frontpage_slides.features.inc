<?php
/**
 * @file
 * fjvu_frontpage_slides.features.inc
 */

/**
 * Implementation of hook_views_api().
 */
function fjvu_frontpage_slides_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implementation of hook_node_info().
 */
function fjvu_frontpage_slides_node_info() {
  $items = array(
    'frontpage_options' => array(
      'name' => t('Frontpage options'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
