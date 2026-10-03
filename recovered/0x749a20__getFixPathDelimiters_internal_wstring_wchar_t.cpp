// FUNCTION: BF2 0x749a20
extern "C" void copy_ctor_407aa8(void*, void*);
extern "C" void append_wchar(void*, unsigned);
void* fn_0x749a20(void* retptr, void* lhs, unsigned wc) {
    copy_ctor_407aa8(retptr, lhs);
    append_wchar(retptr, wc);
    return retptr;
}
// REVERSED_FUNCTION: getFixPathDelimiters_internal (0x749a20)
