// FUNCTION: BF2 0x4bea60
// dice::hfe::ClientSquadManager::setIsPrivate(int, int, bool, bool) -- 0x4bea60
//
// Client side: when not called from the server path, package the request as a
// SetPrivateSquadEvent and hand it to the game's event sender; otherwise defer
// to the base SquadManager implementation.

extern "C" void* fn_407508(unsigned long);                                  // operator new
extern "C" void  fn_42f600(void*, int, int, unsigned char);                 // SetPrivateSquadEvent ctor
extern "C" unsigned char fn_4c11a0(void*, int, int, unsigned char, unsigned char);  // SquadManager::setIsPrivate

typedef void (*Fn120)(void*, int, void*);

unsigned char setIsPrivate_4bea60(void* self, int team, int squad,
                                  unsigned char isPrivate, char fromServer)
{
    if (fromServer) return fn_4c11a0(self, team, squad, isPrivate, 1);

    void* game = *(void**)0x010c5420;
    if (game == 0) return 1;

    Fn120 send = *(Fn120*)(*(char**)game + 0x120);
    void* ev = fn_407508(0x18);
    fn_42f600(ev, team, squad, isPrivate);
    send(*(void**)0x010c5420, -1, ev);
    return 1;
}
// REVERSED_FUNCTION: dice_hfe_ClientSquadManager_setIsPrivate_int_int_bool_bool (0x4bea60)
