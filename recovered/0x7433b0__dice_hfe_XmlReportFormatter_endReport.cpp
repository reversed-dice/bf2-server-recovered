// FUNCTION: BF2 0x7433b0
namespace dice { namespace hfe {
extern void* fn_407628(void* a, void* b);
extern void* fn_408438(void* a);
void* endReport_0x7433b0(void* self) {
    void* p = fn_407628((char*)self + 0x18, (void*)0xb98bc1);
    void* q = fn_408438(p);
    void* r = fn_407628(q, (void*)0xb98bca);
    return fn_408438(r);
}
} }
