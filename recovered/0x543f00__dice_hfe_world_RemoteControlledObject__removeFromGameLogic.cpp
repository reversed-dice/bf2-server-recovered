// FUNCTION: BF2 0x543f00
namespace dice { namespace hfe { namespace world {

class RemoteControlledObject {
public:
    void removeFromGameLogic();

    unsigned int m_unk_0x20;
    unsigned int m_unk_0x47;
    unsigned int m_unk_0x49;
    long* m_unk_0x50;
    int m_unk_0x238;
    int m_unk_0x248;
    long* m_unk_0x250;
    void* m_unk_0x258;
};

} } }

extern void* dice_hfe_gameLogic;

void dice::hfe::world::RemoteControlledObject::removeFromGameLogic() {
    void* logic = dice_hfe_gameLogic;
    typedef void (*Func)(void*, dice::hfe::world::RemoteControlledObject*);
    Func f = (Func)(*(unsigned long long*)((char*)(*(void**)logic) + 0x390));
    f(logic, this);
}
// REVERSED_FUNCTION: dice_hfe_world_RemoteControlledObject::removeFromGameLogic (0x543f00)