--- ./chrome/common/pref_names.h.orig	2014-04-02 21:04:09.000000000 +0200
+++ ./chrome/common/pref_names.h	2014-04-04 01:39:18.000000000 +0200
@@ -306,7 +306,7 @@
 extern const char kForceSafeSearch[];
 extern const char kDeleteTimePeriod[];
 extern const char kLastClearBrowsingDataTime[];
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_BSD)
 extern const char kUsesSystemTheme[];
 #endif
 extern const char kCurrentThemePackFilename[];
