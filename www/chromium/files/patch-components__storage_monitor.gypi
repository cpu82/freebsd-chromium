--- components/storage_monitor.gypi.orig	2014-09-04 00:04:15 UTC
+++ components/storage_monitor.gypi
@@ -50,6 +50,24 @@
         'storage_monitor/volume_mount_watcher_win.h',
       ],
       'conditions': [
+        ['os_bsd == 1', {
+          'sources!': [
+            'storage_monitor/media_transfer_protocol_device_observer_linux.cc',
+            'storage_monitor/media_transfer_protocol_device_observer_linux.h',
+            'storage_monitor/mtab_watcher_linux.cc',
+            'storage_monitor/mtab_watcher_linux.h',
+            'storage_monitor/storage_monitor_linux.cc',
+            'storage_monitor/storage_monitor_linux.h',
+            'storage_monitor/udev_util_linux.cc',
+            'storage_monitor/udev_util_linux.h',
+          ],
+        }],
+        ['OS == "freebsd"', {
+          'sources': [
+            'storage_monitor/storage_monitor_freebsd.cc',
+            'storage_monitor/storage_monitor_freebsd.h',
+          ],
+        }],
         ['OS == "mac"', {
           'link_settings': {
             'libraries': [
