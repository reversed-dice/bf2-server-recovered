// FUNCTION: BF2 0x4cd480
namespace dice { namespace hfe {
extern "C" void dice_hfe_VoipServerConnection_FullRoutingUpdate(float);
extern "C" void dice_hfe_VoipServerConnection_Receive(long);
void cb_0x4cd480(long param_1, float param_2) {
    if (*(char*)(param_1 + 0x431c) != 0) {
        dice_hfe_VoipServerConnection_FullRoutingUpdate(param_2);
        dice_hfe_VoipServerConnection_Receive(param_1);
    }
}
} }
