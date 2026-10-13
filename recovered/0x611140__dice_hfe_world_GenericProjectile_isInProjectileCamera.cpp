// FUNCTION: BF2 0x611140
// BF2_FLAGS: -fno-tree-dominator-opts

namespace dice { namespace hfe { namespace world {

extern "C" unsigned int IID_IPlayerControlObject;

struct Node
{
    void* m_00;
    void* m_08;
    unsigned char m_pad[0x50 - 0x10];
    Node* m_50;
};

class GenericProjectile
{
public:
    int isInProjectileCamera();
};

int GenericProjectile::isInProjectileCamera()
{
    void* skel = *(void**)((char*)this + 0x2a8);
    if (skel == 0)
        return 0;
    Node* first = *(Node**)((char*)skel + 0x8);
    if (first == 0)
        return 0;
    Node* node = first;
    while (node != 0)
    {
        void* p = ((void* (*)(void*, int))(*(void***)node)[3])(node, (int)IID_IPlayerControlObject);
        if (p != 0)
        {
            if (*(void**)((char*)this + 0x338) == 0)
                return 0;
            void* r = ((void* (*)(void*))(*(void***)p)[17])(p);
            if (r != *(void**)((char*)this + 0x338))
                return 0;
            return 1;
        }
        node = node->m_50;
    }
    return 0;
}

}}}
