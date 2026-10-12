// FUNCTION: BF2 0x593170
#include <vector>

namespace dice { namespace hfe { namespace world {

class IPlayer;
typedef void* (*FnObj)(void*);
typedef int   (*FnInt)(void*);
typedef void  (*FnSetPlayer)(void*, IPlayer*);
typedef void  (*FnSetInt)(void*, int);

class EffectBundle {
public:
    void setPlayerForGasCloudType(IPlayer* player, int a, int b);
private:
    char _pad0[0x268];
    std::vector<void*> m_effects;
};

void EffectBundle::setPlayerForGasCloudType(IPlayer* player, int a, int b) {
    for (std::vector<void*>::iterator it = m_effects.begin(); it != m_effects.end(); ++it) {
        void* owner = ((FnObj)(*(void***)(*it))[0x120 / 8])(*it);
        if (((FnInt)(*(void***)owner)[0x268 / 8])(owner) == b) {
            ((FnSetPlayer)(*(void***)(*it))[0x168 / 8])(*it, player);
            ((FnSetInt)(*(void***)(*it))[0x178 / 8])(*it, a);
        }
    }
}}}}
