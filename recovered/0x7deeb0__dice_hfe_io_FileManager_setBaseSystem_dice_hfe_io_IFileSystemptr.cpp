// FUNCTION: BF2 0x7deeb0
namespace dice { namespace hfe { namespace io {
void setBaseSystem_0x7deeb0(void* self, void* sys) {
    void* p = *(void**)((char*)self + 0x40);
    if (p)
        ((void (*)(void*))(*(void***)p)[0x2])(p);
    *(void**)((char*)self + 0x40) = sys;
    if (!sys)
        return;
    ((void (*)(void*))(*(void***)sys)[0x4])(sys);
    ((void (*)(void*))(*(void***)*(void**)((char*)self + 0x40))[0])(*(void**)((char*)self + 0x40));
}
} } }
