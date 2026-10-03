// FUNCTION: BF2 0x818dc0
namespace dice { namespace hfe {
extern void func_0x00819100(void*, void*, void*);  // ghiPostAddString
extern void func_0x00407ee8(void*, void*, unsigned int, void*) __attribute__((noreturn));  // __assert_fail
void ghttpPostAddStringA_0x818dc0(void* post, char* name, void* val) {
    if (post == 0) {
        func_0x00407ee8((void*)0xbb3b78, (void*)0xbb3498, 0x508, (void*)0xbb3420);
    }
    if ((name != 0) && (*name != 0)) {
        if (val == 0) {
            val = (void*)0xbb25f1;
        }
        func_0x00819100(post, name, val);
        return;
    }
    func_0x00407ee8((void*)0xbb3570, (void*)0xbb3498, 0x509, (void*)0xbb3420);
}
} }
// REVERSED_FUNCTION: ghttpPostAddStringA (0x818dc0)
