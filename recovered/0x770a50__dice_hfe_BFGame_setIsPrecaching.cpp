// FUNCTION: BF2 0x770a50
namespace dice { namespace hfe {
class BFGame {
public:
    char _pad[0x8];
    bool field;
    void setIsPrecaching(bool v);
};
void BFGame::setIsPrecaching(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_BFGame_setIsPrecaching (0x770a50)
