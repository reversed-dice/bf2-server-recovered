// FUNCTION: BF2 0x6295a0
namespace dice { namespace hfe {
void f_6295a0(void* self) {
    char* p = *(char**)((char*)self + 0x48);
    if (*(char*)(p + 0x44) && *(int*)((char*)self + 0x34))
        *(char*)((char*)self + 0x44) = 0x1;
}
} }
