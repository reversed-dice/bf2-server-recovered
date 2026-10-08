// FUNCTION: BF2 0x7e45d0
// BF2_FLAGS: -fno-strict-aliasing
#include <vector>

namespace dice { namespace hfe { namespace io {

class IArchiveHandler {
public:
    virtual void addRef();
};

class FileManager {
public:
    char _pad[0x48];
    std::vector<IArchiveHandler*> m_handlers;
    void addArchiveHandler(IArchiveHandler* h);
    void updateArchiveExts();
};

void FileManager::addArchiveHandler(IArchiveHandler* h) {
    m_handlers.push_back(h);
    h->addRef();
    updateArchiveExts();
}

} } }
