// FUNCTION: BF2 0x5fcb50
namespace dice { namespace hfe { namespace world {
bool launchesProjectiles_0x5fcb50(void* self, int v) {
    if (((int (*)(void*))(*(void***)self)[0x48])(self) > 3) {
        if (*(int*)((char*)self + 0x164) != 0) {
            if (*(char*)((char*)*(void**)((char*)self + 0x188) + 0xa8) != 0) {
                if (*(char*)((char*)self + 0x170) == 0)
                    return false;
            }
        }
    }
    return true;
}
} } }
