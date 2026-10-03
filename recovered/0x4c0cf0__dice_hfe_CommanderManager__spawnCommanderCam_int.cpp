// FUNCTION: BF2 0x4c0cf0
namespace dice { namespace hfe {

class CommanderManager {
public:
    char _pad[0x40];
    void* m_unk_0x40;
    void spawnCommanderCam_int(int param);
};

extern void* gameLogic;
extern void* squadManager;

void CommanderManager::spawnCommanderCam_int(int param) {
    if (__builtin_expect(gameLogic != 0, 1)) {
        if (__builtin_expect(((bool(*)(void*))(*(void***)gameLogic)[0x4f])(gameLogic), 1)) {
            if (__builtin_expect(m_unk_0x40 == 0 || *(void**)((char*)m_unk_0x40 + 8) == 0, 0)) {
                ((void(*)(void*, int))(*(void***)squadManager)[0x1d])(squadManager, param);
            }
        }
    }
}

} }
// REVERSED_FUNCTION: dice::hfe::CommanderManager::spawnCommanderCam_int (0x4c0cf0)