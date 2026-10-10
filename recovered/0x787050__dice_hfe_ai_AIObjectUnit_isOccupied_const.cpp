// FUNCTION: BF2 0x787050
namespace dice { namespace hfe {
namespace world {
extern unsigned int IID_IPlayerControlObject;
class IPlayerControlObject {
public:
    virtual void _v0(); virtual void _v1(); virtual void _v2(); virtual void _v3();
    virtual void* getObject(); // 0x20 / 8 = 4
    virtual void _v5();
    virtual bool isValid(); // 0x30 / 8 = 6
};
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
    bool isOccupied() const;
};

bool AIObjectUnit::isOccupied() const {
    world::IPlayerControlObject* pco;
    for (world::IObject* it = m_unit->getObject(); it != 0; it = it->m_next) {
        pco = (world::IPlayerControlObject*)it->queryInterface(world::IID_IPlayerControlObject);
        if (pco != 0) goto found;
    }
    pco = 0;
found:
    if (pco->isValid()) {
        if (pco->getObject()) {
            return true;
        }
    }
    return false;
}

} } }
