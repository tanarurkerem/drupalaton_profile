<?php
/**
 * @file
 * drupalaton_sessions.features.inc
 */

/**
 * Implements hook_views_api().
 */
function drupalaton_sessions_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_fe_nodequeue_export_fields().
 */
function drupalaton_sessions_fe_nodequeue_export_fields() {
  $nodequeues = array();

  // Exported nodequeues: sessions
  $nodequeues['sessions'] = array(
    'name' => 'sessions',
    'title' => 'Sessions',
    'subqueue_title' => '',
    'size' => 0,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'speaker',
    ),
    'roles' => array(),
    'count' => 0,
  );

  return $nodequeues;
}
