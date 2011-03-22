<?php

/**
 * Implementation of hook_strongarm().
 */
function fjvu_documents_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_documents';
  $strongarm->value = '0';

  $export['comment_anonymous_documents'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_documents';
  $strongarm->value = '3';

  $export['comment_controls_documents'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_documents';
  $strongarm->value = '4';

  $export['comment_default_mode_documents'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_documents';
  $strongarm->value = '1';

  $export['comment_default_order_documents'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_documents';
  $strongarm->value = '50';

  $export['comment_default_per_page_documents'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_documents';
  $strongarm->value = '0';

  $export['comment_form_location_documents'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_documents';
  $strongarm->value = '1';

  $export['comment_preview_documents'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_documents';
  $strongarm->value = '1';

  $export['comment_subject_field_documents'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_documents';
  $strongarm->value = '2';

  $export['comment_documents'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_documents';
  $strongarm->value = array(
    'title' => '7',
    'body_field' => '11',
    'menu' => '6',
    'taxonomy' => '12',
    'attachments' => '15',
  );

  $export['content_extra_weights_documents'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fivestar_feedback_documents';
  $strongarm->value = 1;

  $export['fivestar_feedback_documents'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fivestar_labels_enable_documents';
  $strongarm->value = 1;

  $export['fivestar_labels_enable_documents'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fivestar_labels_documents';
  $strongarm->value = array(
    0 => 'Fortryd bedømmelse',
    1 => 'Ringe',
    2 => 'Okay',
    3 => 'God',
    4 => 'Fantastisk',
    5 => 'Formidabel',
    6 => 'Giv det @star/@count',
    7 => 'Giv det @star/@count',
    8 => 'Giv det @star/@count',
    9 => 'Giv det @star/@count',
    10 => 'Giv det @star/@count',
  );

  $export['fivestar_labels_documents'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fivestar_position_teaser_documents';
  $strongarm->value = 'below_static';

  $export['fivestar_position_teaser_documents'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fivestar_position_documents';
  $strongarm->value = 'below';

  $export['fivestar_position_documents'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fivestar_stars_documents';
  $strongarm->value = '5';

  $export['fivestar_stars_documents'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fivestar_style_documents';
  $strongarm->value = 'user';

  $export['fivestar_style_documents'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fivestar_text_documents';
  $strongarm->value = 'smart';

  $export['fivestar_text_documents'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fivestar_title_documents';
  $strongarm->value = 1;

  $export['fivestar_title_documents'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fivestar_unvote_documents';
  $strongarm->value = 0;

  $export['fivestar_unvote_documents'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fivestar_documents';
  $strongarm->value = 1;

  $export['fivestar_documents'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'form_build_id_documents';
  $strongarm->value = 'form-87ceba48807c3430b071db8ffd0fff0d';

  $export['form_build_id_documents'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_documents';
  $strongarm->value = '0';

  $export['language_content_type_documents'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_documents';
  $strongarm->value = array(
    0 => 'status',
  );

  $export['node_options_documents'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodewords_documents';
  $strongarm->value = 1;

  $export['nodewords_documents'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_enable_documents';
  $strongarm->value = 0;

  $export['scheduler_publish_enable_documents'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_touch_documents';
  $strongarm->value = 0;

  $export['scheduler_publish_touch_documents'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_enable_documents';
  $strongarm->value = 0;

  $export['scheduler_unpublish_enable_documents'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_documents';
  $strongarm->value = '1';

  $export['upload_documents'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'webfm_attach_documents';
  $strongarm->value = '0';

  $export['webfm_attach_documents'] = $strongarm;
  return $export;
}
