// FUNCTION: BF2 0x7a6540
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <vector>
#include <list>
#include <string.h>

namespace dice { namespace hfe { namespace io {

struct FileInfo {
    std::string m_name;
    bool m_isDirectory;
    unsigned int m_size;
    unsigned long long m_created;
    unsigned long long m_modified;
    unsigned long long m_accessed;
};

class IFileSystem {
public:
    virtual void addRef() = 0;
    virtual void getRef() = 0;
    virtual void release() = 0;
    virtual void queryInterface(unsigned int) const = 0;
    virtual void init() = 0;
    virtual bool isLastFileOpenedFromArchive() const = 0;
    virtual void open(std::string const&, int, int, unsigned int) = 0;
    virtual bool fileExists(std::string const&) = 0;
    virtual bool deleteFile(std::string const&) = 0;
    virtual bool moveFile(std::string const&, std::string const&) = 0;
    virtual bool copyFile(std::string const&, std::string const&, bool) = 0;
    virtual bool readFile(std::string const&, void*, unsigned int, unsigned int&) = 0;
    virtual bool writeFile(std::string const&, void const*, unsigned int, bool) = 0;
    virtual void findFiles(std::string const&, bool, std::list<FileInfo>&) = 0;
    virtual bool getFileInfo(std::string const&, FileInfo&) = 0;
};

extern IFileSystem* fileManager;

} } }

namespace dice { namespace hfe {

struct Token {
    char pad[0x10];
    std::string m_text;
    char tail[8];
};

class Tokenizer {
public:
    bool init(char const* filename);
    bool init(char const* data, unsigned int size);
    void clean();
    ~Tokenizer();
    std::vector<Token> m_tokens;
    unsigned long long m_pad;
    std::string m_line;
};

bool Tokenizer::init(char const* filename) {
    io::FileInfo info;
    if (!io::fileManager->getFileInfo(std::string(filename), info))
        return false;
    char* buf = new char[info.m_size];
    unsigned int read;
    if (!io::fileManager->readFile(std::string(filename), buf, info.m_size, read)) {
        if (buf) delete[] buf;
        return false;
    }
    bool r = init(buf, read);
    if (buf) delete[] buf;
    m_line.assign(filename, strlen(filename));
    return r;
}

} }
