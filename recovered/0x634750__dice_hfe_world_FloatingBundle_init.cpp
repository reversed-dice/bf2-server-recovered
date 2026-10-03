// FUNCTION: BF2 0x634750
namespace dice { namespace hfe {
extern void func_586dc0(void*);
class FloatingBundle {
public:
    char _pad[0x2bc];
    int field;
    void init();
};
void FloatingBundle::init() {
    func_586dc0((void*)this);
    field = 0;
}
}
}

// REVERSED_FUNCTION: dice_hfe_world_FloatingBundle_init (0x634750)
