// FUNCTION: BF2 0x42ccc0
// BF2_FLAGS: -fcrossjumping -fno-strict-aliasing
#include <vector>

namespace dice { namespace hfe {

class Player;

class PlayerManager {
public:
    virtual void p0();
    virtual void p1();
    virtual void p2();
    virtual void p3();
    virtual void p4();
    virtual void p5();
    virtual void p6();
    virtual void p7();
    virtual Player* getPlayer(int id);
    virtual void p9();
    virtual void p10();
    virtual void p11();
    virtual Player* getLocal();
};

class EventManager {
public:
    virtual void e0();
    virtual void e1();
    virtual void e2();
    virtual void e3();
    virtual void e4();
    virtual int e5(int a, int b, void* c, float d);
};

class Player {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual bool v25();
};

extern PlayerManager* playerManager;
extern EventManager* eventManager;

class PythonCommandEvent {
public:
    char _pad[0x18];
    int f_18;
    int f_1c;
    int f_20;
    int f_24;
    int f_28;
    bool executeClient();
};

bool PythonCommandEvent::executeClient()
{
    std::vector<int> v;
    int vals[4] = { 0 };
    vals[0] = f_1c;
    vals[1] = f_20;
    vals[2] = f_24;
    vals[3] = f_28;
    for (int i = 0; i < 4; ++i) {
        v.push_back(vals[i]);
    }

    if (f_18 == 100) {
        Player* a = playerManager->getPlayer(f_20);
        Player* b = playerManager->getPlayer(f_24);

        if (f_1c == 0) {
            if ((b != 0) & (a != 0)) {
                bool flag = false;
                if (a != b && b == playerManager->getLocal())
                    eventManager->e5(2, 0x3e, &flag, 0.0f);
            }
        } else if (f_1c == 1) {
            if ((b != 0) & (a != 0)) {
                bool flag = true;
                if (a != b && b == playerManager->getLocal())
                    eventManager->e5(2, 0x3e, &flag, 0.0f);
            }
        } else if ((f_1c == 2) & (a != 0)) {
            if (a == playerManager->getLocal() && b != 0 && !b->v25())
                eventManager->e5(2, 0x3d, &f_1c, 0.0f);
        }
    }
    return true;
}

} }
