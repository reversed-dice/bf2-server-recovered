// FUNCTION: BF2 0x453b20
typedef char (*vfn1)(void*);
typedef void (*vfn2)(void*, int);
typedef void* (*vfn3)(void*);

extern "C" void performMobileCollisionUpdate_43a900(float f, void* obj, int flag);

extern "C" void simulatePlayerCollisions_453b20(void* self, void* player, float f)
{
    if (player) {
        if (((vfn1)(*(void***)player)[0x2a0/8])(player)) {
            ((vfn2)(*(void***)player)[0x298/8])(player, 0);
            void* r = ((vfn3)(*(void***)player)[0x90/8])(player);
            if (r) {
                performMobileCollisionUpdate_43a900(f, r, 0);
            }
        }
    }
}
