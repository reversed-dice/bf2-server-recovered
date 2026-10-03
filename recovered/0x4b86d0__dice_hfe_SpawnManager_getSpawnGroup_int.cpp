// FUNCTION: BF2 0x4b86d0
namespace dice { namespace hfe {

class GameLogic {
public:
    void* getObjectSpawner(unsigned int id);
};

extern void* func_487790(void*, unsigned int*);

void* GameLogic::getObjectSpawner(unsigned int id) {
    unsigned int key = id;
    void* it = func_487790((char*)this + 0x20, &key);
    void* r = 0;
    if ((char*)this + 0x28 != it) r = *(void**)((char*)it + 0x28);
    return r;
}

} }
// REVERSED_FUNCTION: dice_hfe_GameLogic_getObjectSpawner_unsigned_int_const (0x4768d0)
