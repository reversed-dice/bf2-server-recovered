// FUNCTION: BF2 0x4c1c70
// Squad::setSquadName 0x4c1c70 — string assign + return 1
namespace dice { namespace hfe {

extern void str_assign3(void* dst, void* src);

bool setSquadName(void* self, void* name) {
    str_assign3((char*)self + 8, name);
    return true;
}

}}
