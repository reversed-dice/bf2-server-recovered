// FUNCTION: BF2 0x528540
// BF2_FLAGS: -fno-strict-aliasing
#include <list>
#include <string>
#include <vector>

namespace dice {
namespace hfe {
namespace world {

class BundleTemplate {
public:
    virtual void vf();
    char _pad0[8];
    virtual ~BundleTemplate();
};

class I1 {
public:
    virtual void v0();
    char _pad[0x50];
};

class I2 {
public:
    virtual void v0();
    char _pad[0x158];
};

class I3 {
public:
    virtual void v0();
    char _pad[0x28];
};

class I4 {
public:
    virtual void v0();
    char _pad[0x38];
};

class ItemTemplate : public BundleTemplate, public I1, public I2, public I3, public I4 {
public:
    virtual ~ItemTemplate() {}
};

struct Pair {
    std::string m_s;
    int m_n;
};

struct Deleter {
    void* p;
    ~Deleter()
    {
        if (p) {
            ::operator delete(p);
        }
    }
};

class KitTemplate : public ItemTemplate {
public:
    std::string m_238;
    char _p0[0x8];
    std::vector<Pair> m_248;
    char _p1[0x278 - 0x260];
    std::list<int> m_278;
    Deleter m_288;

    virtual ~KitTemplate();
};

KitTemplate::~KitTemplate() {}

} } }
