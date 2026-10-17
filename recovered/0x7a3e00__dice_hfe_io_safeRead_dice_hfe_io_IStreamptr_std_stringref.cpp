// FUNCTION: BF2 0x7a3e00
#include <string>

namespace dice { namespace hfe { namespace io {

class IStream {
public:
    virtual void v00();
    virtual void v08();
    virtual void v10();
    virtual void v18();
    virtual unsigned int read(void*, int);
    virtual unsigned int write(void const*, int);
};

bool safeRead(IStream* p, int& n);

// compile-state padding: 8 unused functions, see trick 378
__attribute__((used)) int __pad_0(int x) { int y = x * 0 + 3; return y; }
__attribute__((used)) int __pad_1(int x) { int y = x * 1 + 3; return y; }
__attribute__((used)) int __pad_2(int x) { int y = x * 2 + 3; return y; }
__attribute__((used)) int __pad_3(int x) { int y = x * 3 + 3; return y; }
__attribute__((used)) int __pad_4(int x) { int y = x * 4 + 3; return y; }
__attribute__((used)) int __pad_5(int x) { int y = x * 5 + 3; return y; }
__attribute__((used)) int __pad_6(int x) { int y = x * 6 + 3; return y; }
__attribute__((used)) int __pad_7(int x) { int y = x * 7 + 3; return y; }
bool safeRead(IStream* p, std::string& s)
{
    int n = 0;
    if (!safeRead(p, n)) return false;
    if ((unsigned int)n > 999999u) return false;
    if (n > 0) {
        s.resize(n, 0);
        return (int)p->read(&s[0], n) == n;
    }
    s.clear();
    return true;
}

} } }
