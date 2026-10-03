// FUNCTION: BF2 0x7dee10
namespace dice { namespace hfe {
class FileManager {
public:
    char _pad[0xbd];
    bool field;
    void permitMountArchives(bool v);
};
void FileManager::permitMountArchives(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_FileManager_permitMountArchives (0x7dee10)
