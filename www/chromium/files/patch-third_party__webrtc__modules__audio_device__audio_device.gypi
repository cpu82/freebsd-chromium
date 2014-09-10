--- third_party/webrtc/modules/audio_device/audio_device.gypi.orig	2014-09-04 00:29:43 UTC
+++ third_party/webrtc/modules/audio_device/audio_device.gypi
@@ -49,7 +49,7 @@
         'dummy/file_audio_device.h',
       ],
       'conditions': [
-        ['OS=="linux"', {
+        ['OS=="linux" or os_bsd==1', {
           'include_dirs': [
             'linux',
           ],
@@ -150,7 +150,7 @@
                 ],
               },
             }],
-            ['OS=="linux"', {
+            ['OS=="linux" or OS=="freebsd"', {
               'defines': [
                 'LINUX_ALSA',
               ],
