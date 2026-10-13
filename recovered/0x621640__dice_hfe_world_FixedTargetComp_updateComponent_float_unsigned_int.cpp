// FUNCTION: BF2 0x621640
namespace dice { namespace hfe { namespace world {
class WorldPref { public: static unsigned int getTickCount(); };
class ProjectileComp { public: char pad[0x40]; };

class FixedTargetComp : public ProjectileComp {
public:
    void checkTarget();
    void updateComponent(float dt, unsigned int mask);
};

void FixedTargetComp::updateComponent(float dt, unsigned int mask) {
    char* a = *(char**)((char*)this + 0x18);
    char* b = *(char**)((char*)this + 0x38);
    unsigned int deadline = *(unsigned int*)(a + 0x304) + *(unsigned int*)(b + 0x1c);
    if (deadline > WorldPref::getTickCount()) {
        return;
    }
    checkTarget();
}
}}}
