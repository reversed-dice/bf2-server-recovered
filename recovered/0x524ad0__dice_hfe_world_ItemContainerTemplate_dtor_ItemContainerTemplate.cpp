// FUNCTION: BF2 0x524ad0
namespace dice { namespace hfe { namespace world {
extern void sub_0x00453640(void* self);
extern void del_0x005768d0(void* self);
void dtor_524ad0(void* self) {
    *(void**)self = (void*)0xb44150;
    *(void**)((char*)self + 0x10) = (void*)0xb44400;
    *(void**)((char*)self + 0x68) = (void*)0xb44438;
    *(void**)((char*)self + 0x1c8) = (void*)0xb444b8;
    *(void**)((char*)self + 0x1f8) = (void*)0xb44520;
    sub_0x00453640((char*)self + 0x218);
    del_0x005768d0(self);
}
} } }
