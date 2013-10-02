<?php

/**
 * @file
 * This file is empty by default because the base theme chain (Alpha & Omega) provides
 * all the basic functionality. However, in case you wish to customize the output that Drupal
 * generates through Alpha & Omega this file is a good place to do so.
 * 
 * Alpha comes with a neat solution for keeping this file as clean as possible while the code
 * for your subtheme grows. Please read the README.txt in the /preprocess and /process subfolders
 * for more information on this topic.
 */

/**
 * Implements theme_breadcrumb
 */
function ablestarter_breadcrumb($variables) {
	
	$breadcrumb = $variables['breadcrumb'];
	
	// so, for our breadcrumb trail
	// - home should always point back to crm-core
	
	$home = l('Home', 'crm-core');
	$crumbs = '';
	
	if (!empty($breadcrumb) && sizeof($breadcrumb) > 2) {
		$crumbs = '<ul class="breadcrumbs">';
		$crumbs .= '<li class="cmc_home">'.$home.'</li>';
		foreach($breadcrumb as $value) {
			if((strpos($value, 'crm-core"') == 0) && (strpos($value, '>Home<') == 0)){
				if((strpos($value, 'a href'))){
					$crumbs .= '<li>'.$value.'<div class="bc_arrow"></div></li>';
				} else {
					$crumbs .= '<li>'.$value.'</li>';
				}
			}
		}
		$crumbs .= '</ul>';
	}
	
	return $crumbs;
	
}


/**
 * Theming for local actions
 */
function ablestarter_menu_local_action ($variables){
	
	$link = $variables['element']['#link'];
	$class = strtolower(preg_replace(array(
			'/[^a-zA-Z0-9]+/',
			'/-+/',
			'/^-+/',
			'/-+$/',
	), array('-', '-', '', ''), $link['title']));
	$class .= ' btn btn-orange btn-simple';
	
	$output = '<li class="' . $class . '"><div class="action_link_icon"></div>';
	if (isset($link['href'])) {
		$output .= l($link['title'], $link['href'], isset($link['localized_options']) ? $link['localized_options'] : array());
	}
	elseif (!empty($link['localized_options']['html'])) {
		$output .= $link['title'];
	}
	else {
		$output .= check_plain($link['title']);
	}
	$output .= "</li>\n";
	
	return $output;	
	
}

/**
 * Theming for primary tabs
 */
function ablestarter_menu_local_tasks(&$variables) {
  $output = '';

  if (!empty($variables['primary'])) {
    $variables['primary']['#prefix'] = '<h2 class="element-invisible">' . t('Primary tabs') . '</h2>';
    $variables['primary']['#prefix'] .= '<div class="tabs-wrapper"><span>' . t('Navigate') . '</span><div><ul class="tabs links primary">';
    $variables['primary']['#suffix'] = '</ul></div></div>';
    $output .= drupal_render($variables['primary']);
  }
  if (!empty($variables['secondary'])) {
    $variables['secondary']['#prefix'] = '<h2 class="element-invisible">' . t('Secondary tabs') . '</h2>';
    $variables['secondary']['#prefix'] .= '<ul class="tabs secondary">';
    $variables['secondary']['#suffix'] = '</ul>';
    $output .= drupal_render($variables['secondary']);
  }

  return $output;
}

/**
 * Preprocessing information for the reports page
 */

function ablestarter_preprocess_crm_core_report_index(&$variables) {
	
	$report_items = array();
	$reports = $variables['reports'];
	
	$variables['column_a'] = array();
	$variables['column_b'] = array();
	
	if (!empty($reports)) {
		foreach ($reports as $key => $item) {
			$items = array();
			foreach ($item['reports'] as $report) {
				$items[] = l($report['title'], $report['path']) . '<br />' . $report['description'];
			}
			if($key == 'cmcd' || $key == 'cmcd-donors' || $key == 'cmcev'){
				$variables['column_a'][] = theme('item_list', array(
					'items' => $items,
					'title' => '<div class="crm_core_report_icon report-' . $key . '"></div>' . $item['title'],
				));
			} else {
				$variables['column_b'][] = theme('item_list', array(
						'items' => $items,
						'title' => '<div class="crm_core_report_icon report-' . $key . '"></div>' . $item['title'],
				));
			}
		}
	}
	
	
	
}

/**
 * Returns HTML for a button form element.
 *
 * @param $variables
 *   An associative array containing:
 *   - element: An associative array containing the properties of the element.
 *     Properties used: #attributes, #button_type, #name, #value.
 *
 * @ingroup themeable
 */
function ablestarter_button($variables) {
  $element = $variables['element'];
  
  $element['#attributes']['type'] = 'submit';
  element_set_attributes($element, array('id', 'name', 'value'));

  $element['#attributes']['class'][] = 'form-' . $element['#button_type'];
  if (!empty($element['#attributes']['disabled'])) {
    $element['#attributes']['class'][] = 'form-button-disabled';
  }
  $element['#attributes']['class'][] = 'btn';

  // dpm($element);

  if($element['#value'] == 'Reset' || $element['#value'] == 'Apply' ){
    $element['#attributes']['class'][] = 'btn-blue';
    $element['#attributes']['class'][] = 'btn-simple';
  } else if($element['#value'] == 'Delete' ){
    $element['#attributes']['class'][] = 'btn-red';
    $element['#attributes']['class'][] = 'btn-simple';
  	$element['#attributes']['class'][] = 'btn-large';
  } else if($element['#value'] == 'Save Individual' ){
    $element['#attributes']['class'][] = 'btn-green';
    $element['#attributes']['class'][] = 'btn-simple';
  	$element['#attributes']['class'][] = 'btn-large';
  }

  return '<input' . drupal_attributes($element['#attributes']) . ' />';
}

function ablestarter_submit($variables) {
  $variables['element']['#attributes']['class'][] = 'btn-purple';
  return theme('button', $variables['element']);  
}
