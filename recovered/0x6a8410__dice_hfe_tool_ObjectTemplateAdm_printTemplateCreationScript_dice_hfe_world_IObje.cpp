// FUNCTION: BF2 0x6a8410
namespace dice { namespace hfe { namespace tool {
extern void* fn_6a7120(void* a);
extern void fn_6a6dc0(void* a, void* b);
extern void fn_6a82d0(void* a, void* b);
void* printTemplateCreationScript_0x6a8410(void* self, void* a, void* b) {
    fn_6a7120(a);
    fn_6a6dc0(b, *(void**)((char*)a + 0x808));
    fn_6a82d0(self, *(void**)((char*)a + 0x808));
    return self;
}
} } }
