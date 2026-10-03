// FUNCTION: BF2 0x5580a0
namespace dice { namespace hfe { namespace world {

class SoldierTemplate {
public:
    char _pad[816];               // offset 0x00
    char m_field_330[32];         // offset 0x330

    const char* getSoundFilter() const;
};

const char* SoldierTemplate::getSoundFilter() const {
    return reinterpret_cast<const char*>(&m_field_330);
}

} } }
