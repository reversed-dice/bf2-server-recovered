// FUNCTION: BF2 0x4328b0
extern "C" void copy_ctor(void*, void*);
extern "C" void append(void*, void*);
void* fn_0x44fff0(void* retptr, void* lhs, void* rhs) {
    copy_ctor(retptr, lhs);
    append(retptr, rhs);
    return retptr;
}
// REVERSED_FUNCTION: std_string_operator_plus_string_constref_string_constref (0x44fff0)
