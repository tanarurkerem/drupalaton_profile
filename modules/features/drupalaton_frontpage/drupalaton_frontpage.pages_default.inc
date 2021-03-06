<?php
/**
 * @file
 * drupalaton_frontpage.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function drupalaton_frontpage_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'fronpage';
  $page->task = 'page';
  $page->admin_title = 'Fronpage';
  $page->admin_description = '';
  $page->path = 'frontpage';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_fronpage_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'fronpage';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 2,
          1 => 'main-row',
          2 => 1,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'bottom',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'bottom' => array(
        'type' => 'region',
        'title' => 'bottom',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'sponsow',
        ),
        'parent' => 'main',
        'class' => 'sponsor',
      ),
      'sponsow' => array(
        'type' => 'region',
        'title' => 'Sponsor',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'bottom' => NULL,
      'sponsow' => array(
        'corner_location' => 'pane',
      ),
    ),
    'sponsow' => array(
      'style' => 'rounded_corners',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '6f3c7443-853b-47c7-bb2d-efe6574ac698';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b3dce9d9-9185-4843-a941-45eadd6ff2e7';
    $pane->panel = 'bottom';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '4',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'teaser',
      'link_node_title' => 0,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'rounded_corners',
    );
    $pane->css = array(
      'css_id' => 'about',
      'css_class' => 'container_12 about',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b3dce9d9-9185-4843-a941-45eadd6ff2e7';
    $display->content['new-b3dce9d9-9185-4843-a941-45eadd6ff2e7'] = $pane;
    $display->panels['bottom'][0] = 'new-b3dce9d9-9185-4843-a941-45eadd6ff2e7';
    $pane = new stdClass();
    $pane->pid = 'new-06055858-4a04-4df6-b3a0-7fec006126b3';
    $pane->panel = 'bottom';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '8',
      'links' => 1,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'teaser',
      'link_node_title' => 0,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'rounded_corners',
    );
    $pane->css = array(
      'css_id' => 'location',
      'css_class' => 'container_12 location',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '06055858-4a04-4df6-b3a0-7fec006126b3';
    $display->content['new-06055858-4a04-4df6-b3a0-7fec006126b3'] = $pane;
    $display->panels['bottom'][1] = 'new-06055858-4a04-4df6-b3a0-7fec006126b3';
    $pane = new stdClass();
    $pane->pid = 'new-82eafa88-121c-4b12-847d-59f9e478d027';
    $pane->panel = 'bottom';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '9',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'full',
      'link_node_title' => 0,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'rounded_corners',
    );
    $pane->css = array(
      'css_id' => 'registration',
      'css_class' => 'container_12 registration',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '82eafa88-121c-4b12-847d-59f9e478d027';
    $display->content['new-82eafa88-121c-4b12-847d-59f9e478d027'] = $pane;
    $display->panels['bottom'][2] = 'new-82eafa88-121c-4b12-847d-59f9e478d027';
    $pane = new stdClass();
    $pane->pid = 'new-d3bb2594-57b5-4a0f-a263-c518ab919fd6';
    $pane->panel = 'bottom';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '10',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'teaser',
      'link_node_title' => 0,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'rounded_corners',
    );
    $pane->css = array(
      'css_id' => 'accomodation',
      'css_class' => 'container_12 accomodation',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'd3bb2594-57b5-4a0f-a263-c518ab919fd6';
    $display->content['new-d3bb2594-57b5-4a0f-a263-c518ab919fd6'] = $pane;
    $display->panels['bottom'][3] = 'new-d3bb2594-57b5-4a0f-a263-c518ab919fd6';
    $pane = new stdClass();
    $pane->pid = 'new-d4ab9853-e8ed-4fc0-97c2-6e5d9b711d73';
    $pane->panel = 'bottom';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '14',
      'links' => 1,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'full',
      'link_node_title' => 0,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'rounded_corners',
    );
    $pane->css = array(
      'css_id' => 'sessionproposal',
      'css_class' => 'container_12 sessionproposal',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'd4ab9853-e8ed-4fc0-97c2-6e5d9b711d73';
    $display->content['new-d4ab9853-e8ed-4fc0-97c2-6e5d9b711d73'] = $pane;
    $display->panels['bottom'][4] = 'new-d4ab9853-e8ed-4fc0-97c2-6e5d9b711d73';
    $pane = new stdClass();
    $pane->pid = 'new-4318d215-0170-49c3-bfe4-e412f9de991b';
    $pane->panel = 'bottom';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '15',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'teaser',
      'link_node_title' => 0,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'rounded_corners',
    );
    $pane->css = array(
      'css_id' => 'sponsor',
      'css_class' => 'container_12 sponsor',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '4318d215-0170-49c3-bfe4-e412f9de991b';
    $display->content['new-4318d215-0170-49c3-bfe4-e412f9de991b'] = $pane;
    $display->panels['bottom'][5] = 'new-4318d215-0170-49c3-bfe4-e412f9de991b';
    $pane = new stdClass();
    $pane->pid = 'new-c2069325-5140-4edc-9b5f-424831c2597b';
    $pane->panel = 'bottom';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '19',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'full',
      'link_node_title' => 0,
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'rounded_corners',
    );
    $pane->css = array(
      'css_id' => 'contactmin',
      'css_class' => 'container_12 contactmin',
    );
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'c2069325-5140-4edc-9b5f-424831c2597b';
    $display->content['new-c2069325-5140-4edc-9b5f-424831c2597b'] = $pane;
    $display->panels['bottom'][6] = 'new-c2069325-5140-4edc-9b5f-424831c2597b';
    $pane = new stdClass();
    $pane->pid = 'new-949be1fe-2e50-4321-98ba-bea2753edb0d';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'keynote_speakers';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '3',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'override_title' => 1,
      'override_title_text' => 'Keynote Speakers',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'rounded_corners',
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'container_12 keynote',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '949be1fe-2e50-4321-98ba-bea2753edb0d';
    $display->content['new-949be1fe-2e50-4321-98ba-bea2753edb0d'] = $pane;
    $display->panels['center'][0] = 'new-949be1fe-2e50-4321-98ba-bea2753edb0d';
    $pane = new stdClass();
    $pane->pid = 'new-d3788035-6524-4013-a865-4d599b3db6e4';
    $pane->panel = 'sponsow';
    $pane->type = 'views_panes';
    $pane->subtype = 'sponsors-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'container_12 sponsors',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd3788035-6524-4013-a865-4d599b3db6e4';
    $display->content['new-d3788035-6524-4013-a865-4d599b3db6e4'] = $pane;
    $display->panels['sponsow'][0] = 'new-d3788035-6524-4013-a865-4d599b3db6e4';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-949be1fe-2e50-4321-98ba-bea2753edb0d';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['fronpage'] = $page;

  return $pages;

}
