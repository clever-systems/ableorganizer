<?php 

function abletemplate_alpha_preprocess_page(&$vars) {
  // Hide the node title on the front page
  if($vars['is_front']) {
    $vars['title'] = '';    
  }
  
  // this needs to be moved into the sample content module
  drupal_add_library('system', 'ui');
  drupal_add_library('system', 'effects');  
  drupal_add_library('system', 'effects.explode');  
  drupal_add_library('system', 'effects.fade');  
  
}
