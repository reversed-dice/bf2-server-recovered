// FUNCTION: BF2 0x5fb150
#include <vector>
namespace dice { namespace hfe { namespace world {

class MultiFireComp {
public:
    char _pad0[0x180];
    std::vector<void*> m_barrels;
    char _pad1[0x1f0 - 0x198];
    void* m_template;
    void postReload();
};

void MultiFireComp::postReload() {
    if (*(char*)((char*)m_template + 0x90) != 0) {
        for (unsigned int i = 0; i < m_barrels.size(); ++i) {
            void* o = m_barrels[i];
            ((void (*)(void*, int, int))(*(void***)o)[0xc0 / 8])(o, 2, 0);
        }
    }
}

} } }
