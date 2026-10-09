// FUNCTION: BF2 0x76f650
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
    virtual void* getSpawnPointManager();
};

extern SpawnManager* spawnManager;

namespace ai {

class BFGame {
public:
    virtual bool isEnterOnSpawnSpawnpoint(int pointId) const;
};

bool BFGame::isEnterOnSpawnSpawnpoint(int pointId) const
{
    if (pointId == 0) {
        return false;
    }
    void* spm = spawnManager->getSpawnPointManager();
    if (spm == 0) {
        return false;
    }
    void* sp = ((void* (*)(void*, int))(*(void***)spm)[0x88 / 8])(spm, 1);
    bool r = false;
    if (((bool (*)(void*))(*(void***)sp)[0x40 / 8])(sp)) {
        r = true;
    }
    else if (((bool (*)(void*))(*(void***)sp)[0x48 / 8])(sp)) {
        r = true;
    }
    return r;
}

} // namespace ai
} // namespace hfe
} // namespace dice
