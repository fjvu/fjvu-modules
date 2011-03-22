<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function fjvu_stotteordninger_user_default_permissions() {
  $permissions = array();

  // Exported permission: create stoetteordninger content
  $permissions['create stoetteordninger content'] = array(
    'name' => 'create stoetteordninger content',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: delete any stoetteordninger content
  $permissions['delete any stoetteordninger content'] = array(
    'name' => 'delete any stoetteordninger content',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: delete own stoetteordninger content
  $permissions['delete own stoetteordninger content'] = array(
    'name' => 'delete own stoetteordninger content',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: edit any stoetteordninger content
  $permissions['edit any stoetteordninger content'] = array(
    'name' => 'edit any stoetteordninger content',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: edit own stoetteordninger content
  $permissions['edit own stoetteordninger content'] = array(
    'name' => 'edit own stoetteordninger content',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  return $permissions;
}
