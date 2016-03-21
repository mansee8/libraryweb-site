<?php
/**
 * @file
 * uclalib_bookplates.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function uclalib_bookplates_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create bookplates content'.
  $permissions['create bookplates content'] = array(
    'name' => 'create bookplates content',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any bookplates content'.
  $permissions['delete any bookplates content'] = array(
    'name' => 'delete any bookplates content',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own bookplates content'.
  $permissions['delete own bookplates content'] = array(
    'name' => 'delete own bookplates content',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any bookplates content'.
  $permissions['edit any bookplates content'] = array(
    'name' => 'edit any bookplates content',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own bookplates content'.
  $permissions['edit own bookplates content'] = array(
    'name' => 'edit own bookplates content',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'enter bookplates revision log entry'.
  $permissions['enter bookplates revision log entry'] = array(
    'name' => 'enter bookplates revision log entry',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override bookplates authored by option'.
  $permissions['override bookplates authored by option'] = array(
    'name' => 'override bookplates authored by option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override bookplates authored on option'.
  $permissions['override bookplates authored on option'] = array(
    'name' => 'override bookplates authored on option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override bookplates promote to front page option'.
  $permissions['override bookplates promote to front page option'] = array(
    'name' => 'override bookplates promote to front page option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override bookplates published option'.
  $permissions['override bookplates published option'] = array(
    'name' => 'override bookplates published option',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override bookplates revision option'.
  $permissions['override bookplates revision option'] = array(
    'name' => 'override bookplates revision option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override bookplates sticky option'.
  $permissions['override bookplates sticky option'] = array(
    'name' => 'override bookplates sticky option',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'view any unpublished bookplates content'.
  $permissions['view any unpublished bookplates content'] = array(
    'name' => 'view any unpublished bookplates content',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'view_unpublished',
  );

  return $permissions;
}
