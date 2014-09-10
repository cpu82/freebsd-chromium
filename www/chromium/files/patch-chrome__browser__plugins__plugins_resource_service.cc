--- chrome/browser/plugins/plugins_resource_service.cc.orig	2014-09-04 00:04:11 UTC
+++ chrome/browser/plugins/plugins_resource_service.cc
@@ -33,7 +33,7 @@
   std::string filename;
 #if defined(OS_WIN)
   filename = "plugins_win.json";
-#elif defined(OS_LINUX)
+#elif defined(OS_LINUX) || defined(OS_BSD)
   filename = "plugins_linux.json";
 #elif defined(OS_MACOSX)
   filename = "plugins_mac.json";
