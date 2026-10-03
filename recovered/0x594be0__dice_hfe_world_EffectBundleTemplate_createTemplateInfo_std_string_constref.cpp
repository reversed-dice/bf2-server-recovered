// FUNCTION: BF2 0x594be0
namespace dice { namespace hfe { namespace world {
extern void* fn_407508(int a);
extern void fn_594bc0(void* a, void* b);
void* createTemplateInfo_0x594be0(void* self, void* arg2) {
    void* p = fn_407508(0x68);
    fn_594bc0(p, arg2);
    return p;
}
} } }
