// FUNCTION: BF2 0x60c390
namespace dice { namespace hfe { namespace world {

class RecoilComp {
public:
    char _pad[48];               // offset 0x00
    char m_field_30[32];         // offset 0x30

    const char* getRandomRecoilForceUp() const;
};

const char* RecoilComp::getRandomRecoilForceUp() const {
    return reinterpret_cast<const char*>(&m_field_30);
}

} } }
