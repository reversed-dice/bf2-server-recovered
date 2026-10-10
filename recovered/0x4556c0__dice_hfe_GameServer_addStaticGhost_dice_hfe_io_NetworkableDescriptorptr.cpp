// FUNCTION: BF2 0x4556c0
namespace dice { namespace hfe {
class NetworkableDescriptor;
class GhostManager;
class ServerConnection;
extern "C" void* fn_407468(void* node);
extern "C" void fn_445150(GhostManager* g, NetworkableDescriptor* d, float f, bool b);
void addStaticGhost(char* self, NetworkableDescriptor* d) {
    char* end = self + 0xf0;
    char* it = *(char**)(self + 0x100);
    while (it != end) {
        ServerConnection* c = *(ServerConnection**)(it + 0x28);
        if (*(int*)((char*)c + 0x18) > 2) {
            fn_445150(*(GhostManager**)((char*)c + 0x40), d, -1.0f, false);
        }
        it = (char*)fn_407468(it);
    }
}
} }
