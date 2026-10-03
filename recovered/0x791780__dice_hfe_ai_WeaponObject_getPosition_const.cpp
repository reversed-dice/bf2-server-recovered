// FUNCTION: BF2 0x791780
// WeaponObject::getPosition 0x791780 — virtual + offset
namespace dice { namespace hfe { namespace ai {

typedef void* (*VF_GETPOS)(void*);

void* getPosition(void* self) {
    VF_GETPOS f = (VF_GETPOS)(*reinterpret_cast<void**>((char*)*reinterpret_cast<void**>(self) + 0xb0));
    return (char*)f(self) + 0x30;
}

}}}
