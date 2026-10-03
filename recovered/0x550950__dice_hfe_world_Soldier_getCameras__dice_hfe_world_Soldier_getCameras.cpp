// FUNCTION: BF2 0x550950
namespace dice { namespace hfe { namespace world {

class Soldier {
public:
    char _pad[800];               // offset 0x00
    char m_field_320[32];         // offset 0x320

    const char* getCameras();
};

const char* Soldier::getCameras() {
    return reinterpret_cast<const char*>(&m_field_320);
}

} } }
