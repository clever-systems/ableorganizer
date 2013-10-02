<div<?php print $attributes; ?>>
  <div<?php print $content_attributes; ?>>
    <?php if ($linked_logo_img): ?>
    <div class="branding-data clearfix">
      <?php if ($linked_logo_img): ?>
      <div class="logo-img">
        <?php print $linked_logo_img; ?>
      </div>
      <?php endif; ?>
	    <?php if ($main_menu || $secondary_menu): ?>
		    <nav class="navigation">
		      <?php print theme('links__system_main_menu', array('links' => $main_menu, 'attributes' => array('id' => 'main-menu', 'class' => array('links', 'inline', 'clearfix', 'main-menu')), 'heading' => array('text' => t('Main menu'),'level' => 'h2','class' => array('element-invisible')))); ?>
		    </nav>
	    <?php endif; ?>
    </div>
    <?php endif; ?>
    <?php print $content; ?>
  </div>
</div>