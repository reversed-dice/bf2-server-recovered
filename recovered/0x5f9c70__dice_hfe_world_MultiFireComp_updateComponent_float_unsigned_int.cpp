// FUNCTION: BF2 0x5f9c70
namespace dice { namespace hfe { namespace world {

class WorldPref {
public:
    static unsigned int getTickCount();
};

class MultiFireComp {
public:
    void updateComponent(float, unsigned int);
};

} } }

void dice::hfe::world::MultiFireComp::updateComponent(float, unsigned int) {
    int msg = ((int (*)(void*))(*(void***)this)[0x240 / 8])(this);
    if (msg == 4) {
        unsigned int t = *(unsigned int*)((char*)this + 0x198);
        if (t <= dice::hfe::world::WorldPref::getTickCount()) {
            ((void (*)(void*, unsigned int))(*(void***)this)[0x208 / 8])(this, *(unsigned int*)((char*)this + 0x198));
        }
    }
}
