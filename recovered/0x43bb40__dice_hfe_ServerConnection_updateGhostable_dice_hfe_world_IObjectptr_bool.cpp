// FUNCTION: BF2 0x43bb40
namespace dice { namespace hfe {

class GhostManager {
public:
    void removeGhostable(unsigned short id);
    void addGhostable(unsigned short id);
};

namespace world {

class Networkable {
public:
    char _pad[0x8];
    unsigned int m_id;
};

class IObject {
public:
#define V(n) virtual void _v##n();
    V(0) V(1) V(2) V(3) V(4) V(5) V(6) V(7) V(8) V(9)
    V(10) V(11) V(12) V(13) V(14) V(15) V(16) V(17) V(18) V(19)
    V(20) V(21) V(22) V(23) V(24) V(25) V(26) V(27) V(28) V(29)
    V(30) V(31) V(32) V(33) V(34) V(35) V(36) V(37) V(38) V(39)
    V(40) V(41) V(42) V(43) V(44) V(45) V(46) V(47) V(48) V(49)
    V(50) V(51) V(52) V(53)
#undef V
    virtual Networkable* getNetworkable(); // slot 54 = 0x1b0

#define V(n) virtual void _v##n();
    V(55) V(56) V(57) V(58) V(59)
#undef V
    virtual IObject* getFirstChild();      // slot 60 = 0x1e0

    char _pad[0x50];
    IObject* m_nextChild;
};

} // namespace world

class ServerConnection {
public:
    void updateGhostable(world::IObject* obj, bool add);

    char _pad[0x40];
    GhostManager* m_ghostManager;
};

void ServerConnection::updateGhostable(world::IObject* obj, bool add)
{
    if (obj->getNetworkable()) {
        unsigned short id = obj->getNetworkable()->m_id;
        if (id != 0) {
            if (add)
                m_ghostManager->addGhostable(id);
            else
                m_ghostManager->removeGhostable(id);
        }
    }
    for (world::IObject* child = obj->getFirstChild(); child; child = child->m_nextChild) {
        updateGhostable(child, add);
    }
}

} }
