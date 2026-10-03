// FUNCTION: BF2 0x4cd530
namespace dice { namespace hfe {

extern "C" void dice_hfe_Mutex_dtor_Mutex(void*);
extern "C" void BF2VoipServer_dtor_a(void*);
extern "C" void dice_hfe_VoipServerInternalHookThread_dtor_VoipServerInternalHookThread(void*);
extern "C" void BF2VoipServer_dtor_b(void*);

void fn_0x4cd530(void* self) {
    dice_hfe_Mutex_dtor_Mutex((char*)self + 0xa0);
    BF2VoipServer_dtor_a((char*)self + 0x68);
    dice_hfe_VoipServerInternalHookThread_dtor_VoipServerInternalHookThread((char*)self + 0x38);
    BF2VoipServer_dtor_b(self);
}

} }
// REVERSED_FUNCTION: dice_hfe_VoipServerInternal_dtor_VoipServerInternal (0x4cd530)
