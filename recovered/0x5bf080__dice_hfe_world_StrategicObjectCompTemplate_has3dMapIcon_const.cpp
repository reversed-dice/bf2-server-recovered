// FUNCTION: BF2 0x5bf080
// StrategicObjectCompTemplate::has3dMapIcon 0x5bf080 — != -1
namespace dice { namespace hfe { namespace world {

bool has3dMapIcon(void* self) {
    return *(int*)((char*)self + 0x40) != -1;
}

}}}
