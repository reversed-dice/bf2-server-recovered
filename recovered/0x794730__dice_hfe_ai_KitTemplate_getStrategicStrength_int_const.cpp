// FUNCTION: BF2 0x794730
// KitTemplate::getStrategicStrength 0x794730 — ptr + index
namespace dice { namespace hfe { namespace ai {

int getStrategicStrength(void* self, int idx) {
    return *(int*)(*(char**)((char*)self + 8) + (long)idx * 4);
}

}}}
