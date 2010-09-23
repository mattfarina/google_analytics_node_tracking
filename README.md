# Google Analytics Node Tracking
This module/feature provides the ability for Google Analytics to track the node types on pages that
are nodes and provides a block tracking the most popular nodes for each node type.

## Notes
- A url with the custom variable is not seen as the same as a url without the
  custom variable added. So, the analytics with the variable tracking included
  in this module do not follow all the stats for the site before the module was
  enabled with the additional data is provides.

- If you are using custom variables for Google Analytics already you will need
  to alter the code of this module/feature and the variable within the Google
  Analytics module.

## Installation

1. Enable block caching on /admin/settings/performance. Without block caching
   being enabled a request is made to Google Analytics on ever page load. With
   caching enabled the blocks are cached site wide until the cache is cleared.
   At a minimum the cache is regularly cleared when the cron is run.

2. Install, enable, and configure (with your code) the Google Analytics module
   at http://drupal.org/project/google_analytics.

3. Install and enable the Google Analytics API module at
   http://drupal.org/project/google_analytics_api.

4. Authorize your domain to access the analytics and select the profile to use
   at /admin/settings/google-analytics-api. You will need to do this for your
   domain and any development domains. In your 'My Account' settings within
   Google Analytics you can later revoke access for domains.

5. Give anonymous and authenticated user the 'administer Google Analytics settings'.
   This permission name is a misnomer. The way it is implemented is as an access
   permission not an administer permission. Users who do not have this permission
   cannot view the results of a query to the Google Analytics API. The admin
   permissions are handled through a core permission.

6. Enable Google Analytics Node Tracking and place your blocks displaying the
   results.