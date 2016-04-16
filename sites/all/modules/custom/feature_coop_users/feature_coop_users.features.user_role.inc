<?php
/**
 * @file
 * feature_coop_users.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function feature_coop_users_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 3,
  );

  return $roles;
}
