// FUNCTION: BF2 0x4aecc0
namespace dice { namespace hfe {

extern const unsigned int IID_IBase;
extern const unsigned int IID_IGameLogic;

class GameLogic {
public:
    void* queryInterface(unsigned int iid) const;
};

void* GameLogic::queryInterface(unsigned int iid) const {
    if (__builtin_expect(IID_IBase == iid, 1)) {
        return const_cast<GameLogic*>(this);
    }
    return (iid == IID_IGameLogic) ? const_cast<GameLogic*>(this) : 0;
}

} }
// REVERSED_FUNCTION: dice_hfe_GameLogic::queryInterface_unsigned_int_const (0x486a90)