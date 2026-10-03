// FUNCTION: BF2 0x473b70
namespace dice { namespace hfe { namespace world {

class CommanderToolState {
public:
    void reset();
};

class CommanderToolsManager {
public:
    void reset();
};

void CommanderToolsManager::reset() {
    CommanderToolState* s0 = (CommanderToolState*)((char*)this + 0x8);
    CommanderToolState* s1 = (CommanderToolState*)((char*)this + 0x40);
    s0->reset();
    s1->reset();
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_CommanderToolsManager_reset (0x473b70)