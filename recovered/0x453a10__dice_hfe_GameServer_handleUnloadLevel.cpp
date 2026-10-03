// FUNCTION: BF2 0x453a10
typedef void* (*vfn1)(void*);
extern "C" void fn_416770(void*);
extern "C" void fn_73e350(void*);
extern "C" void fn_73e2e0(void*);
extern "C" void* g_010a5100;
extern "C" int target_453a10(void* self)
{
    ((vfn1*)*(void***)self)[0x50/8](self);
    fn_416770((char*)self + 8);
    fn_73e350(g_010a5100);
    fn_73e2e0(g_010a5100);
    return 0;
}
