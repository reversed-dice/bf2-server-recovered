// FUNCTION: BF2 0x475590
namespace dice { namespace hfe {

class GameLogic {
public:
    void getVoipServerInfo(
        bool&, unsigned int&,
        unsigned short&, unsigned short&,
        int&) const;
};

void GameLogic::getVoipServerInfo(
    bool& param_2, unsigned int& param_3,
    unsigned short& param_4, unsigned short& param_5,
    int& param_6) const
{
    param_2 = *reinterpret_cast<const bool*>((const char*)this + 0x3f8);
    param_3 = (unsigned int)*reinterpret_cast<const unsigned long long*>((const char*)this + 0x400);
    param_4 = (unsigned short)*reinterpret_cast<const unsigned int*>((const char*)this + 0x408);
    param_5 = *reinterpret_cast<const unsigned short*>((const char*)this + 0x40a);
    param_6 = *reinterpret_cast<const int*>((const char*)this + 0x410);
}

} }
// REVERSED_FUNCTION: dice_hfe_GameLogic_getVoipServerInfo_boolref_unsigned_intref_unsigned_shortref_unsigned_shortref_intref (0x475590)