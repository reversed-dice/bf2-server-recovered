// FUNCTION: BF2 0x768710
namespace dice { namespace hfe { namespace ai {

extern "C" void AIConnection_clear(void*);
extern "C" void real_operator_delete(void*);
extern "C" void IAIConnection_dtor_IAIConnection(void*);
void fn_0x768710(void* self) {
    *(void**)self = (void*)0xba1150;
    AIConnection_clear(self);
    real_operator_delete(*(void**)((char*)self+0x10));
    IAIConnection_dtor_IAIConnection(self);
}

} } }
// REVERSED_FUNCTION: dice_hfe_ai_AIConnection_dtor_AIConnection (0x768710)
