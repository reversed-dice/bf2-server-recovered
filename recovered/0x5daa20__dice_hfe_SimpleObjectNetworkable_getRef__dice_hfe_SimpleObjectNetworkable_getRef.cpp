// FUNCTION: BF2 0x5daa20
namespace dice { namespace hfe {

class SimpleObjectNetworkable {
public:
    unsigned int getRef() const;

private:
    char pad_0x00[0x70];
    unsigned int m_ref;
};

unsigned int SimpleObjectNetworkable::getRef() const {
    return m_ref;
}

} }
// REVERSED_FUNCTION: dice_hfe_SimpleObjectNetworkable_getRef (0x5daa20)