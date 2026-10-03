// FUNCTION: BF2 0x5696c0
namespace dice { namespace hfe {
void* f_5696c0(char* p, unsigned int id) {
    char* r = p;
    if (*(unsigned int*)0x00bb8fac == id) return r;
    if (id != *(unsigned int*)0x00c7d110) {
        if (id == *(unsigned int*)0x00bc19c4) return p + 0x100;
        return 0;
    }
    return r;
}
} }
// REVERSED_FUNCTION: dice_hfe_world_TurnableRemoteControlledObject_queryInterface_unsigned_int_const (0x5696c0)
