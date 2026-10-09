// FUNCTION: BF2 0x4365d0
#include <vector>

namespace dice { namespace hfe {

class IStreamManager;

class ClientConnection {
public:
    char _pad[0xa8];
    std::vector<IStreamManager*> m_streamManagers; // +0xa8

    IStreamManager* getStreamManager(int idx);
};

IStreamManager* ClientConnection::getStreamManager(int idx)
{
    if (idx >= 0 && idx <= (int)m_streamManagers.size()) {
        return m_streamManagers[idx];
    }
    return 0;
}

} }
