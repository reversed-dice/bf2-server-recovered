// FUNCTION: BF2 0x7d0de0
namespace dice { namespace hfe { namespace io {
extern void fn_408238(void* a, void* b);
struct NSP3 { unsigned char _pad[0x510]; char m_510; };
bool setPassword_0x7d0de0(NSP3* self, void* arg2) {
    if (__builtin_expect((unsigned long)(*(long*)((char*)*(void**)arg2 - 0x18)) <= 0x20, 1)) {
        fn_408238((char*)self + 0x510, arg2);
        return 1;
    }
    return 0;
}
} } }
