// FUNCTION: BF2 0x787d40
// AIObjectUnit::getBattleStrength 0x787d40 — ptr + index
namespace dice { namespace hfe { namespace ai {

int getBattleStrength(void* self, int idx) {
    return *(int*)(*(char**)((char*)self + 0x18) + (long)idx * 4);
}

}}}
