--- third_party/webrtc/system_wrappers/source/atomic32_posix.cc.orig	2014-09-04 00:29:44 UTC
+++ third_party/webrtc/system_wrappers/source/atomic32_posix.cc
@@ -12,7 +12,11 @@
 
 #include <assert.h>
 #include <inttypes.h>
+#if defined(WEBRTC_BSD)
+#include <stdlib.h>
+#else
 #include <malloc.h>
+#endif
 
 #include "webrtc/common_types.h"
 
