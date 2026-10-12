// FUNCTION: BF2 0x6a1280
// BF2_FLAGS: -fno-strict-aliasing
#include <vector>

namespace dice { namespace hfe { namespace world {

class IObjectTemplate {
public:
    char _pad[0x10];
};

class ObjectTemplateManager {
public:
    struct Entry {
        Entry* m_next;
        char _pad[8];
        IObjectTemplate* m_obj;
    };

    void getAllUsedTemplates(std::vector<const IObjectTemplate*>& out) const;

private:
    char _pad0[0x88];
    Entry m_head;
};

void ObjectTemplateManager::getAllUsedTemplates(std::vector<const IObjectTemplate*>& out) const
{
    const Entry* e = m_head.m_next;
    while (e != &m_head) {
        IObjectTemplate* obj = e->m_obj;
        unsigned int flags = ((unsigned int (*)(void*))(*(void***)obj)[0x90 / 8])(obj);
        if ((flags & 0x20) != 0) {
            const IObjectTemplate* t = e->m_obj;
            out.push_back(t);
        }
        e = e->m_next;
    }
}

} } }
