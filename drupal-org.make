; crm core event demo make file
api = 2
core = 7.23

; crm core prerequisites
projects[views][version] = 3.7
projects[views][subdir] = "contrib"
projects[views_bulk_operations][version] = 3.1
projects[views_bulk_operations][subdir] = "contrib"
projects[views_data_export][version] = 3.0-beta6
projects[views_data_export][subdir] = "contrib"
projects[ctools][version] = 1.3
projects[ctools][subdir] = "contrib"
projects[entity][version] = 1.2
projects[entity][subdir] = "contrib"
projects[entity][patch][] = "https://drupal.org/files/unformatted_replacements-2082407-1.patch"
projects[entityreference][version] = 1.0
projects[entityreference][subdir] = "contrib"
projects[relation][version] = 1.0-rc4
projects[relation][subdir] = "contrib"
projects[token][version] = 1.5
projects[token][subdir] = "contrib"
projects[panels][version] = 3.3
projects[panels][subdir] = "contrib"
projects[rules][version] = 2.5
projects[rules][subdir] = "contrib"
projects[libraries][version] = 2.1
projects[libraries][subdir] = "contrib"

; fields
projects[name][type] = module
projects[name][download][type] = git
projects[name][download][revision] = 81f94b50be6af80d02656896a66692b34f4adf3e
projects[name][download][branch] = 7.x-1.x
projects[name][subdir] = "contrib"
projects[field_group][version] = 1.2
projects[field_group][subdir] = "contrib"
projects[cck_phone][type] = module
projects[cck_phone][download][type] = git
projects[cck_phone][download][revision] = 61ccc9fb055f2eefa29e8d654ec2794ecb32b119
projects[cck_phone][download][branch] = 7.x-1.x
projects[cck_phone][subdir] = "contrib"
projects[link][version] = 1.1
projects[link][subdir] = "contrib"
projects[email][version] = 1.2
projects[email][subdir] = "contrib"
projects[addressfield][version] = 1.0-beta4
projects[addressfield][subdir] = "contrib"
projects[date][version] = 2.6
projects[date][subdir] = "contrib"
projects[select_or_other][version] = 2.20
projects[select_or_other][subdir] = "contrib"

; helper modules
projects[flot][type] = module
projects[flot][subdir] = "contrib"
projects[flot][download][type] = git
projects[flot][download][branch] = 7.x-1.x
projects[flot][download][revision] = 516ecd418878d3a10abd38342862a4fafdf12179
projects[flot][patch][] = "https://drupal.org/files/flot-php54compat_0.patch"
projects[flot][patch][] = "https://drupal.org/files/flot-pie_options-2088021-3.patch"

projects[mailsystem][version] = 2.34
projects[mailsystem][subdir] = "contrib"
projects[mimemail][version] = 1.0-alpha2
projects[mimemail][subdir] = "contrib"
projects[admin_menu][version] = 3.0-rc4
projects[admin_menu][subdir] = "contrib"
projects[features][version] = 2.0-rc3
projects[features][subdir] = "contrib"
projects[context][version] = 3.0-beta7
projects[context][subdir] = "contrib"
projects[strongarm][version] = 2.0
projects[strongarm][subdir] = "contrib"
projects[calendar][version] = 3.4
projects[calendar][subdir] = "contrib"
projects[calendar][patch][] = "https://drupal.org/files/calendar-php54-1471400-58.patch"

; commerce modules
projects[commerce][version] = 1.8
projects[commerce][subdir] = "contrib"
projects[commerce_order_reference][version] = 1.0-alpha1
projects[commerce_order_reference][subdir] = "contrib"
projects[commerce_features][version] = 1.0-rc1
projects[commerce_features][subdir] = "contrib"
projects[commerce_custom_product][version] = 1.0-beta2
projects[commerce_custom_product][subdir] = "contrib"
projects[commerce_authnet][version] = 1.1
projects[commerce_authnet][subdir] = "contrib"
projects[commerce_paypal][version] = 2.2
projects[commerce_paypal][subdir] = "contrib"

; download crm core modules
projects[crm_core][version] = 0.961
projects[crm_core][subdir] = "contrib"

; download crm core profile
projects[crm_core_profile][version] = 1.0-beta5
projects[crm_core_profile][subdir] = "contrib"

; download crm core profile commerce items
projects[crm_core_profile_commerce_items][version] = 0.3
projects[crm_core_profile_commerce_items][subdir] = "contrib"

; download crm core donations
projects[crm_core_donation][version] = 1.6
projects[crm_core_donation][subdir] = "contrib"

; download crm core events
projects[crm_core_event][version] = 0.4
projects[crm_core_event][subdir] = "contrib"

; download crm core petitions
projects[crm_core_petition][version] = 0.3
projects[crm_core_petition][subdir] = "contrib"

; download crm core volunteers
projects[crm_core_volunteer][version] = 0.4
projects[crm_core_volunteer][subdir] = "contrib"

; download standard fields
projects[crm_core_demo_standard_fields][version] = 1.2
projects[crm_core_demo_standard_fields][subdir] = "contrib"

; libraries
libraries[flot][download][type] = get
libraries[flot][download][url] = https://flot.googlecode.com/files/flot-0.7.tar.gz
libraries[flot][destination] = modules/contrib/flot

; sample content
projects[uuid][version] = 1.0-alpha5
projects[uuid][subdir] = "contrib"
projects[uuid_features][version] = 1.0-alpha3
projects[uuid_features][subdir] = "contrib"
