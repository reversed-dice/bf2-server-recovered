// FUNCTION: BF2 0x6353e0
namespace dice { namespace hfe {
extern void func_58b3e0(void*);
class ForceObject {
public:
    char _pad[0x240];
    int field;
    void disableCachedObject();
};
void ForceObject::disableCachedObject() {
    func_58b3e0((void*)this);
    field = -1;
}
}
}

// REVERSED_FUNCTION: dice_hfe_world_ForceObject_disableCachedObject (0x6353e0)
