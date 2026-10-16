// FUNCTION: BF2 0x7e6bd0
#include <string>
#include <ostream>

extern char DAT_00bb25f1;

namespace dice { namespace hfe {

struct Debug {
    char _pad[0x20];
    std::ostream os;
    char _tail[0x50];
    Debug(int type, const std::string& file, int line, const std::string& tag);
    ~Debug();
};

namespace io {

class IFileSystem;

class ZipArchiveHandler {
public:
    virtual void attach();
};

class IArchive {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual ~IArchive();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
};

class ZipArchive : public IArchive {
public:
    int m_refCount;
    ZipArchiveHandler* m_handler;
    std::string m_s1;
    void* openFileHandle();
    bool readEntries(void* h);
    void closeFileHandle(void* h);
    bool open(const std::string& path, IFileSystem* fs, bool flag);
};

bool ZipArchive::open(const std::string& path, IFileSystem* fs, bool flag)
{
    m_s1.assign(path);
    void* h = openFileHandle();
    bool ret = false;
    if (h != 0) {
        ret = readEntries(h);
        if (!ret) {
            Debug(6, std::string("IO/File/ZipArchive.cpp"), 0x18b,
                  std::string(&DAT_00bb25f1)).os
                << "couldn't read entries from " << path;
        }
        closeFileHandle(h);
    }
    return ret;
}

} } }
