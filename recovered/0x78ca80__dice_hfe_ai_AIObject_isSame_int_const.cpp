// FUNCTION: BF2 0x78ca80
namespace dice { namespace hfe { namespace ai {
typedef int (*vfn_2a8)(void*);
bool cb_78ca80(void* self, int id) {
    return ((*(vfn_2a8*)((char*)*(void**)self + 0x2a8))(self) & id) == id;
}
} } }
// REVERSED_FUNCTION: dice_hfe_ai_AIObject_isSame_int_const (0x78ca80)
