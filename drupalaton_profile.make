api = 2
core = 7.x

defaults[projects][subdir] = "contrib"

; core
projects[drupal][type] = core
projects[drupal][version] = 7.28

; drupalaton_profile
projects[drupalaton][type] = profile
projects[drupalaton][download][type] = git
projects[drupalaton][download][url] = https://github.com/csakiistvan/drupalaton_profile.git
projects[drupalaton][download][branch] = master
projects[drupalaton][directory_name] = drupalaton_profile


; Contrib modules
projects[admin_menu][version] = 3.0-rc4
projects[features][version] = 2.0
projects[views][version] = 3.7
projects[ctools][version] = 1.4
projects[strongarm][version] = 2.0
projects[backup_migrate][version] = 2.8
projects[browserclass][version] = 1.5
projects[jquery_update][version] = 2.3
projects[token][version] = 1.5
projects[pathauto][version] = 1.2
projects[transliteration][version] = 3.1
projects[custom_pub][version] = 1.3
projects[diff][version] = 3.2
projects[panels][version] = 3.4
projects[codefilter][version] = 1.0
projects[google_analytics][version] = 1.4
projects[nodequeue][version] = 2.0-beta1
projects[features_extra][version] = 1.0-beta1
projects[module_filter][version] = 2.0-alpha2
projects[entity][version] = 1.3
projects[profile2][version] = 1.3

; User interface
projects[ckeditor][type] = "module"
projects[ckeditor][download][type] = "git"
projects[ckeditor][download][url] = "http://git.drupal.org/project/ckeditor.git"
; Use Libraries API for ckeditor.
; http://drupal.org/node/1063482#comment-6964504
projects[ckeditor][download][branch] = "7.x-1.x"
projects[ckeditor][download][revision] = "f6abbda"

; Fatal error if Libraries module is enabled after CKEditor
; http://drupal.org/node/1898294#comment-6980796
projects[ckeditor][patch][] = "http://drupal.org/files/ckeditor-install-lib-1898294-2.patch"


libraries[ckeditor][download][type] = "get"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%204.0/ckeditor_4.0_standard.tar.gz"
libraries[ckeditor][type] = "libraries"
