// FUNCTION: BF2 0x574e90
namespace dice { namespace hfe { namespace world {
extern void* fn_407508(int a);
extern void fn_574e20(void* a, void* b);
void* createTemplateInfo_0x574e90(void* self, void* arg2) {
    void* p = fn_407508(0x60);
    fn_574e20(p, arg2);
    return p;
}
} } }
