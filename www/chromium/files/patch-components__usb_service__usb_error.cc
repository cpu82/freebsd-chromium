--- components/usb_service/usb_error.cc.orig	2014-09-04 00:04:15 UTC
+++ components/usb_service/usb_error.cc
@@ -4,7 +4,11 @@
 
 #include "components/usb_service/usb_error.h"
 
+#if defined(__FreeBSD__)
+#include "libusb.h"
+#else
 #include "third_party/libusb/src/libusb/libusb.h"
+#endif
 
 namespace usb_service {
 
