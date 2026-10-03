// FUNCTION: BF2 0xaad590
#include <ostream>
#include <sstream>
#include <string>

struct Obj_aad590 {
    char _pad0[0x108];
    bool flag;
    char _pad1[0x7];
    void* f110;
};
std::ostream& operator<<(std::ostream&, void*);

struct OssHolder_aad590 {
    std::ostringstream ss;
    OssHolder_aad590() : ss(std::ios_base::out) {}
    ~OssHolder_aad590() __attribute__((noinline));
};
OssHolder_aad590::~OssHolder_aad590() {}

static std::string fmt_aad590(const Obj_aad590* self)
{
    OssHolder_aad590 h;
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

std::string getReturnValueAsString_aad590(const Obj_aad590* self)
{
    if (!self->flag) return std::string();
    return fmt_aad590(self);
}
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass435_getReturnValueAsString_const (0xaad590)
