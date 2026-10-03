// FUNCTION: BF2 0x537e20
namespace dice { namespace hfe { namespace world {
void* getActiveWeapon_0x537e20(void* self, int idx) {
    if (((bool (*)(void*))(*(void***)self)[0xac])(self)) {
        void* p = *(void**)((char*)self + 0x270);
        void* q = p ? *(void**)((char*)p + 8) : 0;
        return ((void* (*)(void*, int))(*(void***)q)[0x73])(q, idx);
    }
    return *(void**)((char*)self + 0x398 + (long long)idx * 8);
}
} } }
