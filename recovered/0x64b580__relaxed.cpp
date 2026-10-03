// FUNCTION: BF2 0x64b580
// HTTPRequest dtor 0x64b5c0 — 2 fd-guards + null + tail ghttpCleanup
namespace dice { namespace hfe {
extern "C" void ghttpCancelRequest(int fd);
extern "C" void ghttpCleanup();
void dtor_64b5c0(void* p) {
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
}
}}
// REVERSED_FUNCTION: dice_hfe_HTTPRequest_dtor_HTTPRequest (0x64b5c0)
