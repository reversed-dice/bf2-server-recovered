// FUNCTION: BF2 0xab95d0
#include <sstream>
#include <string>
#include <utility>

namespace dice { namespace hfe { namespace world {

struct Vec3 {
    float x, y, z;
    void set(float ax, float ay, float az) { x = ax; y = ay; z = az; }
};

namespace {

class ConsoleClass248;

// GCC 4.0.3 emits the constructor out of line (extern template, sstream.tcc)
// but inlines the destructor, whereas the target calls both.
struct OssHolder {
    std::ostringstream ss;
    OssHolder() : ss(std::ios_base::out) {}
    ~OssHolder() __attribute__((noinline));
};
OssHolder::~OssHolder() {}

static std::string fmt(OssHolder& h)
{
    std::string result;
    const char* base = reinterpret_cast<const char*>(&h);
    const char* pp = *reinterpret_cast<const char* const*>(base + 0x30);
    if (pp) {
        const char* eg = *reinterpret_cast<const char* const*>(base + 0x20);
        if (pp > eg) {
            result.assign(std::string(*reinterpret_cast<const char* const*>(base + 0x28), pp));
        } else {
            result.assign(std::string(*reinterpret_cast<const char* const*>(base + 0x28), eg));
        }
    } else {
        result.assign(*reinterpret_cast<const std::string*>(base + 0x50));
    }
    return result;
}

class ConsoleClass248 {
public:
    virtual ~ConsoleClass248();
    std::pair<std::string, std::string> getObjectRangeAsString() const;
    char pad1[0x118 - 0x8];
    mutable Vec3 m_min;                 // 0x118
    mutable Vec3 m_max;                 // 0x124
};

std::pair<std::string, std::string> ConsoleClass248::getObjectRangeAsString() const
{
    float* mn = &m_min.x;
    mn[0] = -4096.0f;
    mn[1] = -4096.0f;
    mn[2] = -4096.0f;
    float* mx = &m_max.x;
    mx[0] = 4096.0f;
    mx[1] = 4096.0f;
    mx[2] = 4096.0f;
    OssHolder lo;
    lo.ss << -4096.0f << '/';
    lo.ss << -4096.0f << '/';
    lo.ss << -4096.0f;
    const std::string& s1 = lo.ss.str();
    OssHolder hi;
    hi.ss << 4096.0f << '/';
    hi.ss << 4096.0f << '/';
    hi.ss << 4096.0f;
    const std::string& s2 = hi.ss.str();
    return std::pair<std::string, std::string>(s1, s2);
}

}

} } }
