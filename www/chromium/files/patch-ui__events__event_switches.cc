--- ./ui/events/event_switches.cc.orig	2014-04-02 21:04:02.000000000 +0200
+++ ./ui/events/event_switches.cc	2014-04-04 01:39:19.000000000 +0200
@@ -20,7 +20,7 @@
 //   disabled: touch events are disabled.
 const char kTouchEventsDisabled[] = "disabled";
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_FREEBSD)
 // Tells chrome to interpret events from these devices as touch events. Only
 // available with XInput 2 (i.e. X server 1.8 or above). The id's of the
 // devices can be retrieved from 'xinput list'.
