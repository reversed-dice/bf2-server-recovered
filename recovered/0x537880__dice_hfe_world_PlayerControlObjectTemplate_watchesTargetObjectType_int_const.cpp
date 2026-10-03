// FUNCTION: BF2 0x537880
namespace dice { namespace hfe {
extern void* fn_0x004c5c10(void* self, int* v);
bool f_537880(void* self, int v) {
    void* end = fn_0x004c5c10((char*)self + 0x370, &v);
    return (char*)self + 0x378 != end;
}
} }
