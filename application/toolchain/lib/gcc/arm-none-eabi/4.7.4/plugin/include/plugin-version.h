#include "configargs.h"

#define GCCPLUGIN_VERSION_MAJOR   4
#define GCCPLUGIN_VERSION_MINOR   7
#define GCCPLUGIN_VERSION_PATCHLEVEL   4
#define GCCPLUGIN_VERSION  (GCCPLUGIN_VERSION_MAJOR*1000 + GCCPLUGIN_VERSION_MINOR)

static char basever[] = "4.7.4";
static char datestamp[] = "20130913";
static char devphase[] = "release";
static char revision[] = "[ARM/embedded-4_7-branch revision 202601]";

/* FIXME plugins: We should make the version information more precise.
   One way to do is to add a checksum. */

static struct plugin_gcc_version gcc_version = {basever, datestamp,
						devphase, revision,
						configuration_arguments};
