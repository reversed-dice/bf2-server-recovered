// FUNCTION: BF2 0x4554a0
namespace dice { namespace hfe {
class NetworkableDescriptor;
class ServerConnection;
extern "C" void* fn_407468(void* node);
extern "C" void fn_43c530(ServerConnection* c, NetworkableDescriptor* d, float f);
void addScopableGhost(char* self, NetworkableDescriptor* d) {
    char* end = self + 0xf0;
    char* it = *(char**)(self + 0x100);
    while (it != end) {
        ServerConnection* c = *(ServerConnection**)(it + 0x28);
        if (*(int*)((char*)c + 0x18) > 3) {
            fn_43c530(c, d, 500.0f);
        }
        it = (char*)fn_407468(it);
    }
}
} }
