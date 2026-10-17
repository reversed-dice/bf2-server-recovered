// FUNCTION: BF2 0x947090
#include <string>
#include <map>
#include <utility>

namespace dice { namespace hfe {
extern void* fn_69de30(unsigned id);
namespace world { extern unsigned int CID_KitPartTemplate; }
} }

using namespace dice::hfe;

struct KitParts {
    char pad[0x1f8];
    std::map<int, std::string> m_map;
};

struct ConsoleObject {
    char pad_00[0x30];
    int m_30;
    char pad_34[4];
    void* m_38;
    std::string* m_40;
    char pad_48[0xc0];
    bool m_108;
};

static inline void addPart(int id, std::string b) {
    void* t = fn_69de30(world::CID_KitPartTemplate);
    ((KitParts*)t)->m_map.insert(std::make_pair(id, b));
}
long exec(ConsoleObject* self) {
    if (self->m_30 != 2) return 0;
    int id = *(int*)self->m_38;
    std::string a(*self->m_40);
    self->m_108 = false;
    addPart(id, a);
    return 0;
}
