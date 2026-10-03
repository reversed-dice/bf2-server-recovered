// FUNCTION: BF2 0x4cbe20
namespace dice { namespace hfe {
extern void* g_0x0108d860;
extern void* alloc_0x00407508(int n);
extern void ctor_0x004d0170(void* p);
void* GetInstance_4ce080() {
    if (g_0x0108d860)
        return g_0x0108d860;
    void* g = alloc_0x00407508(0x4438);
    ctor_0x004d0170(g);
    g_0x0108d860 = g;
    return g;
}
} }

// REVERSED_FUNCTION: dice_hfe_VoipServerConnection_GetInstance (0x4cbe20)
