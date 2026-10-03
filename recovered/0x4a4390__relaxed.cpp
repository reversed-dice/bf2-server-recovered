// FUNCTION: BF2 0x4a4390
namespace dice { namespace hfe {

typedef void* (*vfnget)(void*, unsigned int);
extern "C" void TeamScore_setNumberOfTickets_int(void*, unsigned int);

void fn_0x4a45e0(void* self, unsigned int team, unsigned int count) {
    unsigned idx = team - 1;
    if (idx <= 1) {
        void* mgr = *(void**)0x10c0ea0;
        void* ts = ((vfnget)(*(void***)mgr)[0x20/8])(mgr, team);
        TeamScore_setNumberOfTickets_int(ts, count);
    }
}

} }
// REVERSED_FUNCTION: dice_hfe_ServerGameLogic_setNumberOfTickets_unsigned_int_unsigned_int (0x4a45e0)
