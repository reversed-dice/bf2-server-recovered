// FUNCTION: BF2 0x616270
namespace dice { namespace hfe { namespace world {

class GenericProjectile {
public:
    char _pad[664];               // offset 0x00
    char m_field_298[32];         // offset 0x298

    const char* getAssistPlayers();
};

const char* GenericProjectile::getAssistPlayers() {
    return reinterpret_cast<const char*>(&m_field_298);
}

} } }
