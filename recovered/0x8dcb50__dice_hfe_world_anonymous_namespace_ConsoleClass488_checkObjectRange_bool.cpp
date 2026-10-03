// FUNCTION: BF2 0x8dcb50
namespace dice { namespace hfe { namespace world {
bool checkObjectRange_0x751ce0(void* self, bool a) {
    int n = *(int*)((char*)self + 0x30);
    if (n <= 0)
        return false;
    int* p = *(int**)((char*)self + 0x38);
    if (*p < 0) {
        if (a)
            *p = 0;
        return false;
    }
    if (*p > 0x8) {
        if (a)
            *p = 0x8;
        return false;
    }
    return false;
}
} } }
