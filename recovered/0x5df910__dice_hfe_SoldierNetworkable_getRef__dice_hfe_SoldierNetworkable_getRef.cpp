// FUNCTION: BF2 0x5df910
namespace dice { namespace hfe {

class SoldierNetworkable {
public:
    unsigned int getRef() const;

private:
    char m_pad0[0x70];
    unsigned int m_ref;               // offset 0x70
};

unsigned int SoldierNetworkable::getRef() const {
    return m_ref;
}

} }
// REVERSED_FUNCTION: dice_hfe_SoldierNetworkable_getRef (0x5df910)