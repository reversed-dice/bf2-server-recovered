// FUNCTION: BF2 0x464d80
namespace dice { namespace hfe {

class PersistenceObject;

class GameServer {
public:
    PersistenceObject* getCurrentPersistenceObject() const;

private:
    unsigned char __pad_0x0000[0x1d0];
    PersistenceObject* m_persistenceObject; // offset 0x1d0
};

PersistenceObject* GameServer::getCurrentPersistenceObject() const {
    return m_persistenceObject;
}

} } // namespace
// REVERSED_FUNCTION: dice_hfe_GameServer_getCurrentPersistenceObject (0x464d80)