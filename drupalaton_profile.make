api = 2
core = 7.x

; core
projects[drupal][type] = core

; drupalaton_profile 
projects[drupalaton][type] = profile
projects[drupalaton][download][type] = git
projects[drupalaton][download][url] = git@github.com:csakiistvan/drupalaton_profile.git
projects[drupalaton][download][branch] = master
projects[drupalaton][directory_name] = drupalaton_profile


; Contrib modules
projects[admin_menu][subdir] = contrib
projects[admin_menu][version] = 3.0-rc4
projects[features][subdir] = contrib
projects[features][version] = 2.0-beta2
projects[views][subdir] = contrib
projects[views][version] = 3.7
projects[ctools][subdir] = contrib
projects[ctools][version] = 1.3
projects[strongarm][subdir] = contrib
projects[strongarm][version] = 2.0
projects[backup_migrate][subdir] = contrib
projects[backup_migrate][version] = 2.4
projects[browserclass][subdir] = contrib
projects[browserclass][version] = 1.5
projects[bootstrap][subdir] = contrib
projects[bootstrap][version] = 2.0
projects[jquery_update][subdir] = contrib
projects[jquery_update][version] = 2.3
projects[token][subdir] = contrib
projects[token][version] = 1.5
projects[pathauto][subdir] = contrib
projects[pathauto][version] = 1.2
projects[transliteration][subdir] = contrib
projects[transliteration][version] = 3.1