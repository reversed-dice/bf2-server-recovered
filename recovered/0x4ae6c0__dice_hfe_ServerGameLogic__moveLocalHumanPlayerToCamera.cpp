// FUNCTION: BF2 0x4ae6c0
extern "C" {
    extern void* dice_hfe_world_playerManager;
    extern unsigned int dice_hfe_world_IID_IObject;
}

namespace dice { namespace hfe {

class ServerGameLogic {
public:
    int m_unk_0xA8;
    void* m_unk_0x128;
    void* m_unk_0x1B8;
    void* m_unk_0x1E8;
    unsigned char m_unk_0x490;
    unsigned char m_unk_0x491;
    unsigned char m_unk_0x492;
    unsigned int m_unk_0x494;
    float m_unk_0x4A0;
    int m_unk_0x4B0;
    char m_unk_0x556;
    unsigned char m_unk_0x55C;
    int m_unk_0x564;
    int m_unk_0x568;

    void moveLocalHumanPlayerToCamera();
};

void ServerGameLogic::moveLocalHumanPlayerToCamera() {
    typedef void* (*getter_t)(void*);
    typedef void* (*qi_t)(void*, unsigned int);
    typedef unsigned long long (*getdata_t)(void*);

    void* pmgr = ((getter_t)(*(void**)((char*)(*(void**)dice_hfe_world_playerManager) + 0x60)))(dice_hfe_world_playerManager);
    if (!pmgr) return;

    void* player = ((getter_t)(*(void**)((char*)(*(void**)pmgr) + 0x300)))(pmgr);
    if (!player) return;

    void* iobj = ((qi_t)(*(void**)((char*)(*(void**)player) + 0x18)))(player, dice_hfe_world_IID_IObject);

    void* cam = ((getter_t)(*(void**)((char*)(*(void**)pmgr) + 0x90)))(pmgr);
    if (!cam) return;

    {
        void (*setTarget)(void*, unsigned long long) =
            (void(*)(void*, unsigned long long))(*(void**)((char*)(*(void**)cam) + 0x118));
        unsigned long long data = ((getdata_t)(*(void**)((char*)(*(void**)iobj) + 0x108)))(iobj);
        setTarget(cam, data);
    }

    void* child = *(void**)((char*)cam + 0x88);
    if (child)
        ((void(*)(void*, int))(*(void**)((char*)(*(void**)child) + 0x230)))(child, 1);
}

} }
// REVERSED_FUNCTION: dice::hfe::ServerGameLogic::moveLocalHumanPlayerToCamera (0x4ae6c0)