// FUNCTION: BF2 0x40f0f0
namespace dice { namespace hfe {
class IGame {
public:
    void* vtable;
    void destroy();
};
void IGame::destroy() { vtable = (void*)0xb294f0; }
}
}

// REVERSED_FUNCTION: dice_hfe_IGame_dtor_IGame (0x40f0f0)
