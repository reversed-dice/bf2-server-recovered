// FUNCTION: BF2 0x634770
namespace dice { namespace hfe {
extern void func_586da0(void*);
class FloatingBundle {
public:
    char _pad[0x2bc];
    int field;
    void enableCachedObject();
};
void FloatingBundle::enableCachedObject() {
    func_586da0((void*)this);
    field = 0;
}
}
}

// REVERSED_FUNCTION: dice_hfe_world_FloatingBundle_enableCachedObject (0x634770)
