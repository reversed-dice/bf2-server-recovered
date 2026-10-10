// FUNCTION: BF2 0x4c3590
namespace dice { namespace hfe {

extern void* fn_0x004c0b30(void* self, int team);
extern void* fn_0x004c0db0(void* self, int squad);
extern void* fn_0x004c5c10(void* self, int* v);
extern bool fn_0x004c3200(void* self, int a, bool b, bool c);

class SquadManager {
public:
    bool removeFromSquad(int teamId, int squadId, int playerId, bool force);
};

bool SquadManager::removeFromSquad(int teamId, int squadId, int playerId, bool force) {
    void* t = fn_0x004c0b30(this, teamId);
    if (t != 0) {
        void* sq = fn_0x004c0db0(t, squadId);
        if (sq != 0) {
            void* e = fn_0x004c5c10((char*)sq + 0x150, &playerId);
            if (e != (char*)sq + 0x158) {
                if (force)
                    ((void (*)(void*, int, int, int, int, int))(*(void***)this)[0x58 / 8])(this, teamId, squadId, playerId, 0, 0);
                return fn_0x004c3200(sq, playerId, false, force);
            }
        }
    }
    return false;
}

} }
