// FUNCTION: BF2 0x67f580
namespace dice { namespace hfe { namespace world {
typedef void* (*vfn_40)(void*);
typedef void (*vfn_670)(void*);
void* cb_67f580(void* self) {
    void* q = (*(vfn_40*)((char*)*(void**)self + 0x40))(self);
    *(void**)((char*)self + 0xf0) = q;
    if (q != 0)
        (*(vfn_670*)((char*)*(void**)q + 0x670))(q);
    return *(void**)((char*)self + 0xf0);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_PlayerManager_setLocalHumanPlayer_int (0x67f580)
