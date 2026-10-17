// BF2_FLAGS: -fno-tree-pre
// FUNCTION: BF2 0x78ef40
#include <string>
#include <ostream>

namespace dice { namespace hfe {

class Debug {
public:
    Debug(int type, std::string const& file, int line, std::string const& msg);
    ~Debug();
    char pad[0x18];
    long m_align;
    std::ostream& stream() { return *(std::ostream*)((char*)this + 0x20); }
    char pad2[0x160];
};

namespace world {
extern unsigned int IID_IPlayerControlObject;
}

namespace ai {

class ChainNode {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void* queryInterface(unsigned int iid);
    char pad[0x48];
    ChainNode* m_next;
};

class AIObjectReal {
public:
    void releaseObjectFromSpawner();
    char pad[0x20];
    ChainNode* m_chain;
};

typedef void (*VoidFn)(void*);

static ChainNode* nextNode(ChainNode* n) { return n->m_next; }

void AIObjectReal::releaseObjectFromSpawner() {
    void* obj = 0;
    ChainNode* n = m_chain;
    while (n != 0) {
        obj = n->queryInterface(dice::hfe::world::IID_IPlayerControlObject);
        if (obj)
            break;
        n = nextNode(n);
    }
    ((VoidFn)(*(void***)obj)[0x178 / 8])(obj);
    Debug(6, std::string("AI/AIInterface/BFKnowledge/AIObjectReal.cpp"), 399, std::string("")).stream() << "Does not work!";
}

} } }
