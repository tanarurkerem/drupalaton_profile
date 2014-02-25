<?php
/**
 * @file
 * drupalaton_speakers.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function drupalaton_speakers_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function drupalaton_speakers_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_custom_pub_defaults().
 */
function drupalaton_speakers_custom_pub_defaults() {
  $options = array();
  // Exported option: keynote
  $options['keynote'] = array(
    'type' => 'keynote',
    'name' => t('Keynote Speaker'),
    'node_types' => array(
      'speaker' => t('Speaker'),
    ),
  );

  return $options;
}

/**
 * Implements hook_image_default_styles().
 */
function drupalaton_speakers_image_default_styles() {
  $styles = array();

  // Exported image style: keynote_speaker.
  $styles['keynote_speaker'] = array(
    'name' => 'keynote_speaker',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 280,
          'height' => 226,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'keynote_speaker',
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function drupalaton_speakers_node_info() {
  $items = array(
    'speaker' => array(
      'name' => t('Speaker'),
      'base' => 'node_content',
      'description' => t('Add <em>Speaker</em> who speak in the performance.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
