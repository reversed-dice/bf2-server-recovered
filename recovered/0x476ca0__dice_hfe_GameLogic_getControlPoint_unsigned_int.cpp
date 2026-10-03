// FUNCTION: BF2 0x476ca0
namespace dice { namespace hfe {

class GameLogic {
public:
    void* getControlPoint(unsigned int id);
};

extern void* func_487090(void*, unsigned int*);

void* GameLogic::getControlPoint(unsigned int id) {
    unsigned int key = id;
    void* it = func_487090((char*)this + 0x110, &key);
    void* r = 0;
    if ((char*)this + 0x118 != it) r = *(void**)((char*)it + 0x28);
    return r;
}

} }
// REVERSED_FUNCTION: dice_hfe_GameLogic_getControlPoint_unsigned_int (0x476ca0)
