// FUNCTION: BF2 0x54e4f0
#include <string>

extern "C" void abort() __attribute__((noreturn));

namespace dice { namespace hfe {

extern unsigned int CID_SoldierNetworkable;

namespace world {

class IObject;
void setNetworkableComp(IObject* o, unsigned int cid);

class SoldierTemplate {
public:
    virtual void p00(); virtual void p01(); virtual void p02(); virtual void p03();
    virtual void p04(); virtual void p05(); virtual void p06(); virtual void p07();
    virtual void p08(); virtual void p09(); virtual void p10(); virtual void p11();
    virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15();
    virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19();
    virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23();
    virtual void p24(); virtual void p25(); virtual void p26(); virtual void p27();
    virtual void p28(); virtual void p29(); virtual void p30(); virtual void p31();
    virtual void p32(); virtual void p33(); virtual void p34(); virtual void p35();
    virtual void p36();
    virtual const std::string& getName();
};

class Soldier {
public:
    void initNetworkableComp();
};

void Soldier::initNetworkableComp() {
    SoldierTemplate* t = *reinterpret_cast<SoldierTemplate**>(reinterpret_cast<char*>(this) + 0x28);
    if (t != 0) {
        if (t->getName().size() == 0) abort();
        if (t->getName().size() != 0)
            setNetworkableComp(reinterpret_cast<IObject*>(this), CID_SoldierNetworkable);
    }
}

} } }
