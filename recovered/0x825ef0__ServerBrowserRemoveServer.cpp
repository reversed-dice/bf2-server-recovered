// FUNCTION: BF2 0x825ef0
namespace dice { namespace hfe {
extern int fn_826be0(void* a, void* b);
extern void fn_826d30(void* a, int b);
void ServerBrowserRemoveServer_0x825ef0(void* self, void* arg2) {
    void* p = (char*)self + 0x70;
    int i = fn_826be0(p, arg2);
    if (i != -1)
        fn_826d30(p, i);
}
} }
