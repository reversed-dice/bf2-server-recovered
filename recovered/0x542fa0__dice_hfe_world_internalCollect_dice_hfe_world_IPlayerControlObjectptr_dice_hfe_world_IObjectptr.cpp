// FUNCTION: BF2 0x542fa0
namespace dice { namespace hfe { namespace world {

extern unsigned int IID_IObject;
extern unsigned int IID_IWeaponObject;
extern unsigned int IID_IPlayerControlObject;

class IObject {
public:
    virtual void q0(); virtual void q1(); virtual void q2();
    virtual void* queryInterface(unsigned int iid);
};

class IPlayerControlObject {
public:
    virtual void p00(); virtual void p01(); virtual void p02(); virtual void p03();
    virtual void p04(); virtual void p05(); virtual void p06(); virtual void p07();
    virtual void p08(); virtual void p09(); virtual void p10(); virtual void p11();
    virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15();
    virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19();
    virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23();
    virtual void p24(); virtual void p25();
    virtual void addWeapon(IObject* o);
};

void internalCollect(IPlayerControlObject* pco, IObject* obj) {
    if (obj->queryInterface(IID_IObject) != 0) {
        if (obj->queryInterface(IID_IWeaponObject) != 0) {
            pco->addWeapon(obj);
            return;
        }
        if (!(obj->queryInterface(IID_IPlayerControlObject) != 0)) {
            IObject* c = reinterpret_cast<IObject*>(
                ((void* (*)(void*))(*reinterpret_cast<void***>(obj))[60])(obj));
            while (c != 0) {
                internalCollect(pco, c);
                c = *reinterpret_cast<IObject**>(reinterpret_cast<char*>(c) + 0x58);
            }
        }
    }
}

} } }
