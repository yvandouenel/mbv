<?php
/**
 * @file
 * feature_coop_mbv_context.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function feature_coop_mbv_context_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'home';
  $context->description = 'Uniquement sur la page d\'accueil - twitter';
  $context->tag = 'home';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-tournois-block_tournois' => array(
          'module' => 'views',
          'delta' => 'tournois-block_tournois',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-events-block_evenements_home' => array(
          'module' => 'views',
          'delta' => 'events-block_evenements_home',
          'region' => 'content',
          'weight' => '-9',
        ),
        'twitter_block-1' => array(
          'module' => 'twitter_block',
          'delta' => '1',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Uniquement sur la page d\'accueil - twitter');
  t('home');
  $export['home'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'large_screen';
  $context->description = 'menus gauche';
  $context->tag = 'Grand écran';
  $context->conditions = array(
    'breakpoint' => array(
      'values' => array(
        0 => 'breakpoints.theme.bootstrap.screen-md-min',
      ),
      'options' => array(
        'autoreload' => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-1' => array(
          'module' => 'menu_block',
          'delta' => '1',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Grand écran');
  t('menus gauche');
  $export['large_screen'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'partout';
  $context->description = 'Menu haut, recherche, adresse';
  $context->tag = 'Partout';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-top' => array(
          'module' => 'menu',
          'delta' => 'menu-top',
          'region' => 'first-top',
          'weight' => '-10',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'first-top',
          'weight' => '-9',
        ),
        'bean-address' => array(
          'module' => 'bean',
          'delta' => 'address',
          'region' => 'footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Menu haut, recherche, adresse');
  t('Partout');
  $export['partout'] = $context;

  return $export;
}
