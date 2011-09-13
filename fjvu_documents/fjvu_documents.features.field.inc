<?php
/**
 * @file
 * fjvu_documents.features.field.inc
 */

/**
 * Implementation of hook_field_default_fields().
 */
function fjvu_documents_field_default_fields() {
  $fields = array();

  // Exported field: 'node-documents-body'
  $fields['node-documents-body'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(
        0 => 'node',
      ),
      'field_name' => 'body',
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_with_summary',
    ),
    'field_instance' => array(
      'bundle' => 'documents',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Form der bruges til at oprette dokumenter til videndatabasen',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '-3',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'trim_length' => 600,
          ),
          'type' => 'text_summary_or_trimmed',
          'weight' => '-3',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'body',
      'label' => 'Brødtekst',
      'required' => 0,
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
        'weight' => '-3',
      ),
    ),
  );

  // Exported field: 'node-documents-field_documents_file'
  $fields['node-documents-field_documents_file'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_documents_file',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'module' => 'file',
      'settings' => array(
        'description_field' => '0',
        'display_default' => 1,
        'display_field' => '0',
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'file',
      'type_name' => 'documents',
    ),
    'field_instance' => array(
      'bundle' => 'documents',
      'default_value' => '',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_default',
          'weight' => '-4',
        ),
        'full' => array(
          'label' => 'hidden',
          'moduke' => 'file',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_default',
          'weight' => '-4',
        ),
        'rss' => array(
          'label' => 'hidden',
          'moduke' => 'file',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_default',
          'weight' => '-4',
        ),
        'search_index' => array(
          'label' => 'hidden',
          'moduke' => 'file',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_default',
          'weight' => '-4',
        ),
        'search_result' => array(
          'label' => 'hidden',
          'moduke' => 'file',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_default',
          'weight' => '-4',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_default',
          'weight' => '-4',
        ),
        'token' => array(
          'label' => 'hidden',
          'moduke' => 'file',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_default',
          'weight' => '-4',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_documents_file',
      'label' => 'Fil',
      'required' => FALSE,
      'settings' => array(
        'description_field' => 0,
        'file_directory' => '',
        'file_extensions' => 'txt doc pdf xls xlsx ppt',
        'max_filesize' => '',
        'user_register_form' => FALSE,
      ),
      'weight' => '-4',
      'widget' => array(
        'active' => '1',
        'module' => 'file',
        'settings' => array(
          'progress_indicator' => 'bar',
        ),
        'type' => 'file_generic',
        'weight' => '-4',
      ),
      'widget_type' => 'filefield_widget',
    ),
  );

  // Exported field: 'node-documents-field_documents_year'
  $fields['node-documents-field_documents_year'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_documents_year',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'date',
      'settings' => array(
        'granularity' => array(
          'year' => 'year',
        ),
        'repeat' => 0,
        'timezone_db' => '',
        'todate' => '',
        'tz_handling' => 'none',
      ),
      'translatable' => '0',
      'type' => 'date',
      'type_name' => 'documents',
    ),
    'field_instance' => array(
      'bundle' => 'documents',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '-2',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'date',
          'settings' => array(
            'format_type' => 'short',
            'fromto' => 'both',
            'multiple_from' => '',
            'multiple_number' => '',
            'multiple_to' => '',
            'show_repeat_rule' => 'show',
          ),
          'type' => 'date_default',
          'weight' => '-2',
        ),
        'rss' => array(
          'label' => 'above',
          'module' => 'date',
          'settings' => array(
            'format_type' => 'short',
            'fromto' => 'both',
            'multiple_from' => '',
            'multiple_number' => '',
            'multiple_to' => '',
            'show_repeat_rule' => 'show',
          ),
          'type' => 'date_default',
          'weight' => '-2',
        ),
        'search_index' => array(
          'label' => 'above',
          'module' => 'date',
          'settings' => array(
            'format_type' => 'short',
            'fromto' => 'both',
            'multiple_from' => '',
            'multiple_number' => '',
            'multiple_to' => '',
            'show_repeat_rule' => 'show',
          ),
          'type' => 'date_default',
          'weight' => '-2',
        ),
        'search_result' => array(
          'label' => 'above',
          'module' => 'date',
          'settings' => array(
            'format_type' => 'short',
            'fromto' => 'both',
            'multiple_from' => '',
            'multiple_number' => '',
            'multiple_to' => '',
            'show_repeat_rule' => 'show',
          ),
          'type' => 'date_default',
          'weight' => '-2',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '-2',
        ),
        'token' => array(
          'label' => 'above',
          'module' => 'date',
          'settings' => array(
            'format_type' => 'short',
            'fromto' => 'both',
            'multiple_from' => '',
            'multiple_number' => '',
            'multiple_to' => '',
            'show_repeat_rule' => 'show',
          ),
          'type' => 'date_default',
          'weight' => '-2',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_documents_year',
      'label' => 'Årstal',
      'required' => FALSE,
      'settings' => array(
        'default_value' => 'blank',
        'default_value2' => 'same',
        'default_value_code' => '',
        'default_value_code2' => '',
        'user_register_form' => FALSE,
      ),
      'weight' => '-2',
      'widget' => array(
        'active' => '1',
        'module' => 'date',
        'settings' => array(
          'increment' => 1,
          'input_format' => 'j M Y - H:i:s',
          'input_format_custom' => 'Y',
          'label_position' => 'above',
          'repeat_collapsed' => '',
          'text_parts' => array(),
          'year_range' => '-3:+3',
        ),
        'type' => 'date_text',
        'weight' => '-2',
      ),
      'widget_type' => 'date_text',
    ),
  );

  // Exported field: 'node-documents-taxonomy_vocabulary_10'
  $fields['node-documents-taxonomy_vocabulary_10'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'taxonomy_vocabulary_10',
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'parent' => 0,
            'vocabulary' => 'vocabulary_10',
          ),
        ),
        'required' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'documents',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '10',
        ),
        'teaser' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '10',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'taxonomy_vocabulary_10',
      'label' => 'Materialer',
      'required' => '0',
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'taxonomy',
        'settings' => array(
          'autocomplete_path' => 'taxonomy/autocomplete',
          'size' => 60,
        ),
        'type' => 'taxonomy_autocomplete',
        'weight' => 9,
      ),
    ),
  );

  // Exported field: 'node-documents-taxonomy_vocabulary_12'
  $fields['node-documents-taxonomy_vocabulary_12'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'taxonomy_vocabulary_12',
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'parent' => 0,
            'vocabulary' => 'vocabulary_12',
          ),
        ),
        'required' => TRUE,
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'documents',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '10',
        ),
        'teaser' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '10',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'taxonomy_vocabulary_12',
      'label' => 'Sprog',
      'required' => '1',
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => 10,
      ),
    ),
  );

  // Exported field: 'node-documents-taxonomy_vocabulary_3'
  $fields['node-documents-taxonomy_vocabulary_3'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'taxonomy_vocabulary_3',
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'parent' => 0,
            'vocabulary' => 'vocabulary_3',
          ),
        ),
        'required' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'documents',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '10',
        ),
        'teaser' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '10',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'taxonomy_vocabulary_3',
      'label' => 'Tags',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'taxonomy',
        'settings' => array(
          'autocomplete_path' => 'taxonomy/autocomplete',
          'size' => 60,
        ),
        'type' => 'taxonomy_autocomplete',
        'weight' => 0,
      ),
    ),
  );

  // Exported field: 'node-documents-taxonomy_vocabulary_5'
  $fields['node-documents-taxonomy_vocabulary_5'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'taxonomy_vocabulary_5',
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'parent' => 0,
            'vocabulary' => 'vocabulary_5',
          ),
        ),
        'required' => TRUE,
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'documents',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '10',
        ),
        'teaser' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '10',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'taxonomy_vocabulary_5',
      'label' => 'Kategori',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => 0,
      ),
    ),
  );

  // Exported field: 'node-documents-taxonomy_vocabulary_6'
  $fields['node-documents-taxonomy_vocabulary_6'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'taxonomy_vocabulary_6',
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'parent' => 0,
            'vocabulary' => 'vocabulary_6',
          ),
        ),
        'required' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'documents',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '10',
        ),
        'teaser' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '10',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'taxonomy_vocabulary_6',
      'label' => 'Forfattere',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'taxonomy',
        'settings' => array(
          'autocomplete_path' => 'taxonomy/autocomplete',
          'size' => 60,
        ),
        'type' => 'taxonomy_autocomplete',
        'weight' => 0,
      ),
    ),
  );

  // Exported field: 'node-documents-taxonomy_vocabulary_7'
  $fields['node-documents-taxonomy_vocabulary_7'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'taxonomy_vocabulary_7',
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'parent' => 0,
            'vocabulary' => 'vocabulary_7',
          ),
        ),
        'required' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'documents',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '10',
        ),
        'teaser' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '10',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'taxonomy_vocabulary_7',
      'label' => 'Kilde',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'taxonomy',
        'settings' => array(
          'autocomplete_path' => 'taxonomy/autocomplete',
          'size' => 60,
        ),
        'type' => 'taxonomy_autocomplete',
        'weight' => 0,
      ),
    ),
  );

  // Exported field: 'node-documents-taxonomy_vocabulary_8'
  $fields['node-documents-taxonomy_vocabulary_8'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'taxonomy_vocabulary_8',
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'parent' => 0,
            'vocabulary' => 'vocabulary_8',
          ),
        ),
        'required' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'documents',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '10',
        ),
        'teaser' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '10',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'taxonomy_vocabulary_8',
      'label' => 'År',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'taxonomy',
        'settings' => array(
          'autocomplete_path' => 'taxonomy/autocomplete',
          'size' => 60,
        ),
        'type' => 'taxonomy_autocomplete',
        'weight' => 0,
      ),
    ),
  );

  // Exported field: 'node-documents-upload'
  $fields['node-documents-upload'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'upload',
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'module' => 'file',
      'settings' => array(
        'default_file' => 0,
        'display_default' => '1',
        'display_field' => 1,
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'file',
    ),
    'field_instance' => array(
      'bundle' => 'documents',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_table',
          'weight' => '0',
        ),
        'full' => array(
          'label' => 'hidden',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_table',
          'weight' => 0,
        ),
        'rss' => array(
          'label' => 'hidden',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_table',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'upload',
      'label' => 'File attachments',
      'required' => 0,
      'settings' => array(
        'description_field' => 1,
        'file_directory' => '',
        'file_extensions' => 'jpg jpeg gif png txt doc xls pdf ppt pps odt ods odp docx xlsx',
        'max_filesize' => '20 MB',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'file',
        'settings' => array(
          'progress_indicator' => 'throbber',
        ),
        'type' => 'file_generic',
        'weight' => '1',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Brødtekst');
  t('Fil');
  t('File attachments');
  t('Forfattere');
  t('Form der bruges til at oprette dokumenter til videndatabasen');
  t('Kategori');
  t('Kilde');
  t('Materialer');
  t('Sprog');
  t('Tags');
  t('År');
  t('Årstal');

  return $fields;
}
