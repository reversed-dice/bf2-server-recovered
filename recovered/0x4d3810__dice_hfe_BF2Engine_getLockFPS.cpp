// FUNCTION: BF2 0x4d3810
namespace dice { namespace hfe {
class BF2Engine {
public:
    char _pad[0xac];
    int field;
    int getLockFPS() const;
};
int BF2Engine::getLockFPS() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_BF2Engine_getLockFPS (0x4d3810)
