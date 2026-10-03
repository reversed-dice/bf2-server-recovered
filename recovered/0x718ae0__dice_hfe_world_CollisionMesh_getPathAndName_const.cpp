// FUNCTION: BF2 0x718ae0
namespace dice { namespace hfe { namespace world {
extern void fn_44fff0(void* a, void* b, void* c);
void* getPathAndName_0x718ae0(void* self, void* a) {
    void* p = *(void**)((char*)a + 0x18);
    fn_44fff0(self, (char*)p + 0x40, (char*)p + 0x48);
    return self;
}
} } }
