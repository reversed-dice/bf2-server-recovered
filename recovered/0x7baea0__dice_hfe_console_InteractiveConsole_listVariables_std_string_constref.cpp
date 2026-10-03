// FUNCTION: BF2 0x7baea0
namespace dice { namespace hfe { namespace console {
extern void fn_7be510(void* a, void* b);
void* listVariables_0x7baea0(void* self, void* s) {
    fn_7be510(self, *(void**)((char*)s + 0x258));
    return self;
}
} } }
