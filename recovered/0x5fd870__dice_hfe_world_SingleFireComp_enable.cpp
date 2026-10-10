// FUNCTION: BF2 0x5fd870
namespace dice { namespace hfe {

struct WorldPref {
    static int getTickCount();
};

namespace world {

enum FireState { FS_0 };

struct WEventStruct {
    int a;
    int b;
    int c;
    int d;
};

class FireComp {
public:
    char _pad[0x164];
    void enable();
    void setFireState(FireState s);
    void fireCompleteUpdateStates();
    void disableTimeEvents();
    void handleTimeEventAction(const WEventStruct& e);
};

class SingleFireComp : public FireComp {
public:
    void enable();
};

void SingleFireComp::enable() {
    if (*(unsigned int*)((char*)this + 0x164) != 0
        && *(unsigned int*)((char*)this + 0x164) <= (unsigned int)WorldPref::getTickCount()) {
        unsigned int t = *(unsigned int*)((char*)this + 0x164);
        fireCompleteUpdateStates();
        setFireState(FS_0);
        *(char*)((char*)this + 0x96) = 1;
        *(unsigned int*)((char*)this + 0x98) = t;
    }
    ((FireComp*)(char*)this)->enable();
    *(char*)((char*)this + 0x170) = 1;
    *(char*)((char*)this + 0x171) = 0;
    disableTimeEvents();
    WEventStruct ev;
    ev.a = 0;
    ev.b = 2;
    ev.c = 0;
    ev.d = 0;
    handleTimeEventAction(ev);
}

} }
}
