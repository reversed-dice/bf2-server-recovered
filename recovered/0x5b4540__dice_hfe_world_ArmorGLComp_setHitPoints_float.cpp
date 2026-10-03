// FUNCTION: BF2 0x5b4540
namespace dice { namespace hfe {
extern void func_5b3e00(void*);
class ArmorGLComp {
public:
    char _pad[0x318];
    bool dirty;
    void setHitPoints(float hp);
};
void ArmorGLComp::setHitPoints(float hp) {
    func_5b3e00((void*)this);
    dirty = false;
}
}
}

// REVERSED_FUNCTION: dice_hfe_world_ArmorGLComp_setHitPoints_float (0x5b4540)
