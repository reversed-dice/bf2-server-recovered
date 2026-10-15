// FUNCTION: BF2 0x6397f0
// BF2_FLAGS: -fcrossjumping
namespace dice { namespace hfe { namespace world {

typedef void (*SleepFn)(void*, unsigned int, unsigned int);

void setSleepiness_0x6397f0(void* self, int val) {
    if (*(int*)*(void**)0x1092940 == 1) {
        *(int*)((char*)self + 0x74) = *(int*)((char*)self + 0x70);
        void* obj = *(void**)((char*)self + 0x18);
        ((SleepFn)(*(void***)obj)[0xc0 / 8])(obj, 0x800, 0);
        return;
    }
    if (*(int*)*(void**)0x1092948 != 1) {
        if (val > 0) {
            void* obj = *(void**)((char*)self + 0x18);
            if (!((*(unsigned char*)((char*)obj + 9)) & 8)) {
                ((SleepFn)(*(void***)obj)[0xc0 / 8])(obj, 0x800, 0);
            }
            *(int*)((char*)self + 0x74) = val;
            return;
        }
        {
            void* obj = *(void**)((char*)self + 0x18);
            if ((*(unsigned char*)((char*)obj + 9)) & 8) {
                ((SleepFn)(*(void***)obj)[0xc0 / 8])(obj, 0, 0x800);
            }
            *(int*)((char*)self + 0x74) = val;
            return;
        }
    }
    *(int*)((char*)self + 0x74) = 0;
    {
        void* obj = *(void**)((char*)self + 0x18);
        ((SleepFn)(*(void***)obj)[0xc0 / 8])(obj, 0, 0x800);
    }
}
} } }
