// FUNCTION: BF2 0x4c11a0
// dice::hfe::SquadManager::setIsPrivate(int, int, bool, bool) -- 0x4c11a0
//
// Sets the squad's private flag, and unless the call came from the network
// path, broadcasts a SetPrivateSquadEvent through the game object.

extern "C" void* fn_4c0df0(void*, int, int);                 // SquadManager::getSquad(int, int)
extern "C" void* fn_407508(unsigned long);                   // operator new
extern "C" void  fn_42f600(void*, int, int, int);  // SetPrivateSquadEvent ctor

typedef void (*Fn128)(void*, void*);

unsigned setIsPrivate_4c11a0(void* self, int team, int squad,
                             unsigned char isPrivate, char fromNetwork)
{
    if (squad == 0) return 0;
    char* sq = (char*)fn_4c0df0(self, team, squad);
    if (sq == 0) return 0;

    int priv = isPrivate;
    *(unsigned char*)(sq + 0x18) = (unsigned char)priv;
    if (fromNetwork == 0) {
        void* game = *(void**)0x010c5420;
        if (game != 0) {
            Fn128 send = *(Fn128*)(*(char**)game + 0x128);
            void* ev = fn_407508(0x18);
            fn_42f600(ev, team, squad, priv);
            send(*(void**)0x010c5420, ev);
        }
    }
    return 1;
}
// REVERSED_FUNCTION: dice_hfe_SquadManager_setIsPrivate_int_int_bool_bool (0x4c11a0)
