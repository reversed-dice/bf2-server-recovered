// FUNCTION: BF2 0x5f4b00
namespace dice { namespace hfe { namespace world {

class FireComp {
public:
    int getDummyShotsFired() const;

private:
    unsigned char pad_0x00[0x148];   // offset 0x00
    int m_dummyShotsFired;           // offset 0x148
};

int FireComp::getDummyShotsFired() const {
    return m_dummyShotsFired;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_FireComp_getDummyShotsFired_const (0x5f4b00)