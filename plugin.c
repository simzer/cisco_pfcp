/*
 * Do not modify this file. Changes will be overwritten.
 *
 * Generated automatically from E:\Development\wireshark\tools\make-plugin-reg.py.
 */

#include "config.h"

#include <gmodule.h>

/* plugins are DLLs */
#define WS_BUILD_DLL
#include "ws_symbol_export.h"

#include "epan/proto.h"

void proto_register_pfcp(void);
void proto_reg_handoff_pfcp(void);

WS_DLL_PUBLIC_DEF const gchar plugin_version[] = "0.1.0";
WS_DLL_PUBLIC_DEF const gchar plugin_release[] = "2.6";
//WS_DLL_PUBLIC_DEF const int plugin_want_major = VERSION_MAJOR;
//WS_DLL_PUBLIC_DEF const int plugin_want_minor = VERSION_MINOR;

WS_DLL_PUBLIC void plugin_register(void);

void plugin_register(void)
{
	static proto_plugin plug;

	plug.register_protoinfo = proto_register_pfcp;
	plug.register_handoff = proto_reg_handoff_pfcp;
	proto_register_plugin(&plug);
}
