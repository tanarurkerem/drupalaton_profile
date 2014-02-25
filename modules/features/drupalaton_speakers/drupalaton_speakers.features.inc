<?php
/**
 * @file
 * drupalaton_speakers.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function drupalaton_speakers_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function drupalaton_speakers_views_api($module = NULL, $api = NULL) {
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
