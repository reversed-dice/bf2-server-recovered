// FUNCTION: BF2 0x645630
namespace dice { namespace hfe {
extern void fn_6455d0(void* a, void* b);
extern void fn_6446b0(void* a, void* b);
void CopyTo_0x645630(void* self, void* arg2) {
    fn_6455d0(self, arg2);
    fn_6446b0((char*)arg2 + 0x58, (char*)self + 0x58);
    fn_6446b0((char*)arg2 + 0x68, (char*)self + 0x68);
    fn_6446b0((char*)arg2 + 0x78, (char*)self + 0x78);
}
} }
