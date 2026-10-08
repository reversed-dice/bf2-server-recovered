// FUNCTION: BF2 0x6a8980
#include <string>

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
    virtual dice::hfe::world::IObject* m120();
    virtual void m128(dice::hfe::world::IObject* p);
    virtual void d38(); virtual void d39();
    virtual void m140(dice::hfe::world::IObject* p);
};

namespace world { extern IFace* objectManager; }
extern IFace* game;

namespace tool {
class ObjectTemplateAdm {
public:
    void deleteObject(dice::hfe::world::IObject* obj);
};
} } }

void dice::hfe::tool::ObjectTemplateAdm::deleteObject(dice::hfe::world::IObject* obj) {
    if (obj == 0) return;
    dice::hfe::world::objectManager->m120();
    if (dice::hfe::game != 0) {
        dice::hfe::game->m140(obj);
    }
    if (obj == dice::hfe::world::objectManager->m120()) {
        dice::hfe::world::objectManager->m128(0);
    }
}
