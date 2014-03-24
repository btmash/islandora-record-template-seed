<?php

function islandora_record_template_seed_configuration($form, &$form_state) {
  module_load_include('inc', 'islandora', 'includes/utilities');
  module_load_include('inc', 'xml_form_builder', 'XMLFormRepository');
  module_load_include('inc', 'xml_form_builder', 'includes/associations');
  form_load_include($form_state, 'inc', 'xml_form_builder', 'includes/associations.form');

  $entry_forms = XMLFormRepository::GetNames();

  $form['islandora_record_template_seed_fields'] = array(
    '#title' => 'Emptied fields.',
    '#type' => 'fieldset',
    '#collapsible' => FALSE,
    '#description' => t('Based on the form, Select fields you wish to have emptied during the seed process (eg. you may want title or subject chains to not get carried over during the seed/clone process.'),
  );
  foreach ($entry_forms as $entry_form) {
    $options = xml_form_builder_get_title_options($entry_form['name']);
    $form_name = _islandora_record_template_seed_sanitize($entry_form['name']);
    $form['islandora_record_template_seed_fields']['islandora_record_template_seed_fields_' . $form_name] = array(
      '#title' => t('Form @form', array('@form' => $form_name)),
      '#type' => 'select',
      '#multiple' => TRUE,
      '#default_value' => variable_get('islandora_record_template_seed_fields_' . $form_name, array()),
      '#options' => $options,
    );
  }

  return system_settings_form($form);
}
