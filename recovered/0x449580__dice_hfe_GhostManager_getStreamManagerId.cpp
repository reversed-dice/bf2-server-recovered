// FUNCTION: BF2 0x449580
namespace dice { namespace hfe {
class GhostManager {
public:
    char _pad[0x2104];
    int field;
    int getStreamManagerId() const;
};
int GhostManager::getStreamManagerId() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_GhostManager_getStreamManagerId (0x449580)
