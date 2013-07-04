<?php
/**
 * @file
 * drupalaton_speakers.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function drupalaton_speakers_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'keynote_speakers';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Keynote speakers';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Job title */
  $handler->display->display_options['fields']['field_speaker_job_title']['id'] = 'field_speaker_job_title';
  $handler->display->display_options['fields']['field_speaker_job_title']['table'] = 'field_data_field_speaker_job_title';
  $handler->display->display_options['fields']['field_speaker_job_title']['field'] = 'field_speaker_job_title';
  $handler->display->display_options['fields']['field_speaker_job_title']['label'] = '';
  $handler->display->display_options['fields']['field_speaker_job_title']['element_label_colon'] = FALSE;
  /* Field: Content: Nickname */
  $handler->display->display_options['fields']['field_speaker_nickname']['id'] = 'field_speaker_nickname';
  $handler->display->display_options['fields']['field_speaker_nickname']['table'] = 'field_data_field_speaker_nickname';
  $handler->display->display_options['fields']['field_speaker_nickname']['field'] = 'field_speaker_nickname';
  $handler->display->display_options['fields']['field_speaker_nickname']['label'] = '';
  $handler->display->display_options['fields']['field_speaker_nickname']['element_label_colon'] = FALSE;
  /* Field: Content: Photo */
  $handler->display->display_options['fields']['field_speaker_photo']['id'] = 'field_speaker_photo';
  $handler->display->display_options['fields']['field_speaker_photo']['table'] = 'field_data_field_speaker_photo';
  $handler->display->display_options['fields']['field_speaker_photo']['field'] = 'field_speaker_photo';
  $handler->display->display_options['fields']['field_speaker_photo']['label'] = '';
  $handler->display->display_options['fields']['field_speaker_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speaker_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_speaker_photo']['settings'] = array(
    'image_style' => 'keynote_speaker',
    'image_link' => 'content',
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['text'] = '<span>about</span> [title]';
  $handler->display->display_options['fields']['view_node']['element_type'] = '0';
  $handler->display->display_options['fields']['view_node']['element_label_type'] = '0';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_wrapper_type'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
  /* Filter criterion: Content: Keynote Speaker */
  $handler->display->display_options['filters']['keynote']['id'] = 'keynote';
  $handler->display->display_options['filters']['keynote']['table'] = 'node';
  $handler->display->display_options['filters']['keynote']['field'] = 'keynote';
  $handler->display->display_options['filters']['keynote']['value'] = '1';
  $export['keynote_speakers'] = $view;

  $view = new view();
  $view->name = 'speakers_title';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'speakers title';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
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
  /* Filter criterion: Content: Keynote Speaker */
  $handler->display->display_options['filters']['keynote']['id'] = 'keynote';
  $handler->display->display_options['filters']['keynote']['table'] = 'node';
  $handler->display->display_options['filters']['keynote']['field'] = 'keynote';
  $handler->display->display_options['filters']['keynote']['value'] = '1';

  /* Display: Speakers */
  $handler = $view->new_display('panel_pane', 'Speakers', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Speakers';

  /* Display: Keynote Speakers */
  $handler = $view->new_display('panel_pane', 'Keynote Speakers', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Keynote Speakers';
  $export['speakers_title'] = $view;

  return $export;
}
