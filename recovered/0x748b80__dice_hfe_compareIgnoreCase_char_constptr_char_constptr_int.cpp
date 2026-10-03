// FUNCTION: BF2 0x748b80
// compareIgnoreCase(char*, char*, int) 0x748b80 — len==0 check + tail-call sign-extend
namespace dice { namespace hfe {

extern int cmp_cstr(void* a, void* b, long len);

int compareIgnoreCase(char const* a, char const* b, int len) {
    if (len == 0)
        return 0;
    return cmp_cstr((void*)a, (void*)b, (long)len);
}

}}
