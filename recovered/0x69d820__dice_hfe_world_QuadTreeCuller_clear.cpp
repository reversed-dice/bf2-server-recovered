// FUNCTION: BF2 0x69d820

namespace std {
template<class T> class allocator {};
template<class T, class A> class _List_base {
public:
    void _M_clear();
};
}

namespace dice { namespace hfe { namespace world {

class ObjectHolder;

class Node {
public:
    char m_pad0[0x10];
    Node* m_children[4];    // +0x10
    char m_pad1[0x40 - 0x30];
    std::_List_base<ObjectHolder*, std::allocator<ObjectHolder*> > m_objects;  // +0x40
};

class QuadTreeCuller {
public:
    void clear();
    void freeNode(Node*);

    char m_pad0[0xf8];
    Node* m_root;   // +0xf8
};

void QuadTreeCuller::clear()
{
    Node* n = m_root;
    if (n != 0) {
        char* p = (char*)n;
        for (int i = 4; i != 0; --i) {
            freeNode(*(Node**)(p + 0x10));
            p += 8;
        }
        n->m_objects._M_clear();
        operator delete(n);
    }
    m_root = 0;
}

} } }
