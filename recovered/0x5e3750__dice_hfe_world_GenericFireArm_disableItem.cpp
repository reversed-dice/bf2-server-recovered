// FUNCTION: BF2 0x5e3750
// GenericFireArm::disableItem 0x5e3750 — disable si actif
namespace dice { namespace hfe { namespace world {

typedef void (*VF_DISABLE)(void*);

void disableItem(void* self) {
    if (*(unsigned char*)((char*)self + 0x30c) == 0)
        return;
    *(void**)((char*)self + 0x358) = 0;
    VF_DISABLE f = (VF_DISABLE)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(self) + 0x528));
    f(self);
    *(unsigned char*)((char*)self + 0x30c) = 0;
}

}}}
