// FUNCTION: BF2 0x4bd930
namespace dice { namespace hfe {
class SpawnPoint {
public:
    char _pad[0x220];
    int field;
    int getRef() const;
};
int SpawnPoint::getRef() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_SpawnPoint_getRef (0x4bd930)
