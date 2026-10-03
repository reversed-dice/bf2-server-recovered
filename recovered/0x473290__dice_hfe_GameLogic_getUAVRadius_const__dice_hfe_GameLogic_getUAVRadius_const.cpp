// FUNCTION: BF2 0x473290
namespace dice { namespace hfe {

class GameLogic {
private:
    unsigned char m_pad0[0x458];

public:
    float getUAVRadius() const;
};

float GameLogic::getUAVRadius() const {
    return *reinterpret_cast<const float*>(&m_pad0[0x454]);
}

} }
// REVERSED_FUNCTION: dice_hfe_GameLogic_getUAVRadius_const (0x473290)