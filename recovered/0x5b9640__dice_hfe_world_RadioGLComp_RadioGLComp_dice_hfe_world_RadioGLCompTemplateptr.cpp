// FUNCTION: BF2 0x5b9640
namespace dice { namespace hfe { namespace world {
void ctor_5b9640(void* self, void* arg) {
    *(void**)self = (void*)0xb68070;
    *(int*)((char*)self + 0x8) = (int)0x1;
    *(void**)((char*)self + 0x10) = arg;
    *(unsigned char*)((char*)self + 0x20) = (unsigned char)0x1;
    *(unsigned char*)((char*)self + 0x21) = (unsigned char)0x1;
    *(unsigned char*)((char*)self + 0x22) = (unsigned char)0x0;
    *(unsigned char*)((char*)self + 0x23) = (unsigned char)0x1;
}
} } }
