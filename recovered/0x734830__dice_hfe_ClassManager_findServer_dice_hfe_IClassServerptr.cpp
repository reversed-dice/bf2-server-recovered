// FUNCTION: BF2 0x734830
namespace dice { namespace hfe {
extern void* fn_0x00736900(void* self, void** v);
bool f_734830(void* self, void* v) {
    void* end = fn_0x00736900((char*)self + 0x10, &v);
    return (char*)self + 0x18 != end;
}
} }
