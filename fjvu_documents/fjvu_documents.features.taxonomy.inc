<?php

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function fjvu_documents_taxonomy_default_vocabularies() {
  return array(
    'tags_documents' => array(
      'name' => 'Tags',
      'description' => '',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '0',
      'required' => '0',
      'tags' => '1',
      'module' => 'features_tags_documents',
      'weight' => '0',
      'nodes' => array(
        'documents' => 'documents',
      ),
    ),
    'tags_documents_authors' => array(
      'name' => 'Authors',
      'description' => '',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '1',
      'required' => '0',
      'tags' => '1',
      'module' => 'features_tags_documents_authors',
      'weight' => '0',
      'nodes' => array(
        'documents' => 'documents',
      ),
    ),
    'tags_documents_category' => array(
      'name' => 'Documents category',
      'description' => '',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '1',
      'multiple' => '1',
      'required' => '1',
      'tags' => '0',
      'module' => 'features_tags_documents_category',
      'weight' => '0',
      'nodes' => array(
        'documents' => 'documents',
      ),
    ),
    'tags_documents_publisher' => array(
      'name' => 'Publisher',
      'description' => '',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '1',
      'required' => '0',
      'tags' => '1',
      'module' => 'features_tags_documents_publisher',
      'weight' => '0',
      'nodes' => array(
        'documents' => 'documents',
      ),
    ),
    'tags_documents_year' => array(
      'name' => 'Year',
      'description' => '',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '1',
      'required' => '0',
      'tags' => '1',
      'module' => 'features_tags_documents_year',
      'weight' => '0',
      'nodes' => array(
        'documents' => 'documents',
      ),
    ),
  );
}
