// FUNCTION: BF2 0x476420
namespace dice { namespace hfe {

class GameLogic {
public:
    void* getRemoteControlledObject(unsigned int id);
};

extern void* func_487790(void*, unsigned int*);

void* GameLogic::getRemoteControlledObject(unsigned int id) {
    unsigned int key = id;
    void* it = func_487790((char*)this + 0x290, &key);
    void* r = 0;
    if ((char*)this + 0x298 != it) r = *(void**)((char*)it + 0x28);
    return r;
}

} }
// REVERSED_FUNCTION: dice_hfe_GameLogic_getRemoteControlledObject_unsigned_int_const (0x476420)
