// FUNCTION: BF2 0x532d00
#include <string>
namespace dice { namespace hfe { namespace world {

class ObjectSpawnerTemplate {
public:
    unsigned char _pad[0x1d8];
    unsigned char _sub[8];
    unsigned char _pad2[0x210 - 0x1e0];
    float m_spawnDelay;
    float m_spawnDelay2;
    unsigned char _pad3[0x228 - 0x218];
    unsigned int m_maxNrOfObjectSpawned;
    void setSpawnDelay(float f);
    void spawnDelay(float f);
    void setMaxNrOfObjectSpawned(unsigned int n);
    void setEffectOnSpawn(std::string const& s);
};

extern void func_408238(void*, std::string const&);


void ObjectSpawnerTemplate::setEffectOnSpawn(std::string const& s) { func_408238((char*)this + 0x1d8, s); }

} } }
// REVERSED_FUNCTION: dice_hfe_world_ObjectSpawnerTemplate_setEffectOnSpawn_std_string (0x532d00)
