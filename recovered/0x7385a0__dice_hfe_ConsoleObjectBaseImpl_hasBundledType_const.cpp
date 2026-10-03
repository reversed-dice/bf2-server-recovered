// FUNCTION: BF2 0x7385a0
namespace dice { namespace hfe {
extern "C" bool fn_0x7385a0(void* self) {
    typedef bool (*vf_t)(void*);
    return (*(vf_t**)self)[0x100/8](self);
}
} }
// REVERSED_FUNCTION: dice_hfe_ConsoleObjectBaseImpl_hasBundledType_const (0x7385a0)
