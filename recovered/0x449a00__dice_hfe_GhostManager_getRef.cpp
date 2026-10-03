// FUNCTION: BF2 0x449a00
namespace dice { namespace hfe {
class GhostManager {
public:
    char _pad[0x18];
    int field;
    int getRef() const;
};
int GhostManager::getRef() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_GhostManager_getRef (0x449a00)
