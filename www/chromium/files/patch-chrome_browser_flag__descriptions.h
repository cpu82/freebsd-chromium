--- chrome/browser/flag_descriptions.h.orig	2019-09-09 21:55:09 UTC
+++ chrome/browser/flag_descriptions.h
@@ -2074,10 +2074,10 @@ extern const char kWakeOnPacketsDescription[];
 
 #endif  // #if defined(OS_CHROMEOS)
 
-#if defined(OS_CHROMEOS) || defined(OS_LINUX)
+#if defined(OS_CHROMEOS) || defined(OS_LINUX) || defined(OS_BSD)
 extern const char kTerminalSystemAppName[];
 extern const char kTerminalSystemAppDescription[];
-#endif  // #if defined(OS_CHROMEOS) || defined(OS_LINUX)
+#endif  // #if defined(OS_CHROMEOS) || defined(OS_LINUX) || defined(OS_BSD)
 
 // All views-based platforms --------------------------------------------------
 
@@ -2096,14 +2096,14 @@ extern const char kReopenTabInProductHelpDescription[]
 
 // Random platform combinations -----------------------------------------------
 
-#if defined(OS_WIN) || defined(OS_LINUX) || defined(OS_CHROMEOS)
+#if defined(OS_WIN) || defined(OS_LINUX) || defined(OS_CHROMEOS) || defined(OS_BSD)
 
 extern const char kWebGL2ComputeContextName[];
 extern const char kWebGL2ComputeContextDescription[];
 
-#endif  // defined(OS_WIN) || defined(OS_LINUX) || defined(OS_CHROMEOS)
+#endif  // defined(OS_WIN) || defined(OS_LINUX) || defined(OS_CHROMEOS) || defined(OS_BSD)
 
-#if defined(OS_WIN) || defined(OS_MACOSX) || defined(OS_LINUX)
+#if defined(OS_WIN) || defined(OS_MACOSX) || defined(OS_LINUX) || defined(OS_BSD)
 
 extern const char kDirectManipulationStylusName[];
 extern const char kDirectManipulationStylusDescription[];
@@ -2114,7 +2114,7 @@ extern const char kAnimatedAvatarButtonDescription[];
 extern const char kClickToCallUIName[];
 extern const char kClickToCallUIDescription[];
 
-#endif  // defined(OS_WIN) || defined(OS_MACOSX) || defined(OS_LINUX)
+#endif  // defined(OS_WIN) || defined(OS_MACOSX) || defined(OS_LINUX) || defined(OS_BSD)
 
 #if defined(OS_MACOSX) || defined(OS_CHROMEOS)
 
@@ -2208,12 +2208,12 @@ extern const char kWebrtcPipeWireCapturerDescription[]
 
 #endif  // #if defined(WEBRTC_USE_PIPEWIRE)
 
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_BSD)
 
 extern const char kEnableDbusAndX11StatusIconsName[];
 extern const char kEnableDbusAndX11StatusIconsDescription[];
 
-#endif  // defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#endif  // (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_BSD)
 
 // ============================================================================
 // Don't just add flags to the end, put them in the right section in
