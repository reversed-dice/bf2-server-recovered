// FUNCTION: BF2 0x87c5f0
namespace dice { namespace hfe { namespace anonymous_namespace {
extern void* func_0x00872ea0(void);  // getVoiceMessages
extern void func_0x004c6940(float, float, void*);  // setVolumes
long executeObjectMethod_0x87c5f0(void* p) {
    if (*(int*)((char*)p + 0x30) != 2) {
        return 0;
    }
    float f1 = **(float**)((char*)p + 0x38);
    float f2 = **(float**)((char*)p + 0x40);
    *(char*)((char*)p + 0x108) = 0;
    void* vm = func_0x00872ea0();
    func_0x004c6940(f1, f2, vm);
    return 0;
}
} } }
// REVERSED_FUNCTION: dice_hfe_anonymous_namespace_ConsoleClass171_executeObjectMethod (0x87c5f0)
