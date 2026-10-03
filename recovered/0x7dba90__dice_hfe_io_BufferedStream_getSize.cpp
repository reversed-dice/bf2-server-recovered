// FUNCTION: BF2 0x7dba90
namespace dice { namespace hfe { namespace io {
void* getSize_0x7dba90(void* self) {
    void* p = ((void* (*)(void*))(*(void***)self)[0xb])(self);
    void* q = *(void**)((char*)self + 0x28);
    if (q) {
        void* r = ((void* (*)(void*))(*(void***)q)[0xe])(q);
        return r;
    }
    return 0;
}
} } }
