<?php

/**
 * Implementation of hook_strongarm().
 */
function fjvu_videndatabase_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_videndatabase';
  $strongarm->value = '0';

  $export['comment_anonymous_videndatabase'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_videndatabase';
  $strongarm->value = '3';

  $export['comment_controls_videndatabase'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_videndatabase';
  $strongarm->value = '4';

  $export['comment_default_mode_videndatabase'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_videndatabase';
  $strongarm->value = '1';

  $export['comment_default_order_videndatabase'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_videndatabase';
  $strongarm->value = '50';

  $export['comment_default_per_page_videndatabase'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_videndatabase';
  $strongarm->value = '0';

  $export['comment_form_location_videndatabase'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_videndatabase';
  $strongarm->value = '1';

  $export['comment_preview_videndatabase'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_videndatabase';
  $strongarm->value = '1';

  $export['comment_subject_field_videndatabase'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_videndatabase';
  $strongarm->value = '2';

  $export['comment_videndatabase'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_videndatabase';
  $strongarm->value = array(
    'title' => '7',
    'body_field' => '11',
    'menu' => '6',
    'taxonomy' => '12',
    'attachments' => '15',
  );

  $export['content_extra_weights_videndatabase'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'form_build_id_videndatabase';
  $strongarm->value = 'form-de5309bd216a71175a0f3b3c1716bdc7';

  $export['form_build_id_videndatabase'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_videndatabase';
  $strongarm->value = '0';

  $export['language_content_type_videndatabase'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_videndatabase';
  $strongarm->value = array(
    0 => 'status',
  );

  $export['node_options_videndatabase'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodewords_videndatabase';
  $strongarm->value = 1;

  $export['nodewords_videndatabase'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_enable_videndatabase';
  $strongarm->value = 0;

  $export['scheduler_publish_enable_videndatabase'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_touch_videndatabase';
  $strongarm->value = 0;

  $export['scheduler_publish_touch_videndatabase'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_enable_videndatabase';
  $strongarm->value = 0;

  $export['scheduler_unpublish_enable_videndatabase'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_videndatabase';
  $strongarm->value = '1';

  $export['upload_videndatabase'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'webfm_attach_videndatabase';
  $strongarm->value = '0';

  $export['webfm_attach_videndatabase'] = $strongarm;
  return $export;
}
