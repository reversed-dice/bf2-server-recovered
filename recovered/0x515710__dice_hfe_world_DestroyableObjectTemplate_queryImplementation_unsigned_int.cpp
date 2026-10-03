// FUNCTION: BF2 0x515710
namespace dice { namespace hfe { namespace world {

class PlayerControlObjectTemplate {
public:
    void* queryImplementation(unsigned int id);
};

extern void* func_5749a0(void*, unsigned int);

void* PlayerControlObjectTemplate::queryImplementation(unsigned int id) {
    if (*(unsigned int*)0xc7ce78 == id) return this;
    return func_5749a0(this, id);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_PlayerControlObjectTemplate_queryImplementation_unsigned_int (0x5368b0)
