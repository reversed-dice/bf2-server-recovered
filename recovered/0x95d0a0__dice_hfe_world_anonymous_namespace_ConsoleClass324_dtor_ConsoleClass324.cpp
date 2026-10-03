// FUNCTION: BF2 0x95d0a0
namespace dice { namespace hfe { namespace anonymous_namespace {

extern "C" void func_0x00756000(void*);
extern "C" int func_0x00408368(long*, int);
extern "C" void func_0x00407bb8(void*, void*);

struct Rep { long len; long cap; long refcnt; };

void dtor_0x95d0a0(void* p) {
    char alloc[0x10];
    char* data = *(char**)((char*)p + 0x110);
    Rep* rep = (Rep*)(data - 0x18);
    *(void**)p = (void*)0xbdb050;
    if (rep != (Rep*)0xf6c6d0) {
        goto cleanup;
    }
back:
    func_0x00756000(p);
    return;
cleanup:
    if (func_0x00408368(&rep->refcnt, -1) <= 0) {
        func_0x00407bb8(rep, alloc + 0x17);
    }
    goto back;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass324_dtor_ConsoleClass324 (0x95d0a0)
