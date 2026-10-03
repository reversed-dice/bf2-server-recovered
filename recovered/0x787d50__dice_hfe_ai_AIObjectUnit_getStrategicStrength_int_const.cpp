// FUNCTION: BF2 0x787d50
// AIObjectUnit::getStrategicStrength 0x787d50 — ptr + index
namespace dice { namespace hfe { namespace ai {

int getStrategicStrength(void* self, int idx) {
    return *(int*)(*(char**)((char*)self + 0x20) + (long)idx * 4);
}

}}}
