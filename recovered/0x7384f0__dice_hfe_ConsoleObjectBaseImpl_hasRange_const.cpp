// FUNCTION: BF2 0x7384f0
namespace dice { namespace hfe {
extern "C" bool fn_0x7384f0(void* self) {
    typedef bool (*vf_t)(void*);
    return (*(vf_t**)self)[0xd8/8](self);
}
} }
// REVERSED_FUNCTION: dice_hfe_ConsoleObjectBaseImpl_hasRange_const (0x7384f0)
