// FUNCTION: BF2 0x537390
typedef void* (*vfn1)(void*, unsigned int);
typedef void (*vfn2)(void*, void*);

extern "C" unsigned int g_iid_537390;

extern "C" void setPlayerOnWeapons_537390(void* self, void* player)
{
    void** cur = *(void***)((char*)self + 0x338);
    while (cur != *(void***)((char*)self + 0x340)) {
        void* obj = *cur;
        void* obj2 = ((vfn1)(*(void***)obj)[0x18/8])(obj, g_iid_537390);
        if (obj2) {
            ((vfn2)(*(void***)obj2)[0xd0/8])(obj2, player);
        }
        cur++;
    }
}
