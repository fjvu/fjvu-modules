<?php
/**
 * @file
 * fjvu_frontpage_slides.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function fjvu_frontpage_slides_user_default_permissions() {
  $permissions = array();

  // Exported permission: create frontpage_options content
  $permissions['create frontpage_options content'] = array(
    'name' => 'create frontpage_options content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any frontpage_options content
  $permissions['delete any frontpage_options content'] = array(
    'name' => 'delete any frontpage_options content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own frontpage_options content
  $permissions['delete own frontpage_options content'] = array(
    'name' => 'delete own frontpage_options content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any frontpage_options content
  $permissions['edit any frontpage_options content'] = array(
    'name' => 'edit any frontpage_options content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own frontpage_options content
  $permissions['edit own frontpage_options content'] = array(
    'name' => 'edit own frontpage_options content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
