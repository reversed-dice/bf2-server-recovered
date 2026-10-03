// FUNCTION: BF2 0x475560
namespace dice { namespace hfe {
class GameLogic {
public:
    char _pad[0x3f8];
    unsigned char voipEnabled;
    char _pad2[7];
    unsigned long voipAddress;
    unsigned short voipPort;
    unsigned short voipExtra;
    char _pad3[4];
    int voipParam;
    void storeVoipServerInfo(bool enabled, unsigned long addr, unsigned short port, unsigned short extra, int param);
};
void GameLogic::storeVoipServerInfo(bool enabled, unsigned long addr, unsigned short port, unsigned short extra, int param) {
    voipEnabled = enabled;
    voipAddress = addr;
    voipPort = port;
    voipExtra = extra;
    voipParam = param;
}
}
}

// REVERSED_FUNCTION: dice_hfe_GameLogic_storeVoipServerInfo_bool_unsigned_long_unsigned_short_unsigned_short_int (0x475560)
