// FUNCTION: BF2 0x4c01f0
extern void* dice_hfe_world_playerManager;
extern void* dice_hfe_game;
extern unsigned int dice_hfe_world_IID_IObject;

class SquadManager {
public:
    bool setCommanderToSoldierMode(int mode);
};

bool SquadManager::setCommanderToSoldierMode(int mode)
{
    void* pm = dice_hfe_world_playerManager;
    if (!pm) return false;
    if (!dice_hfe_game) return false;
    void* p = ((void* (*)(void*))(*(void***)pm)[0x40 / 8])(pm);
    if (!p) return false;
    if (!((bool (*)(void*))(*(void***)p)[0x178 / 8])(p)) return false;
    ((void (*)(void*, int))(*(void***)p)[0x170 / 8])(p, 0);
    void* q = ((void* (*)(void*))(*(void***)p)[0x300 / 8])(p);
    if (!q) return true;
    void* r = ((void* (*)(void*, unsigned int))(*(void***)q)[0x18 / 8])(q, dice_hfe_world_IID_IObject);
    ((void (*)(void*, int, void*, int))(*(void***)r)[0x208 / 8])(r, 2, p, 0);
    return true;
}
