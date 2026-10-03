// FUNCTION: BF2 0x78bfe0
namespace dice { namespace hfe {
class AIObject {
public:
    char _pad[0xc];
    bool field;
    void setIsAllowedByBots(bool v);
};
void AIObject::setIsAllowedByBots(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_AIObject_setIsAllowedByBots (0x78bfe0)
