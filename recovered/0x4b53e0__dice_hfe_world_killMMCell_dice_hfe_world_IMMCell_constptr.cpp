// FUNCTION: BF2 0x4b53e0
namespace dice { namespace hfe {
class IMMCell {
public:
    void* vtable;
    void kill() const;
};
void IMMCell::kill() const {
    if (this != 0) {
        void (*fn)(const void*) = (void(*)(const void*))(*(void**)((char*)vtable + 8));
        fn(this);
    }
}
}
}

// REVERSED_FUNCTION: dice_hfe_world_killMMCell_dice_hfe_world_IMMCell_constptr (0x4b53e0)
