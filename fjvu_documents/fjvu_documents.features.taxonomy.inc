<?php

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function fjvu_documents_taxonomy_default_vocabularies() {
  return array(
    'documents_materials' => array(
      'name' => 'Materialer',
      'description' => '',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '0',
      'required' => '0',
      'tags' => '1',
      'module' => 'features_documents_materials',
      'weight' => '-7',
      'nodes' => array(
        'documents' => 'documents',
      ),
    ),
    'tags_documents' => array(
      'name' => 'Primære tags',
      'description' => '',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '0',
      'required' => '0',
      'tags' => '1',
      'module' => 'features_tags_documents',
      'weight' => '-6',
      'nodes' => array(
        'documents' => 'documents',
      ),
    ),
    'tags_documents_authors' => array(
      'name' => 'Forfattere',
      'description' => '',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '1',
      'required' => '0',
      'tags' => '1',
      'module' => 'features_tags_documents_authors',
      'weight' => '-9',
      'nodes' => array(
        'documents' => 'documents',
      ),
    ),
    'tags_documents_category' => array(
      'name' => 'Kategori',
      'description' => '',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '1',
      'required' => '1',
      'tags' => '0',
      'module' => 'features_tags_documents_category',
      'weight' => '-8',
      'nodes' => array(
        'documents' => 'documents',
      ),
    ),
    'tags_documents_language' => array(
      'name' => 'Sprog',
      'description' => '',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '1',
      'multiple' => '0',
      'required' => '1',
      'tags' => '0',
      'module' => 'features_tags_documents_language',
      'weight' => '-3',
      'nodes' => array(
        'documents' => 'documents',
      ),
    ),
    'tags_documents_publisher' => array(
      'name' => 'Udgiver',
      'description' => '',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '1',
      'required' => '0',
      'tags' => '1',
      'module' => 'features_tags_documents_publisher',
      'weight' => '-1',
      'nodes' => array(
        'documents' => 'documents',
      ),
    ),
    'tags_documents_secondary' => array(
      'name' => 'Sekundære tags',
      'description' => '',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '1',
      'required' => '0',
      'tags' => '1',
      'module' => 'features_tags_documents_secondary',
      'weight' => '-4',
      'nodes' => array(
        'documents' => 'documents',
      ),
    ),
    'tags_documents_year' => array(
      'name' => 'År',
      'description' => '',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '1',
      'required' => '0',
      'tags' => '1',
      'module' => 'features_tags_documents_year',
      'weight' => '-10',
      'nodes' => array(
        'documents' => 'documents',
      ),
    ),
  );
}
