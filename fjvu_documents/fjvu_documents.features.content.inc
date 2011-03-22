<?php

/**
 * Implementation of hook_content_default_fields().
 */
function fjvu_documents_content_default_fields() {
  $fields = array();

  // Exported field: field_isbn
  $fields['documents-field_isbn'] = array(
    'field_name' => 'field_isbn',
    'type_name' => 'documents',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'isbn',
    'required' => '0',
    'multiple' => '0',
    'module' => 'isbn',
    'active' => '1',
    'isbn_format' => '10',
    'isbn_validation' => '0',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_isbn][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'ISBN',
      'weight' => '-2',
      'description' => '',
      'type' => 'isbn_field',
      'module' => 'isbn',
    ),
  );

  // Exported field: field_scribdfile
  $fields['documents-field_scribdfile'] = array(
    'field_name' => 'field_scribdfile',
    'type_name' => 'documents',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'ipaper',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'ipaper',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'ipaper',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'ipaper',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'ipaper',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'ipaper',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'pdf txt doc',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'label' => 'Scribd file',
      'weight' => '-3',
      'description' => '',
      'type' => 'scribdfield_widget',
      'module' => 'scribdfield',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('ISBN');
  t('Scribd file');

  return $fields;
}
