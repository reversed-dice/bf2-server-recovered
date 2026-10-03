// FUNCTION: BF2 0x476910
namespace dice { namespace hfe {

class GameLogic {
public:
    void* getTargetObject(unsigned int id);
};

extern void* func_487790(void*, unsigned int*);

void* GameLogic::getTargetObject(unsigned int id) {
    unsigned int key = id;
    void* it = func_487790((char*)this + 0x260, &key);
    void* r = 0;
    if ((char*)this + 0x268 != it) r = *(void**)((char*)it + 0x28);
    return r;
}

} }
// REVERSED_FUNCTION: dice_hfe_GameLogic_getTargetObject_unsigned_int_const (0x476910)
