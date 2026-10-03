// FUNCTION: BF2 0x61c480
namespace dice { namespace hfe {
bool f_61c480(void* self) {
    char* p = *(char**)((char*)self + 0x30);
    return *(int*)(p + 0x3c) != -0x1;
}
} }
