// FUNCTION: BF2 0x543ed0
namespace dice { namespace hfe { namespace world {

extern void* dice_hfe_gameLogic;

class RemoteControlledObject {
public:
    char _pad_0x00[0x248];
    int m_unk_0x248;

    void addToGameLogic();
};

void RemoteControlledObject::addToGameLogic() {
    if (m_unk_0x248 != -1) {
        void* obj = dice_hfe_gameLogic;
        void** vt = *(void***)obj;
        ((void (*)(void*, void*))vt[0x70])(obj, this);
    }
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_RemoteControlledObject::addToGameLogic (0x543ed0)