<?php
/**
 * @file
 * fjvu_stories.features.taxonomy.inc
 */

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function fjvu_stories_taxonomy_default_vocabularies() {
  return array(
    'vocabulary_4' => array(
      'name' => 'Tags til nyheder og artikler',
      'machine_name' => 'vocabulary_4',
      'description' => 'Tags brugt i forbindelse med nyheder',
      'hierarchy' => '0',
      'module' => 'features_tags',
      'weight' => '-2',
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
