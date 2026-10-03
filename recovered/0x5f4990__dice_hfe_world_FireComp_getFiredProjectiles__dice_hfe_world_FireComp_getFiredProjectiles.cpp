// FUNCTION: BF2 0x5f4990
namespace dice { namespace hfe { namespace world {

class FireComp {
    unsigned char pad_0x00[0xa0];
    char m_firedProjectiles[1];
public:
    char* getFiredProjectiles();
};

char* FireComp::getFiredProjectiles() { return m_firedProjectiles; }

} } }
// REVERSED_FUNCTION: dice_hfe_world_FireComp_getFiredProjectiles (0x5f4990)