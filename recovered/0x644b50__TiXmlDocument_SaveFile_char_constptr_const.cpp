// FUNCTION: BF2 0x644b50
namespace dice { namespace hfe {
extern void* fn_408418(void* a, void* b);
extern void fn_407738(void* a);
bool SaveFile_0x644b50(void* self, const char* file) {
    void* f = fn_408418((void*)file, (void*)0xbc1048);
    if (!f)
        return false;
    ((void (*)(void*, void*, int))(*(void***)self)[0x2])(self, f, 0);
    fn_407738(f);
    return true;
}
} }
