// FUNCTION: BF2 0x4cd5c0
namespace dice { namespace hfe {

extern "C" void BF2VoipServer_ctor_a(void*);
extern "C" void dice_hfe_VoipServerInternalHookThread_VoipServerInternalHookThread(void*);
extern "C" void BF2VoipServer_ctor_b(void*);
extern "C" void dice_hfe_Mutex_Mutex(void*);

void fn_0x4cd5c0(void* self) {
    BF2VoipServer_ctor_a(self);
    dice_hfe_VoipServerInternalHookThread_VoipServerInternalHookThread((char*)self + 0x38);
    BF2VoipServer_ctor_b((char*)self + 0x68);
    dice_hfe_Mutex_Mutex((char*)self + 0xa0);
}

} }
// REVERSED_FUNCTION: dice_hfe_VoipServerInternal_VoipServerInternal (0x4cd5c0)
