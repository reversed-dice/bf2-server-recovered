// FUNCTION: BF2 0x4c3950
// SquadManager::getCommanderCam 0x4c3950 — cam ou 0
namespace dice { namespace hfe {

extern void* get_applicant7(void* self);
extern int get_cam(void* applicant);

int getCommanderCam(void* self) {
    void* a = get_applicant7(self);
    if (a != 0)
        return get_cam(a);
    return 0;
}

}}
