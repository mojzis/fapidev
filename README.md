## FAPI dev
* A simple helper tool for [drupal](http://drupal.org) [forms](http://api.drupal.org/api/drupal/includes%21form.inc/group/form_api/7) developping and tweaking.
* Adds `dpm($form_state)`  and `dpm($form)` into every form automatically.

### Why
* Allows you to *QUICKLY* see the controls a form you want to alter contains.
* See immediately what were the values provided on submitting the form.

### Install
* As any other module - `drush en fapidev`.
* It's trying to be lightweight, so no setup happens.

### Config
* Visit admin/config/development/fapidev .
  * switch it on and off without disabling the module
* You can do that by setting the variable: `fapidev_dpm`
  * `drush vset fapidev_dpm 1`


## Plans
* show form source code (see also holmes)
* find out about all hooks involved
