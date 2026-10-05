// FUNCTION: BF2 0x7a7940
// BF2_FLAGS: -fno-tree-ter -fno-strict-aliasing
extern "C" void dice_hfe_io_ZReader_close(void*);
extern "C" int inflateInit_(void*, const char*, int);

int fn_0x7a7940(char* self, void* param_2) {
    dice_hfe_io_ZReader_close(self);
    if (param_2 != 0) {
        if (inflateInit_(*(void**)(self + 8), (const char*)0xb9a5d1, 0x70) == 0) {
            *(void**)(*(void**)(self + 8)) = *(void**)(self + 0x20);
            *(int*)((char*)*(void**)(self + 8) + 8) = 0;
            *(void**)((char*)*(void**)(self + 8) + 0x18) = 0;
            *(int*)((char*)*(void**)(self + 8) + 0x20) = 0;
            *(void**)(self + 0x10) = param_2;
            typedef void (*fp)(void*);
            void** vt = *(void***)param_2;
            ((fp)vt[0])(param_2);
            return 1;
        }
    }
    return 0;
}
