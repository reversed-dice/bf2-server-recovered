// FUNCTION: BF2 0x763250
namespace dice { namespace hfe {
extern void* fn_407628(void* a, void* b);
extern void fn_408438(void* a);
struct SER { char m_0; char m_1; };
void serialize_0x763250(SER* self, void* arg2) {
    if (self->m_0) {
        void* p = fn_407628(arg2, (void*)0xba0800);
        fn_408438(p);
    }
    if (self->m_1) {
        void* q = fn_407628(arg2, (void*)0xba0828);
        fn_408438(q);
    }
}
} }
