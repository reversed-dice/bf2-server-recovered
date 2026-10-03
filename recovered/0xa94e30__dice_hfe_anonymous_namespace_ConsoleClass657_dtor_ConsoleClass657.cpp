// FUNCTION: BF2 0xa94e30
namespace dice { namespace hfe { namespace anonymous_namespace {

extern "C" void func_0x00756000(void*);
extern "C" void func_0x004085b8(void*);
extern "C" int func_0x00408368(long*, int);
extern "C" void func_0x00407bb8(void*, void*);

struct Rep { long len; long cap; long refcnt; };

void dtor_0xa94e30(void* p) {
    char alloc[0x10];
    char* data = *(char**)((char*)p + 0x110);
    Rep* rep = (Rep*)(data - 0x18);
    *(void**)p = (void*)0xc6df30;
    if (rep != (Rep*)0xf6c6d0) {
        goto cleanup;
    }
back:
    func_0x00756000(p);
    func_0x004085b8(p);
    return;
cleanup:
    if (func_0x00408368(&rep->refcnt, -1) <= 0) {
        func_0x00407bb8(rep, alloc + 0x17);
    }
    goto back;
}

} } }
// REVERSED_FUNCTION: dice_hfe_anonymous_namespace_ConsoleClass657_dtor_ConsoleClass657 (0xa94e30)
