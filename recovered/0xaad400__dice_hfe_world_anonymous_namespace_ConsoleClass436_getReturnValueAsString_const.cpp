// FUNCTION: BF2 0xaad400
#include <ostream>
#include <sstream>
#include <string>

struct Obj_aad400 {
    char _pad0[0x108];
    bool flag;
    char _pad1[0x7];
    void* f110;
};
std::ostream& operator<<(std::ostream&, void*);

struct OssHolder_aad400 {
    std::ostringstream ss;
    OssHolder_aad400() : ss(std::ios_base::out) {}
    ~OssHolder_aad400() __attribute__((noinline));
};
OssHolder_aad400::~OssHolder_aad400() {}

static std::string fmt_aad400(const Obj_aad400* self)
{
    OssHolder_aad400 h;
    h.ss << self->f110;
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

std::string getReturnValueAsString_aad400(const Obj_aad400* self)
{
    if (!self->flag) return std::string();
    return fmt_aad400(self);
}
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass436_getReturnValueAsString_const (0xaad400)
