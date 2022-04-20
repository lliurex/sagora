#!/bin/bash

set -e

mkdir -p /tmp/linuxdeploy
(cd /tmp/linuxdeploy; linuxdeployqt --appimage-extract;)

# generate Makefile
qmake

# do the actual build
make

# prepare the appdir
rm -rf appdir/
mkdir -p appdir/
mkdir -p appdir/usr/bin/
mkdir -p appdir/usr/share/applications/
mkdir -p appdir/usr/share/icons/hicolor/64x64/

cp Sagora                   appdir/usr/bin/Sagora
cp Sagora.desktop           appdir/usr/share/applications/
cp src/res/mainicon.png     appdir/usr/share/icons/hicolor/64x64/Sagora.png

# generate appimage
/tmp/linuxdeploy/squashfs-root/AppRun appdir/usr/share/applications/Sagora.desktop -appimage
