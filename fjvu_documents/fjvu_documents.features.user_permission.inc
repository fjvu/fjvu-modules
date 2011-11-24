<?php
/**
 * @file
 * fjvu_documents.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function fjvu_documents_user_default_permissions() {
  $permissions = array();

  // Exported permission: create documents content
  $permissions['create documents content'] = array(
    'name' => 'create documents content',
    'roles' => array(
      0 => 'administrator',
      1 => 'redaktør',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any documents content
  $permissions['delete any documents content'] = array(
    'name' => 'delete any documents content',
    'roles' => array(
      0 => 'administrator',
      1 => 'redaktør',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own documents content
  $permissions['delete own documents content'] = array(
    'name' => 'delete own documents content',
    'roles' => array(
      0 => 'administrator',
      1 => 'redaktør',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any documents content
  $permissions['edit any documents content'] = array(
    'name' => 'edit any documents content',
    'roles' => array(
      0 => 'administrator',
      1 => 'redaktør',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own documents content
  $permissions['edit own documents content'] = array(
    'name' => 'edit own documents content',
    'roles' => array(
      0 => 'administrator',
      1 => 'redaktør',
    ),
    'module' => 'node',
  );

  return $permissions;
}
