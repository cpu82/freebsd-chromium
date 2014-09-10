--- chrome/browser/web_applications/web_app.cc.orig	2014-09-04 00:29:10 UTC
+++ chrome/browser/web_applications/web_app.cc
@@ -424,7 +424,7 @@
 }
 #endif
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_FREEBSD)
 std::string GetWMClassFromAppName(std::string app_name) {
   base::i18n::ReplaceIllegalCharactersInPath(&app_name, '_');
   base::TrimString(app_name, "_", &app_name);
