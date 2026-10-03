// FUNCTION: BF2 0x475610
namespace dice { namespace hfe {

class GameLogic {
public:
    char _pad[464];               // offset 0x00
    char m_field_1d0[32];         // offset 0x1d0

    const char* getSupplyDepotMap() const;
};

const char* GameLogic::getSupplyDepotMap() const {
    return reinterpret_cast<const char*>(&m_field_1d0);
}

} }
