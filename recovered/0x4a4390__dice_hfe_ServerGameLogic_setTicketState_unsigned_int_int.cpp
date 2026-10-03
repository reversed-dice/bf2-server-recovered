// FUNCTION: BF2 0x4a4390
namespace dice { namespace hfe {

typedef void* (*vfnget)(void*, unsigned int);
extern "C" void TeamScore_setTicketState_int(void*, int);

void fn_0x4a4390(void* self, unsigned int team, int val) {
    unsigned idx = team - 1;
    if (idx <= 1) {
        void* mgr = *(void**)0x10c0ea0;
        void* ts = ((vfnget)(*(void***)mgr)[0x20/8])(mgr, team);
        TeamScore_setTicketState_int(ts, val);
    }
}

} }
// REVERSED_FUNCTION: dice_hfe_ServerGameLogic_setTicketState_unsigned_int_int (0x4a4390)
