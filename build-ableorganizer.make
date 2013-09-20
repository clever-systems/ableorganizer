api = 2
core = 7.23

projects[drupal][version] = 7.23

includes[] = drupal-org.make

; Download the install profile and recursively build all its dependencies
projects[crm_core_event_demo][version] = 0.1

; for testing development releases
; projects[crm_core_event_demo][type] = profile
; projects[crm_core_event_demo][download][type] = git
; projects[crm_core_event_demo][download][branch] = 7.x-1.x
