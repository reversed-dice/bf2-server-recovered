// FUNCTION: BF2 0x43afc0
#include <stdlib.h>

typedef void* (*FnQuery_43afc0)(void*, unsigned int);
typedef void (*FnFlags_43afc0)(void*, unsigned int, unsigned int);
typedef void (*FnTail_43afc0)(void*);

extern "C" void dice_hfe_enableObject_dice_hfe_world_IObjectptr_bool(void* obj, bool flag)
{
    unsigned char* base = static_cast<unsigned char*>(obj);
    if (base[0x8] & 0x20) {
        abort();
    }
    void* p = (*reinterpret_cast<FnQuery_43afc0*>(*reinterpret_cast<void***>(obj) + 3))(obj, *reinterpret_cast<unsigned int*>(0xc7ce6c));
    if (*reinterpret_cast<void**>(base + 0x50) == 0) goto body;
    if (p != 0) goto body;
    return;
body:
    (*reinterpret_cast<FnFlags_43afc0*>(*reinterpret_cast<void***>(obj) + 0x18))(obj, 0u, 1u);
    if (p == 0) {
        return;
    }
    if (*reinterpret_cast<void**>(base + 0x50) == 0) {
        (*reinterpret_cast<FnTail_43afc0*>(*reinterpret_cast<void***>(p) + 0x55))(p);
    }
}
// REVERSED_FUNCTION: dice_hfe_enableObject_dice_hfe_world_IObjectptr_bool (0x43afc0)
