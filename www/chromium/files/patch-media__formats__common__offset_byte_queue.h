--- media/formats/common/offset_byte_queue.h.orig	2016-03-04 23:07:32.287519616 +0100
+++ media/formats/common/offset_byte_queue.h	2016-03-04 23:07:40.295545738 +0100
@@ -36,15 +36,15 @@
   // a null |buf| and a |size| of zero.
   void PeekAt(int64_t offset, const uint8_t** buf, int* size);
 
-  // Marks the bytes up to (but not including) |max_offset| as ready for
+  // Marks the bytes up to (but not including) |_max_offset| as ready for
   // deletion. This is relatively inexpensive, but will not necessarily reduce
   // the resident buffer size right away (or ever).
   //
   // Returns true if the full range of bytes were successfully trimmed,
-  // including the case where |max_offset| is less than the current head.
-  // Returns false if |max_offset| > tail() (although all bytes currently
+  // including the case where |_max_offset| is less than the current head.
+  // Returns false if |_max_offset| > tail() (although all bytes currently
   // buffered are still cleared).
-  bool Trim(int64_t max_offset);
+  bool Trim(int64_t _max_offset);
 
   // The head and tail positions, in terms of the file's absolute offsets.
   // tail() is an exclusive bound.
