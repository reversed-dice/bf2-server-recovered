// FUNCTION: BF2 0x818c20
namespace dice { namespace hfe {
extern void* fn_817b70(void* a);
char* ghttpGetURL_0x818c20(void* self) {
    void* p = fn_817b70(self);
    if (!p)
        return 0;
    return *(char**)((char*)p + 0x18);
}
} }
