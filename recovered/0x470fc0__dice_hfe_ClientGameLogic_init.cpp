// FUNCTION: BF2 0x470fc0
namespace dice { namespace hfe {
extern bool dice_hfe_GameLogic_init();
bool ClientGameLogic_init() {
    dice_hfe_GameLogic_init();
    return true;
}
}
}

// REVERSED_FUNCTION: dice_hfe_ClientGameLogic_init (0x470fc0)
