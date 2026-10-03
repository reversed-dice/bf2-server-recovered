// FUNCTION: BF2 0x5217e0
namespace dice { namespace hfe { namespace world {

class PlayerControlObjectTemplate {
public:
    char _pad[644];               // offset 0x00
    char m_field_284[32];         // offset 0x284

    const char* getRidingWithOffset();
};

const char* PlayerControlObjectTemplate::getRidingWithOffset() {
    return reinterpret_cast<const char*>(&m_field_284);
}

} } }
