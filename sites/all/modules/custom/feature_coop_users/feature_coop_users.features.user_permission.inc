<?php
/**
 * @file
 * feature_coop_users.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function feature_coop_users_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'Modérateur' => 'Modérateur',
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access all webform results'.
  $permissions['access all webform results'] = array(
    'name' => 'access all webform results',
    'roles' => array(
      'Modérateur' => 'Modérateur',
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access bean overview'.
  $permissions['access bean overview'] = array(
    'name' => 'access bean overview',
    'roles' => array(
      'Modérateur' => 'Modérateur',
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access draggableviews'.
  $permissions['access draggableviews'] = array(
    'name' => 'access draggableviews',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'draggableviews',
  );

  // Exported permission: 'access own webform results'.
  $permissions['access own webform results'] = array(
    'name' => 'access own webform results',
    'roles' => array(
      'Modérateur' => 'Modérateur',
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access own webform submissions'.
  $permissions['access own webform submissions'] = array(
    'name' => 'access own webform submissions',
    'roles' => array(
      'Modérateur' => 'Modérateur',
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'Modérateur' => 'Modérateur',
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer bean types'.
  $permissions['administer bean types'] = array(
    'name' => 'administer bean types',
    'roles' => array(
      'Modérateur' => 'Modérateur',
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'administer beans'.
  $permissions['administer beans'] = array(
    'name' => 'administer beans',
    'roles' => array(
      'Modérateur' => 'Modérateur',
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'Modérateur' => 'Modérateur',
      'administrator' => 'administrator',
    ),
    'module' => 'block',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'Modérateur' => 'Modérateur',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer flickr'.
  $permissions['administer flickr'] = array(
    'name' => 'administer flickr',
    'roles' => array(
      'Modérateur' => 'Modérateur',
      'administrator' => 'administrator',
    ),
    'module' => 'flickr',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'Modérateur' => 'Modérateur',
      'administrator' => 'administrator',
    ),
    'module' => 'menu',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'Modérateur' => 'Modérateur',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer own tournoi_four registration'.
  $permissions['administer own tournoi_four registration'] = array(
    'name' => 'administer own tournoi_four registration',
    'roles' => array(
      'Modérateur' => 'Modérateur',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'administer own tournoi_three_registration registration'.
  $permissions['administer own tournoi_three_registration registration'] = array(
    'name' => 'administer own tournoi_three_registration registration',
    'roles' => array(
      'Modérateur' => 'Modérateur',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'administer own tournoi_two_registration registration'.
  $permissions['administer own tournoi_two_registration registration'] = array(
    'name' => 'administer own tournoi_two_registration registration',
    'roles' => array(
      'Modérateur' => 'Modérateur',
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'Modérateur' => 'Modérateur',
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer registration'.
  $permissions['administer registration'] = array(
    'name' => 'administer registration',
    'roles' => array(
      'Modérateur' => 'Modérateur',
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'administer registration states'.
  $permissions['administer registration states'] = array(
    'name' => 'administer registration states',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'administer registration types'.
  $permissions['administer registration types'] = array(
    'name' => 'administer registration types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'Modérateur' => 'Modérateur',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer tournoi_four registration'.
  $permissions['administer tournoi_four registration'] = array(
    'name' => 'administer tournoi_four registration',
    'roles' => array(
      'Modérateur' => 'Modérateur',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'administer tournoi_three_registration registration'.
  $permissions['administer tournoi_three_registration registration'] = array(
    'name' => 'administer tournoi_three_registration registration',
    'roles' => array(
      'Modérateur' => 'Modérateur',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'administer tournoi_two_registration registration'.
  $permissions['administer tournoi_two_registration registration'] = array(
    'name' => 'administer tournoi_two_registration registration',
    'roles' => array(
      'Modérateur' => 'Modérateur',
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'administer url aliases'.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'Modérateur' => 'Modérateur',
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'Modérateur' => 'Modérateur',
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'block IP addresses'.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'Modérateur' => 'Modérateur',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create tournoi_four registration'.
  $permissions['create tournoi_four registration'] = array(
    'name' => 'create tournoi_four registration',
    'roles' => array(
      'Modérateur' => 'Modérateur',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create tournoi_four registration other anonymous'.
  $permissions['create tournoi_four registration other anonymous'] = array(
    'name' => 'create tournoi_four registration other anonymous',
    'roles' => array(
      'Modérateur' => 'Modérateur',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create tournoi_four registration other users'.
  $permissions['create tournoi_four registration other users'] = array(
    'name' => 'create tournoi_four registration other users',
    'roles' => array(
      'Modérateur' => 'Modérateur',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create tournoi_four registration self'.
  $permissions['create tournoi_four registration self'] = array(
    'name' => 'create tournoi_four registration self',
    'roles' => array(
      'Modérateur' => 'Modérateur',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create tournoi_three_registration registration'.
  $permissions['create tournoi_three_registration registration'] = array(
    'name' => 'create tournoi_three_registration registration',
    'roles' => array(
      'Modérateur' => 'Modérateur',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create tournoi_three_registration registration other anonymous'.
  $permissions['create tournoi_three_registration registration other anonymous'] = array(
    'name' => 'create tournoi_three_registration registration other anonymous',
    'roles' => array(
      'Modérateur' => 'Modérateur',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create tournoi_three_registration registration other users'.
  $permissions['create tournoi_three_registration registration other users'] = array(
    'name' => 'create tournoi_three_registration registration other users',
    'roles' => array(
      'Modérateur' => 'Modérateur',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create tournoi_three_registration registration self'.
  $permissions['create tournoi_three_registration registration self'] = array(
    'name' => 'create tournoi_three_registration registration self',
    'roles' => array(
      'Modérateur' => 'Modérateur',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create tournoi_two_registration registration'.
  $permissions['create tournoi_two_registration registration'] = array(
    'name' => 'create tournoi_two_registration registration',
    'roles' => array(
      'Modérateur' => 'Modérateur',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create tournoi_two_registration registration other anonymous'.
  $permissions['create tournoi_two_registration registration other anonymous'] = array(
    'name' => 'create tournoi_two_registration registration other anonymous',
    'roles' => array(
      'Modérateur' => 'Modérateur',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create tournoi_two_registration registration other users'.
  $permissions['create tournoi_two_registration registration other users'] = array(
    'name' => 'create tournoi_two_registration registration other users',
    'roles' => array(
      'Modérateur' => 'Modérateur',
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create tournoi_two_registration registration self'.
  $permissions['create tournoi_two_registration registration self'] = array(
    'name' => 'create tournoi_two_registration registration self',
    'roles' => array(
      'Modérateur' => 'Modérateur',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'Modérateur' => 'Modérateur',
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'delete all webform submissions'.
  $permissions['delete all webform submissions'] = array(
    'name' => 'delete all webform submissions',
    'roles' => array(
      'Modérateur' => 'Modérateur',
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'delete any tournoi_four registration'.
  $permissions['delete any tournoi_four registration'] = array(
    'name' => 'delete any tournoi_four registration',
    'roles' => array(
      'Modérateur' => 'Modérateur',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'delete any tournoi_three_registration registration'.
  $permissions['delete any tournoi_three_registration registration'] = array(
    'name' => 'delete any tournoi_three_registration registration',
    'roles' => array(
      'Modérateur' => 'Modérateur',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'delete any tournoi_two_registration registration'.
  $permissions['delete any tournoi_two_registration registration'] = array(
    'name' => 'delete any tournoi_two_registration registration',
    'roles' => array(
      'Modérateur' => 'Modérateur',
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'delete own tournoi_four registration'.
  $permissions['delete own tournoi_four registration'] = array(
    'name' => 'delete own tournoi_four registration',
    'roles' => array(
      'Modérateur' => 'Modérateur',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'delete own tournoi_three_registration registration'.
  $permissions['delete own tournoi_three_registration registration'] = array(
    'name' => 'delete own tournoi_three_registration registration',
    'roles' => array(
      'Modérateur' => 'Modérateur',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'delete own tournoi_two_registration registration'.
  $permissions['delete own tournoi_two_registration registration'] = array(
    'name' => 'delete own tournoi_two_registration registration',
    'roles' => array(
      'Modérateur' => 'Modérateur',
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'delete own webform submissions'.
  $permissions['delete own webform submissions'] = array(
    'name' => 'delete own webform submissions',
    'roles' => array(
      'Modérateur' => 'Modérateur',
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'delete terms in tags'.
  $permissions['delete terms in tags'] = array(
    'name' => 'delete terms in tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in type_de_tournoi'.
  $permissions['delete terms in type_de_tournoi'] = array(
    'name' => 'delete terms in type_de_tournoi',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'display drupal links'.
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'edit all webform submissions'.
  $permissions['edit all webform submissions'] = array(
    'name' => 'edit all webform submissions',
    'roles' => array(
      'Modérateur' => 'Modérateur',
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'edit bean view mode'.
  $permissions['edit bean view mode'] = array(
    'name' => 'edit bean view mode',
    'roles' => array(
      'Modérateur' => 'Modérateur',
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit own webform submissions'.
  $permissions['edit own webform submissions'] = array(
    'name' => 'edit own webform submissions',
    'roles' => array(
      'Modérateur' => 'Modérateur',
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'edit terms in tags'.
  $permissions['edit terms in tags'] = array(
    'name' => 'edit terms in tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in type_de_tournoi'.
  $permissions['edit terms in type_de_tournoi'] = array(
    'name' => 'edit terms in type_de_tournoi',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit tournoi_four registration state'.
  $permissions['edit tournoi_four registration state'] = array(
    'name' => 'edit tournoi_four registration state',
    'roles' => array(
      'Modérateur' => 'Modérateur',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'edit tournoi_three_registration registration state'.
  $permissions['edit tournoi_three_registration registration state'] = array(
    'name' => 'edit tournoi_three_registration registration state',
    'roles' => array(
      'Modérateur' => 'Modérateur',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'edit tournoi_two_registration registration state'.
  $permissions['edit tournoi_two_registration registration state'] = array(
    'name' => 'edit tournoi_two_registration registration state',
    'roles' => array(
      'Modérateur' => 'Modérateur',
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'edit webform components'.
  $permissions['edit webform components'] = array(
    'name' => 'edit webform components',
    'roles' => array(
      'Modérateur' => 'Modérateur',
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'flush caches'.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      'Modérateur' => 'Modérateur',
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'search content'.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'Modérateur' => 'Modérateur',
      'administrator' => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'translate interface'.
  $permissions['translate interface'] = array(
    'name' => 'translate interface',
    'roles' => array(
      'Modérateur' => 'Modérateur',
      'administrator' => 'administrator',
    ),
    'module' => 'locale',
  );

  // Exported permission: 'update any tournoi_four registration'.
  $permissions['update any tournoi_four registration'] = array(
    'name' => 'update any tournoi_four registration',
    'roles' => array(
      'Modérateur' => 'Modérateur',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'update any tournoi_three_registration registration'.
  $permissions['update any tournoi_three_registration registration'] = array(
    'name' => 'update any tournoi_three_registration registration',
    'roles' => array(
      'Modérateur' => 'Modérateur',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'update any tournoi_two_registration registration'.
  $permissions['update any tournoi_two_registration registration'] = array(
    'name' => 'update any tournoi_two_registration registration',
    'roles' => array(
      'Modérateur' => 'Modérateur',
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'update own tournoi_four registration'.
  $permissions['update own tournoi_four registration'] = array(
    'name' => 'update own tournoi_four registration',
    'roles' => array(
      'Modérateur' => 'Modérateur',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'update own tournoi_three_registration registration'.
  $permissions['update own tournoi_three_registration registration'] = array(
    'name' => 'update own tournoi_three_registration registration',
    'roles' => array(
      'Modérateur' => 'Modérateur',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'update own tournoi_two_registration registration'.
  $permissions['update own tournoi_two_registration registration'] = array(
    'name' => 'update own tournoi_two_registration registration',
    'roles' => array(
      'Modérateur' => 'Modérateur',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'view all flickr photos'.
  $permissions['view all flickr photos'] = array(
    'name' => 'view all flickr photos',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'flickr',
  );

  // Exported permission: 'view own flickr photos'.
  $permissions['view own flickr photos'] = array(
    'name' => 'view own flickr photos',
    'roles' => array(
      'Modérateur' => 'Modérateur',
      'administrator' => 'administrator',
    ),
    'module' => 'flickr',
  );

  // Exported permission: 'view own tournoi_four registration'.
  $permissions['view own tournoi_four registration'] = array(
    'name' => 'view own tournoi_four registration',
    'roles' => array(
      'Modérateur' => 'Modérateur',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'view own tournoi_three_registration registration'.
  $permissions['view own tournoi_three_registration registration'] = array(
    'name' => 'view own tournoi_three_registration registration',
    'roles' => array(
      'Modérateur' => 'Modérateur',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'view own tournoi_two_registration registration'.
  $permissions['view own tournoi_two_registration registration'] = array(
    'name' => 'view own tournoi_two_registration registration',
    'roles' => array(
      'Modérateur' => 'Modérateur',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view tournoi_four registration'.
  $permissions['view tournoi_four registration'] = array(
    'name' => 'view tournoi_four registration',
    'roles' => array(
      'Modérateur' => 'Modérateur',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'view tournoi_three_registration registration'.
  $permissions['view tournoi_three_registration registration'] = array(
    'name' => 'view tournoi_three_registration registration',
    'roles' => array(
      'Modérateur' => 'Modérateur',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'view tournoi_two_registration registration'.
  $permissions['view tournoi_two_registration registration'] = array(
    'name' => 'view tournoi_two_registration registration',
    'roles' => array(
      'Modérateur' => 'Modérateur',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'registration',
  );

  return $permissions;
}
