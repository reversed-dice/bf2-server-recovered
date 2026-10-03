// FUNCTION: BF2 0x791910
// WeaponObject::getStrength 0x791910 — tableau indexé
namespace dice { namespace hfe { namespace ai {

int getStrength(void* self, int idx) {
    void* a = *(void**)((char*)self + 0x18);
    return *(int*)(*(char**)((char*)a + 0x40) + (long)idx * 4);
}

}}}
