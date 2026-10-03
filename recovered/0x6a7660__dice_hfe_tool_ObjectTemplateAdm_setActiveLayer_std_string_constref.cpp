// FUNCTION: BF2 0x6a7660
namespace dice { namespace hfe { namespace tool {
extern int fn_6a7190(void* a, void* b);
extern void fn_408238(void* a, void* b);
extern int g_f68b80;
void setActiveLayer_0x6a7660(void* self, void* arg2) {
    int r = fn_6a7190(self, arg2);
    if (r >= 0) {
        fn_408238((void*)0x1092d70, arg2);
        g_f68b80 = r;
    }
}
} } }
