// FUNCTION: BF2 0x7e4580
// BF2_FLAGS: -fcrossjumping
#include <vector>
namespace dice { namespace hfe { namespace io {

class IArchiveHandler {
public:
    virtual void addRef();
    virtual void getRef();
    virtual void release();
};

class FileManager {
public:
    char pad0[0x40];
    std::vector<IArchiveHandler*> m_archiveHandlers;
    void updateArchiveExts();
    virtual void removeArchiveHandler(IArchiveHandler* handler);
};

void FileManager::removeArchiveHandler(IArchiveHandler* handler)
{
    for (std::vector<IArchiveHandler*>::iterator it = m_archiveHandlers.begin(); it != m_archiveHandlers.end(); ++it) {
        if (*it == handler) {
            (*it)->release();
            m_archiveHandlers.erase(it);
            break;
        }
    }
    updateArchiveExts();
}

} } }
