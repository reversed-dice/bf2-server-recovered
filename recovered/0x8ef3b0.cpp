extern "C" long cor_8ef3b0(void* self, bool flag)
{
    if (*(int*)((char*)self + 0x30) > 0) {
        int* p = *(int**)((char*)self + 0x38);
        if (*p < -1) {
            if (flag) {
                *p = -1;
                return 0;
            }
        } else if (*p > 3 && flag) {
            *p = 3;
        }
    }
    return 0;
}
