--- net/http/http_auth_gssapi_posix.cc.orig	2017-03-09 20:04:35 UTC
+++ net/http/http_auth_gssapi_posix.cc
@@ -431,8 +431,8 @@ base::NativeLibrary GSSAPISharedLibrary:
     static const char* const kDefaultLibraryNames[] = {
 #if defined(OS_MACOSX)
       "/System/Library/Frameworks/GSS.framework/GSS"
-#elif defined(OS_OPENBSD)
-      "libgssapi.so"          // Heimdal - OpenBSD
+#elif defined(OS_BSD)
+      "libgssapi.so"          // Heimdal - OpenBSD, FreeBSD
 #else
       "libgssapi_krb5.so.2",  // MIT Kerberos - FC, Suse10, Debian
       "libgssapi.so.4",       // Heimdal - Suse10, MDK
