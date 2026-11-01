// FUNCTION: BF2 0x968910
#include <ostream>
#include <sstream>
#include <string>

namespace dice { namespace hfe {

struct OssHolder_968910 {
    std::ostringstream ss;
    OssHolder_968910() : ss(std::ios_base::out) {}
    ~OssHolder_968910() __attribute__((noinline));
};
OssHolder_968910::~OssHolder_968910() {}

struct Obj_968910 {
    char _pad[0x110];
    float lo;
    float hi;
};

// Out-of-line in this object file (0x889480): the pair constructor is called,
// not inlined, so the two strings are built then handed over by address.
extern "C" void std_pair_968910(void*, const std::string&, const std::string&);

static inline __attribute__((always_inline))
void grab_968910(std::string& out, const OssHolder_968910& h)
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
std::string fmt_968910(const OssHolder_968910& h)
{
    std::string result;
    grab_968910(result, h);
    return result;
}

void* getObjectRangeAsString_968910(void* ret, Obj_968910* self)
{
    self->lo = 0.0f;
    self->hi = 10.0f;
    OssHolder_968910 h1;
    h1.ss << 0.0;
    std::string s1;
    grab_968910(s1, h1);
    OssHolder_968910 h2;
    h2.ss << 10.0;
    std_pair_968910(ret, s1, fmt_968910(h2));
    return ret;
}

} }
