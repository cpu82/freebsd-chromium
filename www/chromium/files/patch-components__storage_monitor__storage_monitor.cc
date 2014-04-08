--- ./components/storage_monitor/storage_monitor.cc.orig	2014-04-02 21:03:06.000000000 +0200
+++ ./components/storage_monitor/storage_monitor.cc	2014-04-04 01:39:18.000000000 +0200
@@ -83,6 +83,7 @@
 
 void StorageMonitor::EnsureInitialized(base::Closure callback) {
   DCHECK(thread_checker_.CalledOnValidThread());
+//#if !defined(OS_BSD) //XXX(rene) why disabled?
   if (initialized_) {
     if (!callback.is_null())
       callback.Run();
@@ -98,6 +99,7 @@
 
   initializing_ = true;
   Init();
+//#endif
 }
 
 bool StorageMonitor::IsInitialized() const {
