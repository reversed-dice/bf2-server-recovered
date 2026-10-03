// FUNCTION: BF2 0x426030
namespace dice { namespace hfe {
extern void* dice_hfe_game;
extern unsigned int dice_hfe_IID_IGameClient;
class ExitVehicleEvent {
public:
    unsigned char pad[0x10];
    unsigned char m_unk_0x10;
    unsigned char m_unk_0x11;
    bool executeClient();
};
bool ExitVehicleEvent::executeClient() {
    void* client = ((void*(*)(void*, unsigned int))(*(void**)((char*)(*(void**)dice_hfe_game) + 0x18)))(dice_hfe_game, dice_hfe_IID_IGameClient);
    if (client == 0) return false;
    ((void(*)(void*, unsigned char, unsigned char))(*(void**)((char*)(*(void**)client) + 0x70)))(client, m_unk_0x10, m_unk_0x11);
    return true;
}
} }
// REVERSED_FUNCTION: dice_hfe_ExitVehicleEvent::executeClient (0x426030)