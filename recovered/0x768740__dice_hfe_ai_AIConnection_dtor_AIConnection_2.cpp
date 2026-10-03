// FUNCTION: BF2 0x768740
namespace dice { namespace hfe { namespace ai {

extern "C" void dice_hfe_ai_AIConnection_clear(void*);
extern "C" void dice_hfe_ai_IAIConnection_dtor_IAIConnection(void*);
extern "C" void _ZdlPv(void*);

void fn_0x768740(void* self) {
    *(void**)self = (void*)0xba1150;
    dice_hfe_ai_AIConnection_clear(self);
    void* m = *(void**)((char*)self+0x10);
    _ZdlPv(m);
    dice_hfe_ai_IAIConnection_dtor_IAIConnection(self);
}

} } }
// REVERSED_FUNCTION: dice_hfe_ai_AIConnection_dtor_AIConnection (0x768740)
