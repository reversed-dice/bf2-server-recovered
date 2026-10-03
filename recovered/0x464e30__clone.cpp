// FUNCTION: BF2 0x464e30
namespace dice { namespace hfe { namespace {

struct SoldierInfo {
    char _pad0[0x2c];
    unsigned char m_soldierId;
};

class RadioMessageEW {
public:
    unsigned char getSenderId() const;
private:
    char _pad0[8];
    SoldierInfo* m_senderInfo;
};

unsigned char RadioMessageEW::getSenderId() const {
    return m_senderInfo->m_soldierId;
}

} } } // namespace
// REVERSED_FUNCTION: dice_hfe_anonymous_namespace_RadioMessageEW_getSenderId (0x464e10)