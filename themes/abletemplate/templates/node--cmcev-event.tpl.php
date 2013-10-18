<div<?php print $attributes; ?>>
  <?php print $user_picture; ?>
  <?php print render($title_prefix); ?>
  <?php if (!$page && $title): ?>
  <div>
    <h2<?php print $title_attributes; ?>><a href="<?php print $node_url ?>" title="<?php print $title ?>"><?php print $title ?></a></h2>
  </div>
  <?php endif; ?>
  <?php print render($title_suffix); ?>
  <?php if ($display_submitted): ?>
  <div class="submitted"><?php print $date; ?> -- <?php print $name; ?></div>
  <?php endif; ?>  
  
  <div<?php print $content_attributes; ?>>
    
	  <?php if ($content['field_cmcev_date']): ?>
	    <div class="event-date">
	      <label>When</label>
	      <span class="info"><?php print render($content['field_cmcev_date']); ?></span>
	    </div>
	  <?php endif; ?>  
	  
	  <?php if ($content['field_cmcev_location']): ?>
	    <div class="event-location">
	      <label>Where</label>
	      <span class="info"><?php print render($content['field_cmcev_location']); ?></span>
	    </div>
	  <?php endif; ?>  
  
    <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
      print render($content);
    ?>
  </div>
  
  <div class="clearfix">
    <?php if (!empty($content['links'])): ?>
      <div class="links node-links clearfix"><?php print render($content['links']); ?></div>
    <?php endif; ?>

    <?php print render($content['comments']); ?>
  </div>
</div>