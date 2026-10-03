// FUNCTION: BF2 0x4cd4c0
namespace dice { namespace hfe { namespace world {
void set_0x4cd4c0(void* p, unsigned long long a1, unsigned long long a2) {
    *(unsigned long long*)((char*)p + 0x28) = a1;
    *(unsigned long long*)((char*)p + 0x18) = a2;
}
} } }
// REVERSED_FUNCTION: dice_hfe_VoipServerInternalHookThread_init_BF2VoipServer_CBF2VoipServerptr_dice_hfe_Mutexptr (0x4cd4c0)
