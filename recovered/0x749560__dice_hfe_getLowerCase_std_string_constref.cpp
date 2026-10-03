// FUNCTION: BF2 0x749560
// getLowerCase 0x749560 — string copy + transform in-place
namespace dice { namespace hfe {

extern void string_ctor_copy(void* out, void const* in);
extern void to_lower_inplace(void* s);

void* getLowerCase(void* out, void const* in) {
    string_ctor_copy(out, in);
    to_lower_inplace(out);
    return out;
}

}}
