// FUNCTION: BF2 0x706760
namespace dice { namespace hfe { namespace world {
extern void sub_0x006d6580(void* self);
extern void del_0x006fa3b0(void* self);
void dtor_701980(void* self) {
    *(void**)self = (void*)0xb96f30;
    *(void**)((char*)self + 0xf0) = (void*)0xb97170;
    *(void**)((char*)self + 0xf8) = (void*)0xb97200;
    sub_0x006d6580((char*)self + 0xf0);
    del_0x006fa3b0(self);
}
} } }
