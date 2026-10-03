// FUNCTION: BF2 0x475560
namespace dice { namespace hfe {

class GameLogic {
public:
    void storeVoipServerInfo(bool, unsigned long, unsigned short, unsigned short, int);
};

void GameLogic::storeVoipServerInfo(bool param_2, unsigned long param_3, unsigned short param_4, unsigned short param_5, int param_6) {
    *(unsigned char*)((char*)this + 0x3f8) = param_2;
    *(unsigned long*)((char*)this + 0x400) = param_3;
    *(unsigned short*)((char*)this + 0x408) = param_4;
    *(unsigned short*)((char*)this + 0x40a) = param_5;
    *(int*)((char*)this + 0x410) = param_6;
}

} }
// REVERSED_FUNCTION: dice_hfe_GameLogic_storeVoipServerInfo_bool_unsigned_long_unsigned_short_unsigned_short_int (0x475560)