// FUNCTION: BF2 0x418760
namespace dice { namespace hfe {
extern void del_0x00408198(void* p);
extern void* fn_0x00418610(void* self);
void f_418760(void* self) {
    if (!*(char*)((char*)self + 0x61)) {
        void* m = *(void**)((char*)self + 0x68);
        if (m)
            del_0x00408198(m);
        void* r = fn_0x00418610(self);
        *(char*)((char*)self + 0x61) = 0x1;
        *(void**)((char*)self + 0x68) = r;
    }
}
} }
