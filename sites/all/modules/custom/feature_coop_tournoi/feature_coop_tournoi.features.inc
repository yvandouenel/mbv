<?php
/**
 * @file
 * feature_coop_tournoi.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_coop_tournoi_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function feature_coop_tournoi_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function feature_coop_tournoi_node_info() {
  $items = array(
    'liste_tournois' => array(
      'name' => t('Liste tournois'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'tournoi_four' => array(
      'name' => t('Tournoi 4x4'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'tournoi_three' => array(
      'name' => t('Tournoi 3x3'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'tournoi_two' => array(
      'name' => t('Tournoi 2x2'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_default_registration_state().
 */
function feature_coop_tournoi_default_registration_state() {
  $items = array();
  $items['held'] = entity_import('registration_state', '{
    "name" : "held",
    "label" : "Held",
    "description" : "Registration is held.",
    "default_state" : "0",
    "active" : "0",
    "held" : "1",
    "show_on_form" : "0",
    "weight" : "1",
    "rdf_mapping" : []
  }');
  $items['pending'] = entity_import('registration_state', '{
    "name" : "pending",
    "label" : "Pending",
    "description" : "Registration is pending.",
    "default_state" : "0",
    "active" : "0",
    "held" : "0",
    "show_on_form" : "0",
    "weight" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_registration_type().
 */
function feature_coop_tournoi_default_registration_type() {
  $items = array();
  $items['tournoi_four'] = entity_import('registration_type', '{
    "name" : "tournoi_four",
    "label" : "Tournoi 4x4",
    "locked" : "0",
    "default_state" : "held",
    "data" : null,
    "weight" : "0",
    "rdf_mapping" : []
  }');
  $items['tournoi_three_registration'] = entity_import('registration_type', '{
    "name" : "tournoi_three_registration",
    "label" : "Tournoi 3x3",
    "locked" : "0",
    "default_state" : "held",
    "data" : null,
    "weight" : "0",
    "rdf_mapping" : []
  }');
  $items['tournoi_two_registration'] = entity_import('registration_type', '{
    "name" : "tournoi_two_registration",
    "label" : "Tournoi 2x2",
    "locked" : "0",
    "default_state" : "held",
    "data" : null,
    "weight" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}
