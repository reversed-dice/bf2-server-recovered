// FUNCTION: BF2 0x4f4430
namespace dice { namespace hfe {
extern "C" void fn_4effd0(void*);
extern "C" void fn_4f1db0(void*, void*);
extern "C" void fn_4f3e70(void*, void*);
extern "C" void fn_4f0130(void*);
struct DemoRecorder {
    unsigned char _pad0[0x8];
    unsigned char m_cfg[0x50];
    void* m_58;
    void* m_60;
    unsigned char _pad3[0x48];
    void* m_b0;
    void* m_b8;
};
void ctor_0x4f4430(DemoRecorder* self, void* str) {
    unsigned char tmp[0x50];
    fn_4effd0(&self->m_cfg[0]);
    self->m_58 = (void*)0xf6c6e8;
    self->m_60 = (void*)0xf6c6e8;
    void* p = (char*)self + 0xb0;
    self->m_b0 = p;
    *(void**)((char*)p + 8) = p;
    fn_4effd0(tmp);
    fn_4f1db0(tmp, str);
    fn_4f3e70(self, tmp);
    fn_4f0130(tmp);
}
}}
