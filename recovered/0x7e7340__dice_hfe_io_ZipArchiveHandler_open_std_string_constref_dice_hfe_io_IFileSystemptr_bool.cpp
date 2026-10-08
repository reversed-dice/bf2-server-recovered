// FUNCTION: BF2 0x7e7340
#include <string>

namespace dice { namespace hfe { namespace io {

class ZipArchiveHandler;
class IFileSystem;

class ZipArchive {
public:
    virtual void addRef();
    virtual void getRef();
    virtual void release();
    ZipArchive(ZipArchiveHandler&);
    bool open(std::string const&, IFileSystem*, bool);
private:
    char m_pad0[0x88 - 0x8];
};

class ZipArchiveHandler {
public:
    virtual void addRef();
    virtual void getRef();
    virtual void release();
    virtual void queryInterface(unsigned int) const;
    virtual ZipArchive* open(std::string const&, IFileSystem*, bool);
};

ZipArchive* ZipArchiveHandler::open(std::string const& name, IFileSystem* fs, bool b)
{
    ZipArchive* archive = new ZipArchive(*this);
    ZipArchive* result = archive;
    if (!archive->open(name, fs, b))
    {
        archive->release();
        result = 0;
    }
    return result;
}

} } }
