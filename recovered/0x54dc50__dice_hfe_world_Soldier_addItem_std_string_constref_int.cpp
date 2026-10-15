// FUNCTION: BF2 0x54dc50
#include <string>

extern void fn_69a020(void* self, unsigned int a, unsigned int b);
extern int fn_54da70(void* self, void* a, void* b);

int addItem_54dc50(void* self, std::string const& name, int arg) {
    void* mgr = *(void**)0x0112ee40;
    void* tmpl = (*(void* (*)(void*, std::string const*, int))(*(void***)mgr)[0x48/8])(mgr, &name, arg);
    if (tmpl == 0) return -1;
    void* obj = (*(void* (*)(void*))(*(void***)tmpl)[0xa8/8])(tmpl);
    if (obj == 0) return -1;
    (*(void (*)(void*))(*(void***)obj)[0x40/8])(obj);
    (*(void (*)(void*, int, int))(*(void***)obj)[0xc0/8])(obj, 0, 0x100);
    fn_69a020(obj, 0, 0x100);
    void* inner = *(void**)((char*)obj + 0x28);
    if ((*(int (*)(void*))(*(void***)inner)[0x20/8])(inner) != *(int*)0x00c7d038) {
        void* item = (*(void* (*)(void*, int))(*(void***)obj)[0x18/8])(obj, *(int*)0x00c7d0e8);
        typedef void (*Fn20b)(void*, void*, void*);
        Fn20b f = (Fn20b)(*(void***)item)[0x20/8];
        void* x = (*(void* (*)(void*))(*(void***)self)[0x300/8])(self);
        f(item, x, self);
        return (*(int (*)(void*))(*(void***)item)[0x60/8])(item);
    }
    fn_54da70(self, 0, obj);
    return 0;
}
