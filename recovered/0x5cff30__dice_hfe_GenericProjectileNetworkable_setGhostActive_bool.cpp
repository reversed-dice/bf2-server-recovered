// FUNCTION: BF2 0x5cff30
namespace dice { namespace hfe {
void f_5cff30(void* self, char a) {
    *(int*)((char*)self + 0x80) = 0xbf800000;
    *(char*)((char*)self + 0x18) = a;
}
} }
