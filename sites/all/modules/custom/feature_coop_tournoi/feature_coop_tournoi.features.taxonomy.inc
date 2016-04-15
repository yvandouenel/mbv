<?php
/**
 * @file
 * feature_coop_tournoi.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function feature_coop_tournoi_taxonomy_default_vocabularies() {
  return array(
    'type_de_tournoi' => array(
      'name' => 'Type de tournoi',
      'machine_name' => 'type_de_tournoi',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
