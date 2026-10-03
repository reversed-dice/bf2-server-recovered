// FUNCTION: BF2 0x5517e0
namespace dice { namespace hfe {
extern void del_0x006c7650(void* p);
void f_5517e0(void* self, char flag) {
    if (flag) {
        *(char*)((char*)self + 0x46a) = 0x1;
        void* m = *(void**)((char*)self + 0x438);
        if (m)
            del_0x006c7650(m);
    } else {
        *(char*)((char*)self + 0x46a) = 0x0;
    }
}
} }
