// FUNCTION: BF2 0x68cb90
namespace dice { namespace hfe {
void markObjectAsCreated_0x68cb90(void* self, void* obj) {
    for (void* it = obj; it; it = *(void**)((char*)it + 0x58)) {
        ((void (*)(void*, int))(*(void***)it)[0xc])(it, *(int*)((char*)self + 0x30));
        markObjectAsCreated_0x68cb90(self, ((void* (*)(void*))(*(void***)it)[0x3c])(it));
    }
}
} }
