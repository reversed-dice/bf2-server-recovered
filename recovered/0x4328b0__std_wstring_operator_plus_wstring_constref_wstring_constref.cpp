// FUNCTION: BF2 0x4328b0
extern "C" void copy_ctor_407aa8(void*, void*);
extern "C" void append_4080c8(void*, void*);
void* fn_0x4328b0(void* retptr, void* lhs, void* rhs) {
    copy_ctor_407aa8(retptr, lhs);
    append_4080c8(retptr, rhs);
    return retptr;
}
// REVERSED_FUNCTION: std_wstring_operator_plus_wstring_constref_wstring_constref (0x4328b0)
