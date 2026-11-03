// FUNCTION: BF2 0x473e30
namespace dice { namespace hfe { namespace world {
struct Vec3 { float x, y, z; };
class CommanderToolState {
public:
    bool getUAVActive(Vec3* v) const;
    char pad[0x38];
};
bool CommanderToolState::getUAVActive(Vec3* v) const { (void)v; return false; }
class CommanderToolsManager {
public:
    bool getUAVActive(int idx, Vec3* v);
    char pad[8];
    CommanderToolState m_states[2];
};
bool CommanderToolsManager::getUAVActive(int idx, Vec3* v)
{
    if (idx < 1 || idx > 2)
        return false;
    return m_states[idx - 1].getUAVActive(v);
}
}}}
