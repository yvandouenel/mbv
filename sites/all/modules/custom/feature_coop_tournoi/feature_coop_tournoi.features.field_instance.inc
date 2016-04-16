<?php
/**
 * @file
 * feature_coop_tournoi.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function feature_coop_tournoi_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-tournoi_four-body'.
  $field_instances['node-tournoi_four-body'] = array(
    'bundle' => 'tournoi_four',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => -4,
    ),
  );

  // Exported field_instance: 'node-tournoi_four-field_date'.
  $field_instances['node-tournoi_four-field_date'] = array(
    'bundle' => 'tournoi_four',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'short',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => 0,
        ),
        'type' => 'date_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'short',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => 0,
        ),
        'type' => 'date_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_date',
    'label' => 'Date',
    'required' => 1,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => -2,
    ),
  );

  // Exported field_instance: 'node-tournoi_four-field_inscription'.
  $field_instances['node-tournoi_four-field_inscription'] = array(
    'bundle' => 'tournoi_four',
    'default_value' => array(
      0 => array(
        'registration_type' => 'tournoi_four',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'registration',
        'settings' => array(
          'i18n_string_key' => NULL,
          'label' => NULL,
        ),
        'type' => 'registration_link',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'registration',
        'settings' => array(
          'i18n_string_key' => 'node:tournoi_four:full:field_inscription',
          'label' => 'J\'inscris mon équie',
        ),
        'type' => 'registration_link',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'registration',
        'settings' => array(
          'i18n_string_key' => 'node:tournoi_four:teaser:field_inscription',
          'label' => 'J\'inscris mon équipe',
        ),
        'type' => 'registration_link',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_inscription',
    'label' => 'Inscription',
    'required' => 0,
    'settings' => array(
      'default_registration_settings' => array(
        'capacity' => 0,
        'reminder' => array(
          'reminder_settings' => array(
            'reminder_date' => NULL,
            'reminder_template' => '',
          ),
          'send_reminder' => 0,
        ),
        'scheduling' => array(
          'close' => NULL,
          'open' => NULL,
        ),
        'settings' => array(
          'confirmation' => 'Registration has been saved.',
          'confirmation_redirect' => '',
          'from_address' => 'y.douenel@coopernet.fr',
          'maximum_spaces' => 1,
          'multiple_registrations' => 0,
        ),
        'status' => 0,
      ),
      'hide_register_tab' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'registration',
      'settings' => array(),
      'type' => 'registration_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-tournoi_four-field_type_de_tournoi'.
  $field_instances['node-tournoi_four-field_type_de_tournoi'] = array(
    'bundle' => 'tournoi_four',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_type_de_tournoi',
    'label' => 'Type de tournoi',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'node-tournoi_three-body'.
  $field_instances['node-tournoi_three-body'] = array(
    'bundle' => 'tournoi_three',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => -4,
    ),
  );

  // Exported field_instance: 'node-tournoi_three-field_date'.
  $field_instances['node-tournoi_three-field_date'] = array(
    'bundle' => 'tournoi_three',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'short',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => 0,
        ),
        'type' => 'date_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_date',
    'label' => 'Date',
    'required' => 1,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => -2,
    ),
  );

  // Exported field_instance: 'node-tournoi_three-field_inscription'.
  $field_instances['node-tournoi_three-field_inscription'] = array(
    'bundle' => 'tournoi_three',
    'default_value' => array(
      0 => array(
        'registration_type' => 'tournoi_three_registration',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'registration',
        'settings' => array(
          'i18n_string_key' => NULL,
          'label' => NULL,
        ),
        'type' => 'registration_link',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'registration',
        'settings' => array(
          'i18n_string_key' => NULL,
          'label' => NULL,
        ),
        'type' => 'registration_link',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'registration',
        'settings' => array(
          'i18n_string_key' => 'node:tournoi_three:teaser:field_inscription',
          'label' => 'J\'inscris mon équipe',
        ),
        'type' => 'registration_link',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_inscription',
    'label' => 'Inscription',
    'required' => 0,
    'settings' => array(
      'default_registration_settings' => array(
        'capacity' => 0,
        'reminder' => array(
          'reminder_settings' => array(
            'reminder_date' => NULL,
            'reminder_template' => '',
          ),
          'send_reminder' => 0,
        ),
        'scheduling' => array(
          'close' => NULL,
          'open' => NULL,
        ),
        'settings' => array(
          'confirmation' => 'Registration has been saved.',
          'confirmation_redirect' => '',
          'from_address' => 'y.douenel@coopernet.fr',
          'maximum_spaces' => 1,
          'multiple_registrations' => 0,
        ),
        'status' => 0,
      ),
      'hide_register_tab' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'registration',
      'settings' => array(),
      'type' => 'registration_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-tournoi_three-field_type_de_tournoi'.
  $field_instances['node-tournoi_three-field_type_de_tournoi'] = array(
    'bundle' => 'tournoi_three',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_type_de_tournoi',
    'label' => 'Type de tournoi',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'node-tournoi_two-body'.
  $field_instances['node-tournoi_two-body'] = array(
    'bundle' => 'tournoi_two',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-tournoi_two-field_date'.
  $field_instances['node-tournoi_two-field_date'] = array(
    'bundle' => 'tournoi_two',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'short',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => 0,
        ),
        'type' => 'date_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_date',
    'label' => 'Date',
    'required' => 1,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'Y/m/d - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-tournoi_two-field_galerie_photo'.
  $field_instances['node-tournoi_two-field_galerie_photo'] = array(
    'bundle' => 'tournoi_two',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'flickrfield',
        'settings' => array(),
        'type' => 's',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'flickrfield',
        'settings' => array(),
        'type' => 's',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_galerie_photo',
    'label' => 'Galerie photo',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'flickrfield',
      'settings' => array(),
      'type' => 'flickrfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-tournoi_two-field_inscription'.
  $field_instances['node-tournoi_two-field_inscription'] = array(
    'bundle' => 'tournoi_two',
    'default_value' => array(
      0 => array(
        'registration_type' => 'tournoi_two_registration',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'registration',
        'settings' => array(
          'i18n_string_key' => NULL,
          'label' => NULL,
        ),
        'type' => 'registration_link',
        'weight' => 4,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'registration',
        'settings' => array(
          'i18n_string_key' => 'node:tournoi_two:full:field_inscription',
          'label' => 'J\'inscris mon équipe',
        ),
        'type' => 'registration_link',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'registration',
        'settings' => array(
          'i18n_string_key' => 'node:tournoi_two:teaser:field_inscription',
          'label' => 'J\'inscris mon équipe',
        ),
        'type' => 'registration_link',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_inscription',
    'label' => 'Inscription',
    'required' => 0,
    'settings' => array(
      'default_registration_settings' => array(
        'capacity' => 0,
        'reminder' => array(
          'reminder_settings' => array(
            'reminder_date' => NULL,
            'reminder_template' => '',
          ),
          'send_reminder' => 0,
        ),
        'scheduling' => array(
          'close' => NULL,
          'open' => NULL,
        ),
        'settings' => array(
          'confirmation' => 'Registration has been saved.',
          'confirmation_redirect' => '',
          'from_address' => 'montpellier.beachvolley@gmail.com',
          'maximum_spaces' => 1,
          'multiple_registrations' => 0,
        ),
        'status' => 0,
      ),
      'hide_register_tab' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'registration',
      'settings' => array(),
      'type' => 'registration_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-tournoi_two-field_type_de_tournoi'.
  $field_instances['node-tournoi_two-field_type_de_tournoi'] = array(
    'bundle' => 'tournoi_two',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_type_de_tournoi',
    'label' => 'Type de tournoi',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'registration-tournoi_four-field_nom_et_pr_nom_joueur_3'.
  $field_instances['registration-tournoi_four-field_nom_et_pr_nom_joueur_3'] = array(
    'bundle' => 'tournoi_four',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'registration',
    'field_name' => 'field_nom_et_pr_nom_joueur_3',
    'label' => 'Nom et prénom joueur 3',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'registration-tournoi_four-field_nom_et_prenom_joueur_1'.
  $field_instances['registration-tournoi_four-field_nom_et_prenom_joueur_1'] = array(
    'bundle' => 'tournoi_four',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'registration',
    'field_name' => 'field_nom_et_prenom_joueur_1',
    'label' => 'Nom et prénom joueur 1',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'registration-tournoi_four-field_nom_et_prenom_joueur_2'.
  $field_instances['registration-tournoi_four-field_nom_et_prenom_joueur_2'] = array(
    'bundle' => 'tournoi_four',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'registration',
    'field_name' => 'field_nom_et_prenom_joueur_2',
    'label' => 'Nom et prénom joueur 2',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'registration-tournoi_four-field_nom_et_prenom_joueur_4'.
  $field_instances['registration-tournoi_four-field_nom_et_prenom_joueur_4'] = array(
    'bundle' => 'tournoi_four',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'registration',
    'field_name' => 'field_nom_et_prenom_joueur_4',
    'label' => 'Nom et prénom joueur 4',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'registration-tournoi_three_registration-field_nom_et_pr_nom_joueur_3'.
  $field_instances['registration-tournoi_three_registration-field_nom_et_pr_nom_joueur_3'] = array(
    'bundle' => 'tournoi_three_registration',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'registration',
    'field_name' => 'field_nom_et_pr_nom_joueur_3',
    'label' => 'Nom et prénom joueur 3',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'registration-tournoi_three_registration-field_nom_et_prenom_joueur_1'.
  $field_instances['registration-tournoi_three_registration-field_nom_et_prenom_joueur_1'] = array(
    'bundle' => 'tournoi_three_registration',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'registration',
    'field_name' => 'field_nom_et_prenom_joueur_1',
    'label' => 'Nom et prénom joueur 1',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'registration-tournoi_three_registration-field_nom_et_prenom_joueur_2'.
  $field_instances['registration-tournoi_three_registration-field_nom_et_prenom_joueur_2'] = array(
    'bundle' => 'tournoi_three_registration',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'registration',
    'field_name' => 'field_nom_et_prenom_joueur_2',
    'label' => 'Nom et prénom joueur 2',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'registration-tournoi_two_registration-field_email_joueur_2'.
  $field_instances['registration-tournoi_two_registration-field_email_joueur_2'] = array(
    'bundle' => 'tournoi_two_registration',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'registration',
    'field_name' => 'field_email_joueur_2',
    'label' => 'Email joueur 2',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'registration-tournoi_two_registration-field_nom_et_prenom_joueur_1'.
  $field_instances['registration-tournoi_two_registration-field_nom_et_prenom_joueur_1'] = array(
    'bundle' => 'tournoi_two_registration',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'registration',
    'field_name' => 'field_nom_et_prenom_joueur_1',
    'label' => 'Nom et prénom joueur 1',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'registration-tournoi_two_registration-field_nom_et_prenom_joueur_2'.
  $field_instances['registration-tournoi_two_registration-field_nom_et_prenom_joueur_2'] = array(
    'bundle' => 'tournoi_two_registration',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'registration',
    'field_name' => 'field_nom_et_prenom_joueur_2',
    'label' => 'Nom et prénom joueur 2',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Date');
  t('Email joueur 2');
  t('Galerie photo');
  t('Inscription');
  t('Nom et prénom joueur 1');
  t('Nom et prénom joueur 2');
  t('Nom et prénom joueur 3');
  t('Nom et prénom joueur 4');
  t('Type de tournoi');

  return $field_instances;
}
