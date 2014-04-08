--- ./chrome/browser/gpu/gpu_feature_checker.cc.orig	2014-04-02 21:04:22.000000000 +0200
+++ ./chrome/browser/gpu/gpu_feature_checker.cc	2014-04-04 01:39:18.000000000 +0200
@@ -33,7 +33,7 @@
   CHECK(content::BrowserThread::CurrentlyOn(content::BrowserThread::UI));
 
   bool finalized = true;
-#if defined(OS_LINUX)
+#if defined(OS_POSIX) && !defined(OS_MACOSX) && !defined(OS_ANDROID)
   // On Windows and Mac, so far we can always make the final WebGL blacklisting
   // decision based on partial GPU info; on Linux, we need to launch the GPU
   // process to collect full GPU info and make the final decision.
