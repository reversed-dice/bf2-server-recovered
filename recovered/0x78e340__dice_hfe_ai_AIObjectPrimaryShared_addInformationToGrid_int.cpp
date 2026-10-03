// FUNCTION: BF2 0x78e340
namespace dice { namespace hfe { namespace ai {
void addInformation_0x78e340(void* self) {
    int idx = *(int*)((char*)self + 0x64);
    if (idx != -1 && !*(char*)((char*)self + 0x18)) {
        void* s = *(void**)0x010ade50;
        void* fn = (*(void***)s)[0x2];
        bool r = ((bool (*)(void*))(*(void***)self)[0x1d])(self);
        ((void (*)(void*, int, bool, int))fn)(s, 0, r, idx);
        *(char*)((char*)self + 0x18) = 1;
    }
}
} } }
