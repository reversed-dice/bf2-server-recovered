// FUNCTION: BF2 0x473c50
namespace dice { namespace hfe { namespace world {
class CommanderToolState {
public:
    bool getScanActive() const;
    char pad[0x38];
};
bool CommanderToolState::getScanActive() const { return false; }
class CommanderToolsManager {
public:
    bool getSatelliteScanActive(int idx);
    char pad[8];
    CommanderToolState m_states[2];
};
bool CommanderToolsManager::getSatelliteScanActive(int idx)
{
    if (idx < 1 || idx > 2)
        return false;
    return m_states[idx - 1].getScanActive();
}
}}}
