<?php

/**
 * Implementation of hook_strongarm().
 */
function google_analytics_node_tracking_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'googleanalytics_codesnippet_before';
  $strongarm->value = '
if (Drupal.settings.GoogleAnalyticsNodeTracking.nodeType) {
  pageTracker._setCustomVar(1, "Node-Type", Drupal.settings.GoogleAnalyticsNodeTracking.nodeType);
};
';

  $export['googleanalytics_codesnippet_before'] = $strongarm;
  return $export;
}
