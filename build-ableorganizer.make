api = 2
core = 7.23

projects[drupal][version] = 7.23

includes[] = drupal-org.make

; Download the install profile and recursively build all its dependencies
;projects[ableorganizer][version] = 0.1

; for testing development releases
projects[ableorganizer][type] = profile
projects[ableorganizer][download][type] = git
projects[ableorganizer][download][branch] = 7.x-1.x
projects[ableorganizer][download][url] = "http://git.drupal.org/sandbox/RoSk0/2093907.git"
