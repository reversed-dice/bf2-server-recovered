// FUNCTION: BF2 0x40b290
namespace dice {
namespace hfe {

unsigned char BF2Engine_mainLoop(unsigned long long engine);

unsigned char BF2_run(unsigned long long* param_1)
{
    return BF2Engine_mainLoop(*param_1);
}

}
}
// REVERSED_FUNCTION: dice_hfe_BF2_run::dice_hfe_BF2_run (0x40b290)