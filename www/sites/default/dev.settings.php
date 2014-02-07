<?php

// Setup DB
$databases = array (
  'default' =>
  array (
    'default' =>
    array (
      'database' => 'uclalib',
      'username' => 'uclalib',
      'password' => 'uclalib',
      'host' => 'localhost',
      'port' => '',
      'driver' => 'mysql',
      'prefix' => '',
    ),
  ),
);

// Tell Drupal that we are behind a reverse proxy server
$conf['reverse_proxy'] = TRUE;

// List of trusted IPs (IP numbers of our reverse proxies)
$conf['reverse_proxy_addresses'] = array(
  '127.0.0.1',
);

// Solr settings
$conf['search_api_solr_overrides'] = array(
  'uclalib_solr_server' => array(
    'name' => t('Solr Server (Staging)'),
    'options' => array(
      'host' => 'sky.bluespark.com',
      'port' => '8080',
      'path' => '/solr/uclalibdev',
    ),
  ),
);
