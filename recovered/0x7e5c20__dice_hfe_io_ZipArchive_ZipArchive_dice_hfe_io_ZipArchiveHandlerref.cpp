// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x7e5c20
#include <string>
#include <map>
#include <list>

namespace dice { namespace hfe { namespace io {

struct AxisRemap;

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
    std::string m_s2;
    std::string m_s3;
    std::map<int, AxisRemap*> m_map;
    std::list<void*> m_list1;
    std::list<void*> m_list2;
    bool m_flag;

    ZipArchive(ZipArchiveHandler& h);
};

ZipArchive::ZipArchive(ZipArchiveHandler& h)
    : m_refCount(1), m_handler(&h) {
    m_flag = 1;
    m_handler->attach();
}

} } }
