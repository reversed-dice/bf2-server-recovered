// FUNCTION: BF2 0x4753a0
namespace dice { namespace hfe {

class GameLogic {
public:
    void setActiveCombatArea(float param1, float param2, float param3, float param4);
};

void GameLogic::setActiveCombatArea(float param1, float param2, float param3, float param4) {
    typedef void (*VFunc)(GameLogic*, int);
    ((*(VFunc**)this)[0x250 / 8])(this, 1);
    *(float*)((char*)this + 0x46c) = param1;
    *(float*)((char*)this + 0x470) = param2;
    *(float*)((char*)this + 0x474) = param3;
    *(float*)((char*)this + 0x478) = param4;
}

} }
// REVERSED_FUNCTION: dice_hfe_GameLogic_setActiveCombatArea_float_float_float_float (0x4753a0)