// FUNCTION: BF2 0x4166b0
namespace dice { namespace hfe {

class MapInfo {
public:
    char _pad[8];               // offset 0x00
    char m_field_8[32];         // offset 0x8

    const char* getLevelPath() const;
};

const char* MapInfo::getLevelPath() const {
    return reinterpret_cast<const char*>(&m_field_8);
}

} }
