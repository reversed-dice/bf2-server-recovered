// FUNCTION: BF2 0x464d80
namespace dice { namespace hfe {
class GameServer {
public:
    char _pad[0x1d0];
    void* field;
    void* getCurrentPersistenceObject() const;
};
void* GameServer::getCurrentPersistenceObject() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_GameServer_getCurrentPersistenceObject (0x464d80)
