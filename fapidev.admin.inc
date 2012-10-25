<?php
/**
 * @file
 * Config form
 * @todo options matrix : what : form, formstate  when : before , after how : dpm, file, db ?
 * BTW : should it print twice on submit ?
 * @todo consider http://drupal.org/project/krumo http://drupal.org/project/search_krumo
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
