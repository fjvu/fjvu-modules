<?php
/**
 * @file
 * fjvu_documents.features.taxonomy.inc
 */

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function fjvu_documents_taxonomy_default_vocabularies() {
  return array(
    'vocabulary_10' => array(
      'name' => 'Materialer',
      'machine_name' => 'vocabulary_10',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'features_documents_materials',
      'weight' => '-7',
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
    'vocabulary_12' => array(
      'name' => 'Sprog',
      'machine_name' => 'vocabulary_12',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'features_tags_documents_language',
      'weight' => '-3',
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
    'vocabulary_3' => array(
      'name' => 'Tags til videndatabasen',
      'machine_name' => 'vocabulary_3',
      'description' => 'Tags brugt i forbindelse med videndatabasen',
      'hierarchy' => '0',
      'module' => 'features_tags_documents',
      'weight' => '-6',
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
    'vocabulary_5' => array(
      'name' => 'Kategori',
      'machine_name' => 'vocabulary_5',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'features_tags_documents_category',
      'weight' => '-8',
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
    'vocabulary_6' => array(
      'name' => 'Forfattere',
      'machine_name' => 'vocabulary_6',
      'description' => '',
      'hierarchy' => '1',
      'module' => 'features_tags_documents_authors',
      'weight' => '-9',
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
    'vocabulary_7' => array(
      'name' => 'Kilde',
      'machine_name' => 'vocabulary_7',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'features_tags_documents_publisher',
      'weight' => '-1',
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
    'vocabulary_8' => array(
      'name' => 'År',
      'machine_name' => 'vocabulary_8',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'features_tags_documents_year',
      'weight' => '-10',
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
