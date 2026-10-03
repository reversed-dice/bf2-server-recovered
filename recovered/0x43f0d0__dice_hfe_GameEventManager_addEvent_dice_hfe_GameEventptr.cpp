// FUNCTION: BF2 0x43f0d0
namespace dice { namespace hfe {
int addEvent_0x43f0d0(void* self, void* ev) {
    if (!*(char*)((char*)self + 0x238)) {
        return ((bool (*)(void*))(*(void***)self)[0x11])(self);
    }
    if (!ev)
        return 1;
    ((void (*)(void*))(*(void***)ev)[0x2])(ev);
    return 1;
}
} }
