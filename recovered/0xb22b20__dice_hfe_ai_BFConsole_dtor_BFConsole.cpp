// FUNCTION: BF2 0xb22b20
extern "C" void* g_114b840;
extern "C" void fn_b25dd0(void*, void*);
extern "C" void fn_b25e10(void*, void*);
extern "C" void fn_b264b0(void*, void*);

extern "C" void BFConsole_dtor_b22b20(void* self)
{
    void* g = g_114b840;
    void* r = (g != self) ? g : 0;   // CMOVNZ
    g_114b840 = r;
    void* c1 = (char*)self + 0x70;
    fn_b25dd0(c1, *(void**)((char*)c1 + 0x10));
    void* c2 = (char*)self + 0x40;
    fn_b25e10(c2, *(void**)((char*)c2 + 0x10));
    void* c3 = (char*)self + 0x10;
    fn_b264b0(c3, *(void**)((char*)c3 + 0x10));
}
