// FUNCTION: BF2 0x436690
#include <vector>

namespace dice { namespace hfe {

class IStreamManager {
public:
    virtual void v00();
    virtual void v08();
    virtual void v10();
    virtual void v18();
    virtual void v20();
    virtual void v28();
    virtual void v30();
    virtual void v38();
    virtual void v40();
    virtual void setConnectionId(int id); // slot 9 (+0x48)
};

class ClientConnection {
public:
    char _pad[0xa8];
    std::vector<IStreamManager*> m_streamManagers; // +0xa8 .. +0xc0
    char _padC0[0xf0 - 0xc0];
    int m_connectionId; // +0xf0

    void setConnectionId(int id);
};

void ClientConnection::setConnectionId(int id)
{
    m_connectionId = id;
    for (unsigned int i = 0; i < m_streamManagers.size(); ++i) {
        m_streamManagers[i]->setConnectionId(id);
    }
}

} }
