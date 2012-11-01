schema_install() {
  SCHEMA="$1"
  GCONF_CONFIG_SOURCE="xml::etc/gconf/gconf.xml.defaults" \
  chroot . gconftool-2 --makefile-install-rule \
    /etc/gconf/schemas/$SCHEMA \
    1>/dev/null
}

schema_install desktop_gnome_accessibility_keyboard.schemas
schema_install desktop_gnome_accessibility_startup.schemas
schema_install desktop_gnome_applications_at_mobility.schemas
schema_install desktop_gnome_applications_at_visual.schemas
schema_install desktop_gnome_applications_browser.schemas
schema_install desktop_gnome_applications_office.schemas
schema_install desktop_gnome_applications_terminal.schemas
schema_install desktop_gnome_applications_window_manager.schemas
schema_install desktop_gnome_background.schemas
schema_install desktop_gnome_file_views.schemas
schema_install desktop_gnome_interface.schemas
schema_install desktop_gnome_lockdown.schemas
schema_install desktop_gnome_peripherals_keyboard.schemas
schema_install desktop_gnome_peripherals_mouse.schemas
schema_install desktop_gnome_sound.schemas
schema_install desktop_gnome_thumbnail_cache.schemas
schema_install desktop_gnome_thumbnailers.schemas
schema_install desktop_gnome_typing_break.schemas

if [ -x /usr/bin/update-desktop-database ]; then
  /usr/bin/update-desktop-database -q /usr/share/applications >/dev/null 2>&1
fi

if [ -x /usr/bin/update-mime-database ]; then
  /usr/bin/update-mime-database /usr/share/mime >/dev/null 2>&1
fi

if [ -e /usr/share/icons/hicolor/icon-theme.cache ]; then
  if [ -x /usr/bin/gtk-update-icon-cache ]; then
    /usr/bin/gtk-update-icon-cache /usr/share/icons/hicolor >/dev/null 2>&1
  fi
fi
