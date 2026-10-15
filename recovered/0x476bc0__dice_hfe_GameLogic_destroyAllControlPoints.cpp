// FUNCTION: BF2 0x476bc0
#include <map>

namespace dice { namespace hfe {

namespace world { class IObject; }

class IFace {
public:
    virtual void d00(); virtual void d01(); virtual void d02(); virtual void d03();
    virtual void d04(); virtual void d05(); virtual void d06(); virtual void d07();
    virtual void d08(); virtual void d09(); virtual void d10(); virtual void d11();
    virtual void d12(); virtual void d13(); virtual void d14(); virtual void d15();
    virtual void d16(); virtual void d17(); virtual void d18(); virtual void d19();
    virtual void d20(); virtual void d21(); virtual void d22(); virtual void d23();
    virtual void d24(); virtual void d25(); virtual void d26(); virtual void d27();
    virtual void d28(); virtual void d29(); virtual void d30(); virtual void d31();
    virtual void d32(); virtual void d33(); virtual void d34(); virtual void d35();
    virtual void d36(); virtual void d37(); virtual void d38(); virtual void d39();
    virtual void m140(dice::hfe::world::IObject* p);
};

extern IFace* game;

class GameLogic {
public:
    virtual ~GameLogic();
    char _pad0[0x110 - 8];
    std::map<unsigned int, dice::hfe::world::IObject*> m_110;   // 0x110

    void destroyAllControlPoints();
};

void GameLogic::destroyAllControlPoints()
{
    std::map<unsigned int, dice::hfe::world::IObject*> cps = m_110;
    for (std::map<unsigned int, dice::hfe::world::IObject*>::iterator it = cps.begin(); it != cps.end(); ++it) {
        dice::hfe::game->m140(it->second);
    }
}

} }
