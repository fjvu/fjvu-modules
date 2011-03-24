<?php

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function fjvu_stories_taxonomy_default_vocabularies() {
  return array(
    'tags' => array(
      'name' => 'Tags',
      'description' => '',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '1',
      'required' => '0',
      'tags' => '1',
      'module' => 'features_tags',
      'weight' => '0',
      'nodes' => array(
        'story' => 'story',
      ),
    ),
  );
}
