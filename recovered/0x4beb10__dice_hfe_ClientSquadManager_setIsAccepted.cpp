// FUNCTION: BF2 0x4beb10
// dice::hfe::ClientSquadManager::setIsAccepted(int, int, bool, OrderType, SquadOrderType, bool) -- 0x4beb10
//
// Client side: package the order acknowledgement as a SetAcceptOrderEvent and
// send it through the game object, or defer to the base SquadManager when the
// call already comes from the server path.

extern "C" void* fn_407508(unsigned long);                                  // operator new
extern "C" void  fn_42eba0(void*, int, int, unsigned char, int, int);       // SetAcceptOrderEvent ctor
extern "C" unsigned char fn_4c1070(void*, int, int, unsigned char, int, int, int);  // SquadManager::setIsAccepted

typedef void (*Fn120)(void*, int, void*);

unsigned char setIsAccepted_4beb10(void* self, int team, int squad, unsigned char accepted,
                                   int orderType, int squadOrderType, char fromServer)
{
    if (fromServer) return fn_4c1070(self, team, squad, accepted, orderType, squadOrderType, 1);

    void* game = *(void**)0x010c5420;
    if (game == 0) return 1;

    Fn120 send = *(Fn120*)(*(char**)game + 0x120);
    void* ev = fn_407508(0x18);
    fn_42eba0(ev, team, squad, accepted, orderType, squadOrderType);
    send(*(void**)0x010c5420, -1, ev);
    return 1;
}
// REVERSED_FUNCTION: dice_hfe_ClientSquadManager_setIsAccepted_int_int_bool_dice_hfe_OrderType_dice_hfe_SquadOrderType_bool (0x4beb10)
