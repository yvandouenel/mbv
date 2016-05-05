<?php
/**
 * @file
 * feature_coop_tournoi.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function feature_coop_tournoi_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|tournoi_three|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'tournoi_three';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
      ),
    ),
  );
  $export['node|tournoi_three|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|tournoi_two|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'tournoi_two';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
      ),
    ),
  );
  $export['node|tournoi_two|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function feature_coop_tournoi_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|tournoi_two|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'tournoi_two';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'body',
        1 => 'field_date',
        2 => 'field_type_de_tournoi',
        3 => 'field_galerie_photo',
        4 => 'field_inscription',
        5 => 'field_image_tournament',
      ),
    ),
    'fields' => array(
      'body' => 'ds_content',
      'field_date' => 'ds_content',
      'field_type_de_tournoi' => 'ds_content',
      'field_galerie_photo' => 'ds_content',
      'field_inscription' => 'ds_content',
      'field_image_tournament' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|tournoi_two|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|tournoi_two|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'tournoi_two';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'bootstrap_7_5';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_date',
        1 => 'body',
        2 => 'field_type_de_tournoi',
        3 => 'field_galerie_photo',
        4 => 'field_image_tournament',
      ),
      'right' => array(
        5 => 'field_inscription',
        6 => 'extra_field_inscrits',
      ),
    ),
    'fields' => array(
      'field_date' => 'left',
      'body' => 'left',
      'field_type_de_tournoi' => 'left',
      'field_galerie_photo' => 'left',
      'field_image_tournament' => 'left',
      'field_inscription' => 'right',
      'extra_field_inscrits' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|tournoi_two|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|tournoi_two|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'tournoi_two';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'bootstrap_7_5';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'title',
        1 => 'field_date',
        2 => 'body',
      ),
      'right' => array(
        3 => 'field_inscription',
      ),
    ),
    'fields' => array(
      'title' => 'left',
      'field_date' => 'left',
      'body' => 'left',
      'field_inscription' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|tournoi_two|teaser'] = $ds_layout;

  return $export;
}
