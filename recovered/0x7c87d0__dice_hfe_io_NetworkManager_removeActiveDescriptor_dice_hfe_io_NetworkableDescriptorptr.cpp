// FUNCTION: BF2 0x7c87d0
#include <string>
#include <ostream>
extern char DAT_00bb25f1;
namespace dice { namespace hfe { namespace io {
struct Debug {
    char _pad[0x20];
    std::ostream os;
    char _tail[0x50];
    Debug(int type, const std::string& file, int line, const std::string& tag);
    ~Debug();
};
class NetworkableDescriptor {
public:
    char _p[0x4];
    unsigned short m_4;
};
class NetworkManager {
public:
    void removeActiveDescriptor(NetworkableDescriptor* d);
    void removeActiveDescriptor(unsigned short id);
};
void NetworkManager::removeActiveDescriptor(NetworkableDescriptor* d)
{
    if (d != 0) {
        removeActiveDescriptor(d->m_4);
        return;
    }
    Debug(6, std::string("IO/Network/NetworkManager.cpp"), 0x200,
          std::string(&DAT_00bb25f1)).os
        << "Trying to deactivate nonexisting desc";
}
} } }
