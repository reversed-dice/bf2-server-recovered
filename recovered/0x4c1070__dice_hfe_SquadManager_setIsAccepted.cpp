// FUNCTION: BF2 0x4c1070
// dice::hfe::SquadManager::setIsAccepted(int, int, bool, OrderType, SquadOrderType, bool) -- 0x4c1070
//
// Applies the acknowledgement to the squad, notifies the AI event courier when
// the AI is running and the order is of type 1, then broadcasts a
// SetAcceptOrderEvent unless the call came from the network path.

extern "C" void* fn_4c0df0(void*, int, int);                 // SquadManager::getSquad(int, int)
extern "C" void  fn_4bfec0(void*, int, int, int);            // Squad::setIsAccepted(bool, OrderType, SquadOrderType)
extern "C" void* fn_407508(unsigned long);                   // operator new
extern "C" void  fn_42eba0(void*, int, int, int, int, int);  // SetAcceptOrderEvent ctor

typedef char (*Fn38)(void*);
typedef void (*Fne8)(void*, int);
typedef void (*Fn128)(void*, void*);

unsigned setIsAccepted_4c1070(void* self, int team, int squad, unsigned char accepted,
                              int orderType, int squadOrderType, char fromNetwork)
{
    if (squad < 1) return 0;
    void* sq = fn_4c0df0(self, team, squad);
    if (sq == 0) return 0;

    // Widened once and reused by both the squad call and the event constructor.
    int acc = accepted;
    fn_4bfec0(sq, acc, orderType, squadOrderType);

    void* ai = *(void**)0x010ae0c0;
    if (ai != 0 && (*(Fn38*)(*(char**)ai + 0x38))(ai) && orderType == 1) {
        void* courier = *(void**)0x010add68;
        (*(Fne8*)(*(char**)courier + 0xe8))(courier, squad);
    }

    if (fromNetwork == 0) {
        void* game = *(void**)0x010c5420;
        if (game != 0) {
            Fn128 send = *(Fn128*)(*(char**)game + 0x128);
            void* ev = fn_407508(0x18);
            fn_42eba0(ev, team, squad, acc, orderType, squadOrderType);
            send(*(void**)0x010c5420, ev);
        }
    }
    return 1;
}
// REVERSED_FUNCTION: dice_hfe_SquadManager_setIsAccepted_int_int_bool_dice_hfe_OrderType_dice_hfe_SquadOrderType_bool (0x4c1070)
