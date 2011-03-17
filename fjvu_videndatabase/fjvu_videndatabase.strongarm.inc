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
  $strongarm->name = 'fivestar_feedback_videndatabase';
  $strongarm->value = 1;

  $export['fivestar_feedback_videndatabase'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fivestar_labels_enable_videndatabase';
  $strongarm->value = 1;

  $export['fivestar_labels_enable_videndatabase'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fivestar_labels_videndatabase';
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

  $export['fivestar_labels_videndatabase'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fivestar_position_teaser_videndatabase';
  $strongarm->value = 'below_static';

  $export['fivestar_position_teaser_videndatabase'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fivestar_position_videndatabase';
  $strongarm->value = 'below';

  $export['fivestar_position_videndatabase'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fivestar_stars_videndatabase';
  $strongarm->value = '5';

  $export['fivestar_stars_videndatabase'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fivestar_style_videndatabase';
  $strongarm->value = 'user';

  $export['fivestar_style_videndatabase'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fivestar_text_videndatabase';
  $strongarm->value = 'smart';

  $export['fivestar_text_videndatabase'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fivestar_title_videndatabase';
  $strongarm->value = 1;

  $export['fivestar_title_videndatabase'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fivestar_unvote_videndatabase';
  $strongarm->value = 0;

  $export['fivestar_unvote_videndatabase'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fivestar_videndatabase';
  $strongarm->value = 1;

  $export['fivestar_videndatabase'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'form_build_id_videndatabase';
  $strongarm->value = 'form-87ceba48807c3430b071db8ffd0fff0d';

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
