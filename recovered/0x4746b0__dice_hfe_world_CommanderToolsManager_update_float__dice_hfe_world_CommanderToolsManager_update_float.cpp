// FUNCTION: BF2 0x4746b0
namespace dice { namespace hfe { namespace world {

class CommanderToolState {
public:
    void update(float dt);
};

class CommanderToolsManager {
public:
    void update(float dt);
    void updateCommanderToys();
};

void CommanderToolsManager::update(float dt) {
    reinterpret_cast<CommanderToolState*>(reinterpret_cast<char*>(this) + 0x8)->update(dt);
    reinterpret_cast<CommanderToolState*>(reinterpret_cast<char*>(this) + 0x40)->update(dt);
    updateCommanderToys();
}

} } } // namespace
// REVERSED_FUNCTION: dice_hfe_world_CommanderToolsManager_update_float (0x4746b0)