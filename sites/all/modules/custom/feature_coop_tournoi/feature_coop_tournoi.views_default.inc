<?php
/**
 * @file
 * feature_coop_tournoi.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function feature_coop_tournoi_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'liste_des_inscrits';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'registration';
  $view->human_name = 'Liste des inscrits';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Liste des inscrits';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Entête: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h3>Equipes déjà inscrites</h3>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Relationship: Registration: Registration to Nœud */
  $handler->display->display_options['relationships']['registration_related_node']['id'] = 'registration_related_node';
  $handler->display->display_options['relationships']['registration_related_node']['table'] = 'registration';
  $handler->display->display_options['relationships']['registration_related_node']['field'] = 'registration_related_node';
  $handler->display->display_options['relationships']['registration_related_node']['required'] = TRUE;
  /* Champ: Registration: Registration ID */
  $handler->display->display_options['fields']['registration_id']['id'] = 'registration_id';
  $handler->display->display_options['fields']['registration_id']['table'] = 'registration';
  $handler->display->display_options['fields']['registration_id']['field'] = 'registration_id';
  $handler->display->display_options['fields']['registration_id']['label'] = '';
  $handler->display->display_options['fields']['registration_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['registration_id']['element_label_colon'] = FALSE;
  /* Champ: Registration: Nom et prénom joueur 1 */
  $handler->display->display_options['fields']['field_nom_et_prenom_joueur_1']['id'] = 'field_nom_et_prenom_joueur_1';
  $handler->display->display_options['fields']['field_nom_et_prenom_joueur_1']['table'] = 'field_data_field_nom_et_prenom_joueur_1';
  $handler->display->display_options['fields']['field_nom_et_prenom_joueur_1']['field'] = 'field_nom_et_prenom_joueur_1';
  $handler->display->display_options['fields']['field_nom_et_prenom_joueur_1']['label'] = '';
  $handler->display->display_options['fields']['field_nom_et_prenom_joueur_1']['element_label_colon'] = FALSE;
  /* Champ: Registration: Nom et prénom joueur 2 */
  $handler->display->display_options['fields']['field_nom_et_prenom_joueur_2']['id'] = 'field_nom_et_prenom_joueur_2';
  $handler->display->display_options['fields']['field_nom_et_prenom_joueur_2']['table'] = 'field_data_field_nom_et_prenom_joueur_2';
  $handler->display->display_options['fields']['field_nom_et_prenom_joueur_2']['field'] = 'field_nom_et_prenom_joueur_2';
  $handler->display->display_options['fields']['field_nom_et_prenom_joueur_2']['label'] = '';
  $handler->display->display_options['fields']['field_nom_et_prenom_joueur_2']['element_label_colon'] = FALSE;
  /* Contextual filter: Contenu: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'registration_related_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'liste_inscrits');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Registration: Registration ID */
  $handler->display->display_options['fields']['registration_id']['id'] = 'registration_id';
  $handler->display->display_options['fields']['registration_id']['table'] = 'registration';
  $handler->display->display_options['fields']['registration_id']['field'] = 'registration_id';
  $handler->display->display_options['fields']['registration_id']['label'] = '';
  $handler->display->display_options['fields']['registration_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['registration_id']['element_label_colon'] = FALSE;
  /* Champ: Registration: Nom et prénom joueur 1 */
  $handler->display->display_options['fields']['field_nom_et_prenom_joueur_1']['id'] = 'field_nom_et_prenom_joueur_1';
  $handler->display->display_options['fields']['field_nom_et_prenom_joueur_1']['table'] = 'field_data_field_nom_et_prenom_joueur_1';
  $handler->display->display_options['fields']['field_nom_et_prenom_joueur_1']['field'] = 'field_nom_et_prenom_joueur_1';
  $handler->display->display_options['fields']['field_nom_et_prenom_joueur_1']['label'] = '';
  $handler->display->display_options['fields']['field_nom_et_prenom_joueur_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nom_et_prenom_joueur_1']['element_label_colon'] = FALSE;
  /* Champ: Registration: Nom et prénom joueur 2 */
  $handler->display->display_options['fields']['field_nom_et_prenom_joueur_2']['id'] = 'field_nom_et_prenom_joueur_2';
  $handler->display->display_options['fields']['field_nom_et_prenom_joueur_2']['table'] = 'field_data_field_nom_et_prenom_joueur_2';
  $handler->display->display_options['fields']['field_nom_et_prenom_joueur_2']['field'] = 'field_nom_et_prenom_joueur_2';
  $handler->display->display_options['fields']['field_nom_et_prenom_joueur_2']['label'] = '';
  $handler->display->display_options['fields']['field_nom_et_prenom_joueur_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nom_et_prenom_joueur_2']['element_label_colon'] = FALSE;
  /* Champ: Registration: Nom et prénom joueur 3 */
  $handler->display->display_options['fields']['field_nom_et_pr_nom_joueur_3']['id'] = 'field_nom_et_pr_nom_joueur_3';
  $handler->display->display_options['fields']['field_nom_et_pr_nom_joueur_3']['table'] = 'field_data_field_nom_et_pr_nom_joueur_3';
  $handler->display->display_options['fields']['field_nom_et_pr_nom_joueur_3']['field'] = 'field_nom_et_pr_nom_joueur_3';
  $handler->display->display_options['fields']['field_nom_et_pr_nom_joueur_3']['label'] = '';
  $handler->display->display_options['fields']['field_nom_et_pr_nom_joueur_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nom_et_pr_nom_joueur_3']['element_label_colon'] = FALSE;
  /* Champ: Registration: Nom et prénom joueur 4 */
  $handler->display->display_options['fields']['field_nom_et_prenom_joueur_4']['id'] = 'field_nom_et_prenom_joueur_4';
  $handler->display->display_options['fields']['field_nom_et_prenom_joueur_4']['table'] = 'field_data_field_nom_et_prenom_joueur_4';
  $handler->display->display_options['fields']['field_nom_et_prenom_joueur_4']['field'] = 'field_nom_et_prenom_joueur_4';
  $handler->display->display_options['fields']['field_nom_et_prenom_joueur_4']['label'] = '';
  $handler->display->display_options['fields']['field_nom_et_prenom_joueur_4']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nom_et_prenom_joueur_4']['element_label_colon'] = FALSE;
  /* Champ: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="team-registrated">
<h4 class="beach-players">Joueurs(euses) : </h4>
<span class="beach-player">[field_nom_et_prenom_joueur_1]</span> 
<span class="beach-player">[field_nom_et_prenom_joueur_2]</span>
<span class="beach-player">[field_nom_et_pr_nom_joueur_3]</span>
<span class="beach-player">[field_nom_et_prenom_joueur_4]</span>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $translatables['liste_des_inscrits'] = array(
    t('Master'),
    t('Liste des inscrits'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('<h3>Equipes déjà inscrites</h3>'),
    t('node from Registration'),
    t('.'),
    t(','),
    t('Tout'),
    t('Block'),
    t('<div class="team-registrated">
<h4 class="beach-players">Joueurs(euses) : </h4>
<span class="beach-player">[field_nom_et_prenom_joueur_1]</span> 
<span class="beach-player">[field_nom_et_prenom_joueur_2]</span>
<span class="beach-player">[field_nom_et_pr_nom_joueur_3]</span>
<span class="beach-player">[field_nom_et_prenom_joueur_4]</span>
</div>'),
  );
  $export['liste_des_inscrits'] = $view;

  return $export;
}
