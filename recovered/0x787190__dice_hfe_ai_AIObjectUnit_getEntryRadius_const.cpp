// FUNCTION: BF2 0x787190
namespace dice { namespace hfe {
namespace world {
extern unsigned int IID_IPlayerControlObject;
class IObject {
public:
    virtual void _v0(); virtual void _v1(); virtual void _v2();
    virtual void* queryInterface(unsigned int);
    char _pad[0x50 - 8];
    IObject* m_next;
};
class Unit {
public:
    virtual void _v0(); virtual void _v1(); virtual void _v2(); virtual void _v3();
    virtual void _v4(); virtual void _v5(); virtual void _v6(); virtual void _v7();
    virtual world::IObject* getObject(); // slot 8 = 0x40 / 8
};
}
namespace ai {

class AIObjectUnit {
public:
    char _pad[8];
    world::Unit* m_unit;
    float getEntryRadius() const;
};

float AIObjectUnit::getEntryRadius() const {
    world::IObject* p = m_unit->getObject();
    while (p) {
        if (p->queryInterface(world::IID_IPlayerControlObject)) {
            break;
        }
        p = p->m_next;
    }
    return 10.0f;
}

} } }
