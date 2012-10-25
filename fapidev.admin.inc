<?php
/**
 * @file
 * Config form
 *
 */

function fapidev_config_form($form, &$form_state){
  //$form = array();
  $form['fapidev_dpm'] = array(
    '#type' => 'checkbox',
    '#title' => t('Print info'),
    '#default_value' => variable_get('fapidev_dpm'),
    );
// http://api.drupal.org/api/drupal/developer%21topics%21forms_api_reference.html/7
  return system_settings_form($form);
}
