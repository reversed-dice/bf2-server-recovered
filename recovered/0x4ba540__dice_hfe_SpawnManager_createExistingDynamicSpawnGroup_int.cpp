// FUNCTION: BF2 0x4ba540
namespace dice { namespace hfe { namespace world { class IPlayer; } } }
namespace dice { namespace hfe {

class ISpawnPoint;
class ISpawnGroup;

class SpawnManager {
public:
    virtual void addRef();                                        // +0x0 slot 0
    virtual void getRef();                                        // +0x8 slot 1
    virtual void release();                                       // +0x10 slot 2
    virtual void queryInterface(unsigned int) const;              // +0x18 slot 3
    virtual ~SpawnManager();                                      // +0x20 slot 4-5
    virtual void addSpawnPoint(ISpawnPoint*, int);                 // +0x30 slot 6
    virtual void remove(ISpawnPoint const*);                       // +0x38 slot 7
    virtual void removeAll();                                      // +0x40 slot 8
    virtual void removeGroup(int);                                 // +0x48 slot 9
    virtual ISpawnGroup* getSpawnGroup(int);                       // +0x50 slot 10
    virtual void getGroupsForTeam(int);                            // +0x58 slot 11
    virtual void getGroupsForPlayer(dice::hfe::world::IPlayer*);   // +0x60 slot 12
    virtual void canTeamGetAnySpawnGroup(int);                     // +0x68 slot 13
    virtual void createDynamicSpawnGroup();                        // +0x70 slot 14
    virtual int createExistingDynamicSpawnGroup(int);              // +0x78 slot 15
    virtual void getSpawnGroups();                                 // +0x80 slot 16
    virtual void getMappedSpawnGroupId(int, int);                  // +0x88 slot 17
    virtual void createClientSpawnGroup(unsigned char, unsigned int, int, bool, bool, bool, unsigned char, unsigned char); // +0x90 slot 18
    virtual void removeClientSpawnGroup(int);                      // +0x98 slot 19
    virtual void createAllSpawnGroupsOnClient(int);                // +0xa0 slot 20

    void getCreateSpawnGroup(unsigned int, unsigned int, bool);
};

int SpawnManager::createExistingDynamicSpawnGroup(int id) {
    if (getSpawnGroup(id) != 0) {
        return -1;
    }
    getCreateSpawnGroup(id, 0, 0);
    return id;
}

} }
