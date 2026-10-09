// FUNCTION: BF2 0x76f5b0
// BF2_FLAGS: -fno-strict-aliasing
namespace dice {
namespace hfe {

class SpawnManager {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    // slot 10 (+0x50)
    virtual void* getSpawnPoint(int id);
};

extern SpawnManager* spawnManager;

namespace ai {

class BFGame {
public:
    bool isEligibleSpawnpoint(int team, int pointId) const;
};

bool BFGame::isEligibleSpawnpoint(int team, int pointId) const
{
    if (pointId != 0) {
        void* sp = spawnManager->getSpawnPoint(pointId);
        if (sp != 0) {
            int spTeam = ((int (*)(void*))(*(void***)sp)[0x38 / 8])(sp);
            bool b58 = ((bool (*)(void*, int))(*(void***)sp)[0x58 / 8])(sp, 1);
            if (spTeam == team) {
                if (!((bool (*)(void*))(*(void***)sp)[0x78 / 8])(sp)) {
                    if (b58) {
                        return true;
                    }
                }
            }
        }
    }
    return false;
}

} // namespace ai
} // namespace hfe
} // namespace dice
