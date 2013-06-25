  <div class="global">
    <?php if ($main_menu): ?>
      <div class="navigation">
        <nav id="nav" class="closed">          
          <?php print theme('links__system_main_menu', array('links' => $main_menu, 'attributes' => array('id' => 'main-menu', 'class' => array('links', 'inline', 'clearfix')))); ?>
        </nav>
      </div> <!-- #navigation -->
    <?php endif; ?>
    <div class="landscape">
      <div class="hills"></div>
      <div class="boats">
        <div id="smallboat" class="boat small"></div>
        <div id="bigboat" class="boat big"></div>
      </div>
      <div class="logo">
        <div class="logo-inner">
          <img alt="Drupalaton logo" src="<?php print $logo; ?>">
        </div>
      </div>
      <div class="lake"></div>
      <div class="info">
        <h1>
          <span></span>
          Drupalaton, August 15-18, 2013, Hotel Helikon, Keszthely
        </h1>
      </div>
      <div class="logo-link">
        <div class="logo-link-inner">
          <a itemprop="name" title="Drupalaton" href="/"></a>
        </div>
      </div>
    </div>

    <?php if ($breadcrumb): ?>
      <div id="breadcrumb"><?php print $breadcrumb; ?></div>
    <?php endif; ?>

    <?php print $messages; ?>

    <div id="main-wrapper"><div id="main" class="clearfix">

      <div id="content" class="column"><div class="section">
        <a id="main-content"></a>
        <?php print render($title_prefix); ?>
        <?php if ($title): ?><h1 class="title" id="page-title"><?php print $title; ?></h1><?php endif; ?>
        <?php print render($title_suffix); ?>
        <?php if ($tabs): ?><div class="tabs"><?php print render($tabs); ?></div><?php endif; ?>
        <?php print render($page['help']); ?>
        <?php if ($action_links): ?><ul class="action-links"><?php print render($action_links); ?></ul><?php endif; ?>
        <?php print render($page['content']); ?>
        <?php print $feed_icons; ?>
      </div></div> <!-- /.section, /#content -->

    </div></div> <!-- /#main, /#main-wrapper -->

    <div id="footer"><div class="section">
      <?php print render($page['footer']); ?>
    </div></div> <!-- /.section, /#footer -->

  </div>

