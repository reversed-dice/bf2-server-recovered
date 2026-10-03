// FUNCTION: BF2 0x5bb4e0
namespace dice { namespace hfe { namespace world {
extern void func_0x00408228(void*, void*, long);  // std::string::assign(const char*, size_t)
void ctor_0x5bb4e0(void* p) {
    *(void**)p = (void*)0xb68910;
    *(void**)((char*)p + 0x8) = (void*)0xb689c0;
    *(int*)((char*)p + 0x10) = 1;
    *(char*)((char*)p + 0x14) = 1;
    *(void**)((char*)p + 0x18) = (void*)0xf6c6e8;
    *(void**)((char*)p + 0x20) = (void*)0xf6c6e8;
    *(void**)((char*)p + 0x28) = (void*)0xf6c6e8;
    *(void**)((char*)p + 0x30) = (void*)0xf6c6e8;
    *(void**)((char*)p + 0x38) = (void*)0xf6c6e8;
    func_0x00408228((char*)p + 0x18, (void*)0xbb25f1, 0);
    func_0x00408228((char*)p + 0x20, (void*)0xbb25f1, 0);
    func_0x00408228((char*)p + 0x28, (void*)0xbb25f1, 0);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_AbilityHudCompTemplate_AbilityHudCompTemplate (0x5bb4e0)
