<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function google_analytics_node_tracking_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}
