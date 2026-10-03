// FUNCTION: BF2 0x7da040
namespace dice { namespace hfe {
bool f_7da040(void* self, void* other) {
    int b = *(int*)((char*)self + 0x4);
    return *(int*)((char*)other + 0x4) == b;
}
} }
