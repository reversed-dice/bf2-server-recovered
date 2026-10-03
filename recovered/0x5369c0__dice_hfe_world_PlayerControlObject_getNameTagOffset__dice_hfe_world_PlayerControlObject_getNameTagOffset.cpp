// FUNCTION: BF2 0x5369c0
namespace dice { namespace hfe { namespace world {

class PlayerControlObject {
public:
    long long getNameTagOffset() const;
private:
    unsigned char m_pad0x000[0x250];
    long long m_nameTagBase; // offset 0x250
};

long long PlayerControlObject::getNameTagOffset() const {
    return m_nameTagBase + 0x278;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_PlayerControlObject_getNameTagOffset (0x5369c0)