// FUNCTION: BF2 0x6aa770
// BF2_FLAGS: -fno-strict-aliasing
#include <string>

struct Foo {
    virtual ~Foo();
    virtual void f();
};

struct Elem {
    std::string s;
    void* pad;
};

struct G {
    Elem m_arr[128];
    Foo* m_p;
    ~G() { if (m_p) m_p->f(); }
};

static G g;

Foo::~Foo() {}
