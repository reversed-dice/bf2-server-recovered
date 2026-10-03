// FUNCTION: BF2 0x794760
// KitTemplate::getBattleStrength 0x794760 — ptr + index
namespace dice { namespace hfe { namespace ai {

int getBattleStrength(void* self, int idx) {
    return *(int*)(*(char**)((char*)self + 0x10) + (long)idx * 4);
}

}}}
