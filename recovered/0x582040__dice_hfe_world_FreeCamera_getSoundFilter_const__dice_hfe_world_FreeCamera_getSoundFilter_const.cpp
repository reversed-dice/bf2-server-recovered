// FUNCTION: BF2 0x582040
namespace dice { namespace hfe { namespace world {

class FreeCamera {
public:
    char _pad[928];               // offset 0x00
    char m_field_3a0[32];         // offset 0x3a0

    const char* getSoundFilter() const;
};

const char* FreeCamera::getSoundFilter() const {
    return reinterpret_cast<const char*>(&m_field_3a0);
}

} } }
