// FUNCTION: BF2 0x4ae230
#include <string>
typedef void* (*lookup_4ae230)(void*, std::string const&);
typedef void  (*vfn_4ae230)(void*);
// Argument order from the registers, not from Ghidra: RDI=self, ESI=status,
// EDX=1, XMM0=0.0f. Ghidra prints (0, param_1, status, 1).
extern "C" void set_game_status_4a7470(void* self, int status, int flag, float t);

extern "C" void toggle_pause_4ae230(char* self) {
    int st = *(int*)(self + 0xa8);
    if (st == 4) {
        set_game_status_4a7470(self, *(int*)(self + 0x558), 1, 0.0f);
    } else {
        *(int*)(self + 0x558) = st;
        set_game_status_4a7470(self, 4, 1, 0.0f);
    }
    void* cm = *(void**)0x010b3798;
    lookup_4ae230 fn = *(lookup_4ae230*)(*(char**)cm + 0x98);
    void* mgr = fn(*(void**)0x010b3798, std::string("ParticleSystemManager"));
    if (mgr != 0) (*(vfn_4ae230*)(*(char**)mgr + 0x68))(mgr);
}
// REVERSED_FUNCTION: dice_hfe_ServerGameLogic_togglePause (0x4ae230)
