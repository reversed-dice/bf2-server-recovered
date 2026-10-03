// FUNCTION: BF2 0x64b600
// HTTPRequest dtor 0x64b600 — 2 fd-guards + null + ghttpCleanup + delete
namespace dice { namespace hfe {
extern "C" void ghttpCancelRequest(int fd);
extern "C" void ghttpCleanup();
extern "C" void gfree(void* p);
void dtor_64b600(void* p) {
    *(void**)p = (void*)0xb89750;
    if (*(int*)((char*)p + 0x18) >= 0) {
        ghttpCancelRequest(*(int*)((char*)p + 0x18));
    }
    if (*(void**)((char*)p + 0x10) != 0) {
        *(void**)((char*)p + 0x10) = 0;
    }
    if (*(int*)((char*)p + 0xc) >= 0) {
        ghttpCancelRequest(*(int*)((char*)p + 0xc));
    }
    ghttpCleanup();
    gfree(p);
}
}}
// REVERSED_FUNCTION: dice_hfe_HTTPRequest_dtor_HTTPRequest (0x64b600)
