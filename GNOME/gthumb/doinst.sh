if [ -x /usr/bin/rarian-sk-update ]; then
  /usr/bin/rarian-sk-update 1> /dev/null 2> /dev/null
fi

if [ -x /usr/bin/update-mime-database ]; then
  /usr/bin/update-mime-database /usr/share/mime >/dev/null 2>&1
fi

if [ -x /usr/bin/update-desktop-database ]; then
  /usr/bin/update-desktop-database -q /usr/share/applications >/dev/null 2>&1
fi

if [ -r /usr/share/icons/hicolor/icon-theme.cache ]; then
  if [ -x /usr/bin/gtk-update-icon-cache ]; then
    /usr/bin/gtk-update-icon-cache -q /usr/share/icons/hicolor >/dev/null 2>&1
  fi
fi

if [ -x /usr/bin/glib-compile-schemas -a -d /usr/share/glib-2.0/schemas ]; then
  /usr/bin/glib-compile-schemas /usr/share/glib-2.0/schemas >/dev/null 2>&1
fi

