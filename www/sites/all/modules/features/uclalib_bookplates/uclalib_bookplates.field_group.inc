<?php
/**
 * @file
 * uclalib_bookplates.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function uclalib_bookplates_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_author|node|bookplates|bookplates_landing_page';
  $field_group->group_name = 'group_author';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'bookplates';
  $field_group->mode = 'bookplates_landing_page';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '2',
    'children' => array(
      0 => 'field_bookplate_author_first_nam',
      1 => 'field_bookplate_author_last_name',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_author|node|bookplates|bookplates_landing_page'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_author|node|bookplates|default';
  $field_group->group_name = 'group_author';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'bookplates';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '4',
    'children' => array(
      0 => 'field_bookplate_author_first_nam',
      1 => 'field_bookplate_author_last_name',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_author|node|bookplates|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_author|node|bookplates|form';
  $field_group->group_name = 'group_author';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'bookplates';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Author',
    'weight' => '2',
    'children' => array(
      0 => 'field_bookplate_author_first_nam',
      1 => 'field_bookplate_author_last_name',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Author',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'element' => 'div',
        'attributes' => '',
      ),
      'formatter' => '',
    ),
  );
  $export['group_author|node|bookplates|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_donors|node|bookplates|bookplates_landing_page';
  $field_group->group_name = 'group_donors';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'bookplates';
  $field_group->mode = 'bookplates_landing_page';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Donors',
    'weight' => '1',
    'children' => array(
      0 => 'field_donor_first_name_bookplate',
      1 => 'field_donor_last_name_bookplate',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'classes' => '',
        'attributes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_donors|node|bookplates|bookplates_landing_page'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_donors|node|bookplates|default';
  $field_group->group_name = 'group_donors';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'bookplates';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Donor(s)',
    'weight' => '2',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'classes' => '',
        'attributes' => '',
        'required_fields' => 1,
        'description' => '',
      ),
    ),
  );
  $export['group_donors|node|bookplates|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_donors|node|bookplates|form';
  $field_group->group_name = 'group_donors';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'bookplates';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Donors',
    'weight' => '1',
    'children' => array(),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'classes' => '',
        'attributes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_donors|node|bookplates|form'] = $field_group;

  return $export;
}
