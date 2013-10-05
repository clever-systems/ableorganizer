<?php 
function abletemplate_alpha_preprocess_region(&$vars) {
  // custom functionality here
  $theme = alpha_get_theme();
  $vars['main_menu'] = $theme->page['main_menu'];
  $vars['secondary_menu'] = $theme->page['secondary_menu'];
}
