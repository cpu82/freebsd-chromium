--- base/process/memory_stubs.cc.orig	2017-06-05 19:03:00 UTC
+++ base/process/memory_stubs.cc
@@ -31,6 +31,8 @@ void TerminateBecauseOutOfMemory(size_t size) {
 // their respective stdlib function since those functions will return null on a
 // failure to allocate.
 
+#if !defined(OS_FREEBSD)
+// FreeBSD brings it's own implementation in memory.cc -- cmt
 bool UncheckedMalloc(size_t size, void** result) {
   *result = malloc(size);
   return *result != nullptr;
@@ -40,5 +42,6 @@ bool UncheckedCalloc(size_t num_items, size_t size, vo
   *result = calloc(num_items, size);
   return *result != nullptr;
 }
+#endif
 
 }  // namespace base
