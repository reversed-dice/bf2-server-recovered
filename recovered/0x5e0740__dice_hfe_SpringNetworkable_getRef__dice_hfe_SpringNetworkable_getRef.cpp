// FUNCTION: BF2 0x5e0740
namespace dice { namespace hfe {

class SpringNetworkable {
public:
    unsigned int getRef() const;

private:
    char m_pad0[0x70];
    unsigned int m_ref;
};

unsigned int SpringNetworkable::getRef() const {
    return m_ref;
}

} }
// REVERSED_FUNCTION: dice_hfe_SpringNetworkable_getRef (0x5e0740)