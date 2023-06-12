<?php
/* config.inc Configuration for oAuth Demo project
 *
 * Katy Nicholson, last updated 17/11/2021
 *
 * https://github.com/CoasterKaty
 * https://katytech.blog/
 * https://twitter.com/coaster_katy
 *
 

***RENAME TO config.inc ***

*/
// MySQL connection details
define('_MYSQL_HOST', 'localhost');
define('_MYSQL_USER', 'oauthdemo');
define('_MYSQL_DB', 'oauthdemo');
define('_MYSQL_PASS', 'Bsit@2023');


// oAuth details



// TENANTID: Your tenant's ID if you set up the app reg as single tenant, otherwise 'common'

//Scope needs to include the services you wish to access - at a minimum you'll need openid and offline_access for logging on to work. Add in user.read if you want to query user profile via Graph. Separate with %20.

define('_OAUTH_TENANTID', '7bad73cd-f50e-453a-952e-f363dfb14c33');
define('_OAUTH_CLIENTID', 'cc590112-9290-4a10-b105-c1d05c94d1a1');
define('_OAUTH_LOGOUT', 'https://login.microsoftonline.com/common/wsfederation?wa=wsignout1.0');
define('_OAUTH_SCOPE', 'openid%20offline_access%20profile%20user.read');

// Define either the client secret, or the client certificate details
// method = 'certificate' or 'secret'

define('_OAUTH_METHOD', 'secret');

define('_OAUTH_SECRET', 'aeA8Q~jmeq3iMhzdZDEuX1aipMVKWF1pbVBnKbCt');
define('_OAUTH_AUTH_CERTFILE', '/path/to/certificate.crt');
define('_OAUTH_AUTH_KEYFILE', '/path/to/privatekey.pem');

// on Windows, the certificate paths should be in the form c:/path/to/cert.crt


// URL to this website, no trailing slash.
define('_URL', 'http://localhost');
?>
