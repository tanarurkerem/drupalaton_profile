<?php
/**
 * @file
 * drupalaton_sessions.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function drupalaton_sessions_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'sessions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Sessions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Sessions';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 0;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'sessions' => 'sessions',
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Session title */
  $handler->display->display_options['fields']['field_speaker_session_title']['id'] = 'field_speaker_session_title';
  $handler->display->display_options['fields']['field_speaker_session_title']['table'] = 'field_data_field_speaker_session_title';
  $handler->display->display_options['fields']['field_speaker_session_title']['field'] = 'field_speaker_session_title';
  $handler->display->display_options['fields']['field_speaker_session_title']['label'] = '';
  $handler->display->display_options['fields']['field_speaker_session_title']['element_label_colon'] = FALSE;
  /* Field: Content: Session type */
  $handler->display->display_options['fields']['field_speaker_session_type']['id'] = 'field_speaker_session_type';
  $handler->display->display_options['fields']['field_speaker_session_type']['table'] = 'field_data_field_speaker_session_type';
  $handler->display->display_options['fields']['field_speaker_session_type']['field'] = 'field_speaker_session_type';
  $handler->display->display_options['fields']['field_speaker_session_type']['label'] = '';
  $handler->display->display_options['fields']['field_speaker_session_type']['element_label_colon'] = FALSE;
  /* Field: Content: Session summary */
  $handler->display->display_options['fields']['field_speaker_session_summary']['id'] = 'field_speaker_session_summary';
  $handler->display->display_options['fields']['field_speaker_session_summary']['table'] = 'field_data_field_speaker_session_summary';
  $handler->display->display_options['fields']['field_speaker_session_summary']['field'] = 'field_speaker_session_summary';
  $handler->display->display_options['fields']['field_speaker_session_summary']['label'] = '';
  $handler->display->display_options['fields']['field_speaker_session_summary']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Job title */
  $handler->display->display_options['fields']['field_speaker_job_title']['id'] = 'field_speaker_job_title';
  $handler->display->display_options['fields']['field_speaker_job_title']['table'] = 'field_data_field_speaker_job_title';
  $handler->display->display_options['fields']['field_speaker_job_title']['field'] = 'field_speaker_job_title';
  $handler->display->display_options['fields']['field_speaker_job_title']['label'] = '';
  $handler->display->display_options['fields']['field_speaker_job_title']['element_label_colon'] = FALSE;
  /* Field: Content: Photo */
  $handler->display->display_options['fields']['field_speaker_photo']['id'] = 'field_speaker_photo';
  $handler->display->display_options['fields']['field_speaker_photo']['table'] = 'field_data_field_speaker_photo';
  $handler->display->display_options['fields']['field_speaker_photo']['field'] = 'field_speaker_photo';
  $handler->display->display_options['fields']['field_speaker_photo']['label'] = '';
  $handler->display->display_options['fields']['field_speaker_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speaker_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_speaker_photo']['settings'] = array(
    'image_style' => 'keynote_speaker',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'speaker' => 'speaker',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['block_description'] = 'Sessions';
  $export['sessions'] = $view;

  return $export;
}
