// FUNCTION: BF2 0x974540
#include <ostream>
#include <sstream>
#include <string>

namespace dice { namespace hfe { namespace world {

struct OssHolder_974540 {
    std::ostringstream ss;
    OssHolder_974540() : ss(std::ios_base::out) {}
    ~OssHolder_974540() __attribute__((noinline));
};
OssHolder_974540::~OssHolder_974540() {}

struct Obj_974540 {
    char _pad[0x110];
    int lo;
    int hi;
};

// Out-of-line in this object file (0x889480): the pair constructor is called,
// not inlined, so the two strings are built then handed over by address.
extern "C" void std_pair_974540(void*, const std::string&, const std::string&);

static inline __attribute__((always_inline))
void grab_974540(std::string& out, const OssHolder_974540& h)
{
    const char* base = reinterpret_cast<const char*>(&h);
    const char* pp = *reinterpret_cast<const char* const*>(base + 0x30);
    if (pp) {
        const char* eg = *reinterpret_cast<const char* const*>(base + 0x20);
        if (pp > eg) {
            out.assign(std::string(*reinterpret_cast<const char* const*>(base + 0x28), pp));
        } else {
            out.assign(std::string(*reinterpret_cast<const char* const*>(base + 0x28), eg));
        }
    } else {
        out.assign(*reinterpret_cast<const std::string*>(base + 0x50));
    }
}

static inline __attribute__((always_inline))
std::string fmt_974540(const OssHolder_974540& h)
{
    std::string result;
    grab_974540(result, h);
    return result;
}

void* getObjectRangeAsString_974540(void* ret, Obj_974540* self)
{
    self->lo = -1;
    self->hi = 3;
    OssHolder_974540 h1;
    h1.ss << -1;
    std::string s1;
    grab_974540(s1, h1);
    OssHolder_974540 h2;
    h2.ss << 3L;
    std_pair_974540(ret, s1, fmt_974540(h2));
    return ret;
}

} } }
