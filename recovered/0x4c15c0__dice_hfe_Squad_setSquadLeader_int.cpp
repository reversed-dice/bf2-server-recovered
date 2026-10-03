// FUNCTION: BF2 0x4c15c0
namespace dice { namespace hfe {
extern void fn_4c1370(void* a, int b);
extern bool fn_4bff40(void* a, int b, int c);
bool setSquadLeader_0x4c15c0(void* self, int arg2) {
    fn_4c1370(self, 0);
    return fn_4bff40(self, 1, arg2);
}
} }
