// FUNCTION: BF2 0x7dc5e0
namespace dice { namespace hfe {
class FileChangeManager {
public:
    char _pad[0x84];
    bool field;
    void setEnable(bool v);
};
void FileChangeManager::setEnable(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_FileChangeManager_setEnable (0x7dc5e0)
