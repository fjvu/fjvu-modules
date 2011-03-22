<?php

/**
 * Implementation of hook_strongarm().
 */
function fjvu_stotteordninger_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_stoetteordninger';
  $strongarm->value = '0';

  $export['comment_anonymous_stoetteordninger'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_stoetteordninger';
  $strongarm->value = '3';

  $export['comment_controls_stoetteordninger'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_stoetteordninger';
  $strongarm->value = '4';

  $export['comment_default_mode_stoetteordninger'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_stoetteordninger';
  $strongarm->value = '1';

  $export['comment_default_order_stoetteordninger'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_stoetteordninger';
  $strongarm->value = '50';

  $export['comment_default_per_page_stoetteordninger'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_stoetteordninger';
  $strongarm->value = '0';

  $export['comment_form_location_stoetteordninger'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_stoetteordninger';
  $strongarm->value = '1';

  $export['comment_preview_stoetteordninger'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_stoetteordninger';
  $strongarm->value = '2';

  $export['comment_stoetteordninger'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_stoetteordninger';
  $strongarm->value = '1';

  $export['comment_subject_field_stoetteordninger'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_stoetteordninger';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '-3',
    'menu' => '-4',
    'attachments' => '2',
  );

  $export['content_extra_weights_stoetteordninger'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_stoetteordninger';
  $strongarm->value = '0';

  $export['language_content_type_stoetteordninger'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_stoetteordninger';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );

  $export['node_options_stoetteordninger'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_enable_stoetteordninger';
  $strongarm->value = 0;

  $export['scheduler_publish_enable_stoetteordninger'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_stoetteordninger';
  $strongarm->value = '1';

  $export['upload_stoetteordninger'] = $strongarm;
  return $export;
}
