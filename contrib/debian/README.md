
Debian
====================
This directory contains files used to package ghost_prismd/ghost_prism-qt
for Debian-based Linux systems. If you compile ghost_prismd/ghost_prism-qt yourself, there are some useful files here.

## ghost_prism: URI support ##


ghost_prism-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install ghost_prism-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your ghost_prism-qt binary to `/usr/bin`
and the `../../share/pixmaps/ghost_prism128.png` to `/usr/share/pixmaps`

ghost_prism-qt.protocol (KDE)

