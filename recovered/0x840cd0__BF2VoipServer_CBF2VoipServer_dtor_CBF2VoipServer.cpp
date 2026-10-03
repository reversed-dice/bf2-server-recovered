// FUNCTION: BF2 0x840cd0
namespace dice { namespace hfe {

extern "C" void BF2VoipServer_CDebugStandard_GetInstance();
extern "C" void BF2VoipServer_CDebugStandard_Close();
extern "C" void _ZdlPv(void*);
extern "C" void dice_hfe_Mutex_dtor_Mutex(void*);
void fn_0x840cd0(void* self) {
    BF2VoipServer_CDebugStandard_GetInstance();
    BF2VoipServer_CDebugStandard_Close();
    void* m = *(void**)((char*)self+0x18);
    if (m) {
        _ZdlPv(m);
    }
    dice_hfe_Mutex_dtor_Mutex((char*)self+0x10);
}

} }
// REVERSED_FUNCTION: BF2VoipServer_CBF2VoipServer_dtor_CBF2VoipServer (0x840cd0)
