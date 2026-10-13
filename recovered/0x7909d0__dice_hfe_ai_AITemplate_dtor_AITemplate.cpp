// FUNCTION: BF2 0x7909d0
// FUNCTION: BF2 0x790a60
#include <string>

namespace dice { namespace hfe { namespace ai {

class ISub {
public:
    virtual void v0();
    virtual void release();
};

struct Node {
    char _pad[0x20];
    ISub* m_sub;
};

class AITemplate {
public:
    char* m_buffer;
    char _pad[0x18];
    std::string m_name;
    AITemplate* m_child;

    ~AITemplate();
};

AITemplate::~AITemplate() {
    if (m_child) {
        ISub* s = (*(Node**)m_child)->m_sub;
        if (s) s->release();
        delete m_child;
    }
    delete[] m_buffer;
}

} } }
