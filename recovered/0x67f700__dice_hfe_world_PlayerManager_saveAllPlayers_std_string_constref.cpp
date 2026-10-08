// FUNCTION: BF2 0x67f700
#include <string>
#include <list>

namespace dice { namespace hfe {

class IBase {
public:
    virtual void addRef();
    virtual void release();
    virtual void v02();
    virtual void* queryInterface(unsigned int iid);
};

namespace io {

class IStream;

enum FileMode { FILEMODE_READ = 0, FILEMODE_WRITE = 1 };
enum FileAccess { FILEACCESS_READ = 0, FILEACCESS_WRITE = 2 };

extern unsigned int IID_IConsoleSaveable;

class File {
public:
    File();
    ~File();
    bool open(std::string const& name, FileMode mode, FileAccess access, unsigned int flags);
    IStream* getStream();
private:
    char m_data[0x10];
};

class IConsoleSaveable : public IBase {
public:
    virtual bool save(IStream* stream);
};

} // namespace io

namespace world {

class Player : public IBase {
};

class PlayerManager {
public:
    bool saveAllPlayers(std::string const& filename);
private:
    char m_pad[0x18];
    std::list<Player*> m_players;
};

bool PlayerManager::saveAllPlayers(std::string const& filename)
{
    io::File file;
    if (!file.open(filename, io::FILEMODE_READ, io::FILEACCESS_WRITE, 0))
        return false;
    for (std::list<Player*>::iterator it = m_players.begin(); it != m_players.end(); ++it)
    {
        io::IConsoleSaveable* saveable = (io::IConsoleSaveable*)(*it)->queryInterface(io::IID_IConsoleSaveable);
        if (!saveable)
            continue;
        if (!saveable->save(file.getStream()))
            return false;
    }
    return true;
}

} // namespace world
} // namespace hfe
} // namespace dice
