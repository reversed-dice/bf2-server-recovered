// FUNCTION: BF2 0x7919c0
// WeaponObject::getIsThrown 0x7919c0 — call + bool
namespace dice { namespace hfe { namespace ai {

extern bool is_thrown2(void* a);

bool getIsThrown(void* self) {
    return is_thrown2(*(void**)((char*)self + 0x18));
}

}}}
