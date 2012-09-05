## FAPI dev
* A simple helper tool for [drupal](http://drupal.org) [forms](http://api.drupal.org/api/drupal/includes%21form.inc/group/form_api/7) developping and tweaking.
* Adds `dpm($form_state)`  and `dpm($form)` into your forms.

### Install
* as any other module - `drush en fapidev`
* its trying to be lightweight, so no setup happens

### Config
* visit admin/config/development/fapidev
* you can switch the whole thing off and on instantaneously in this form
  * or by setting the variable: `fapidev_dpm`
