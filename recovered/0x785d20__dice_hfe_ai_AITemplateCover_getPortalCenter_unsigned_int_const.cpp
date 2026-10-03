// FUNCTION: BF2 0x785d20
namespace dice { namespace hfe { namespace ai {
struct PortalVec { float x, y, z; };
struct PortalArray {
    char _pad[0x10];
    PortalVec* m_10;
};
class AITemplateCover {
public:
    char _pad[0x20];
    PortalArray* m_20;
    PortalVec* getPortalCenter(unsigned int i) const;
};
PortalVec* AITemplateCover::getPortalCenter(unsigned int i) const {
    return &m_20->m_10[i];
}
} } }
// REVERSED_FUNCTION: dice_hfe_ai_AITemplateCover_getPortalCenter_unsigned_int_const (0x785d20)
