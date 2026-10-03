// FUNCTION: BF2 0x4c3940
// Team::getCommanderCam 0x4c3940 — tail-call avec self
namespace dice { namespace hfe {

extern int team_cam(void* list, void* team);

int getCommanderCam(void* self) {
    return team_cam((char*)self + 0x48, self);
}

}}
