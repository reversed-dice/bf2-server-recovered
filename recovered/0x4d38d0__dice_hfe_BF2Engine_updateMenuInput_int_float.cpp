// FUNCTION: BF2 0x4d38d0
namespace dice { namespace hfe {

class IMenu {
public:
#define V(n) virtual void _v##n();
    V(0) V(1) V(2) V(3) V(4) V(5) V(6)
    virtual void beginInput();
    V(8) V(9) V(10) V(11) V(12)
    virtual void readInput();
    virtual void processInput();
    virtual void endInput();
    V(16) V(17)
    virtual int getInputCount();
#undef V
};
extern IMenu* g_menu;

class BF2Engine {
public:
    void updateMenuInput(int frames, volatile float dt);
};

void BF2Engine::updateMenuInput(int frames, volatile float dt)
{
    if (frames <= 0)
        return;
    g_menu->beginInput();
    int n = g_menu->getInputCount();
    for (int i = 0; i < n; ++i) {
        g_menu->processInput();
        g_menu->readInput();
        g_menu->endInput();
    }
}

} }
