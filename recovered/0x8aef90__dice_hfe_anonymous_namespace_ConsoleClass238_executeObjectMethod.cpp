// FUNCTION: BF2 0x8aef90
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
namespace dice { namespace hfe {

class IBase0x8aef90 {
public:
    virtual void addRef();
    virtual void getRef();
    virtual void release();
    virtual IBase0x8aef90* queryInterface(unsigned int iid) const;
};

class ITarget0x8aef90 {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38();
    virtual void setValue(int i, const std::string& s);
};

extern IBase0x8aef90* g_obj0x8aef90;
extern unsigned int iid0x8aef90;

namespace {

inline ITarget0x8aef90* target0x8aef90()
{
    return g_obj0x8aef90 ? (ITarget0x8aef90*)g_obj0x8aef90->queryInterface(iid0x8aef90) : 0;
}

class ConsoleClass238 {
public:
    virtual ~ConsoleClass238();
    void* executeObjectMethod();
    unsigned char _pad0[0x30 - 8];
    int m_argc;
    unsigned char _pad1[4];
    const int* m_arg0;
    const std::string* m_arg1;
    unsigned char _pad2[0x108 - 0x48];
    bool m_hasResult;
};

void* ConsoleClass238::executeObjectMethod()
{
    if (m_argc == 2) {
        int a = *m_arg0;
        std::string b(*m_arg1);
        m_hasResult = false;
        target0x8aef90()->setValue(a, b);
    }
    return 0;
}

}
} }
