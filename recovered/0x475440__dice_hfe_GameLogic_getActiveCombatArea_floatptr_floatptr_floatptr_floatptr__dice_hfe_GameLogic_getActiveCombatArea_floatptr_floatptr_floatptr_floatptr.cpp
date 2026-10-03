// FUNCTION: BF2 0x475440
namespace dice { namespace hfe {

class GameLogic {
public:
    void getActiveCombatArea(float* param_2, float* param_3, float* param_4, float* param_5);
};

void GameLogic::getActiveCombatArea(float* param_2, float* param_3, float* param_4, float* param_5) {
    *param_2 = *(float*)((char*)this + 0x46c);
    *param_3 = *(float*)((char*)this + 0x470);
    *param_4 = *(float*)((char*)this + 0x474);
    *param_5 = *(float*)((char*)this + 0x478);
}

} } // namespace
// REVERSED_FUNCTION: dice_hfe_GameLogic_getActiveCombatArea_floatptr_floatptr_floatptr_floatptr (0x475440)