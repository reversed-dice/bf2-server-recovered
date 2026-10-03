// FUNCTION: BF2 0x4a3090
extern "C" void fn_4a2fc0(void*, void*);
void fn_4a3090(void* self, void* src) {
    fn_4a2fc0((char*)self + 0x318, src);
    fn_4a2fc0((char*)self + 0x348, (char*)src + 0x30);
}