// FUNCTION: BF2 0x546290
namespace dice { namespace hfe { namespace world {

class PlayerManager {
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
    virtual void v10();
    virtual void v11();
    virtual void* getLocalPlayer(); // slot 12 (+0x60)
};

extern PlayerManager* playerManager;

class BFSound {
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
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void* getData();     // slot 29 (+0xe8)
    virtual void fn_f0();        // slot 30 (+0xf0)
    virtual void stopTinnitus(); // slot 31 (+0xf8)
};

extern BFSound* g_bfSound;

class EventManager {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void postEvent(int, int, void*, float); // slot 5 (+0x28)
};

extern EventManager* eventManager;

void stopTinnitus(void* self);
void stopTinnitus(void* self)
{
    void* local = ((void* (*)(void*))(*(void***)self)[0x300 / 8])(self);
    void* other = playerManager->getLocalPlayer();
    if (local == other) {
        g_bfSound->stopTinnitus();
        float zero = 0.0f;
        eventManager->postEvent(0, 0xd, g_bfSound->getData(), zero);
    }
}

} } }
