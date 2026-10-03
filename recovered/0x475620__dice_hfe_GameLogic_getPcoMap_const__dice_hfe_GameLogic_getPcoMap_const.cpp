// FUNCTION: BF2 0x475620
namespace dice { namespace hfe {

class GameLogic {
public:
    char _pad[512];               // offset 0x00
    char m_field_200[32];         // offset 0x200

    const char* getPcoMap() const;
};

const char* GameLogic::getPcoMap() const {
    return reinterpret_cast<const char*>(&m_field_200);
}

} }
