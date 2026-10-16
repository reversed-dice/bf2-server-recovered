// FUNCTION: BF2 0x71ed90
namespace dice { namespace hfe { class Mat4; } }

namespace dice { namespace hfe { namespace world {

class CollisionMeshTemplate;

class DebugRenderNode {
public:
    virtual ~DebugRenderNode();
    virtual void nr02();
    virtual void nr03();
    virtual void nr04();
    virtual void nr05();
    virtual void nr06(int, int, bool);
    virtual void nr07();
    virtual void nr08();
    virtual void nr09();
    virtual void nr10();
    virtual void nr11();
    virtual void nr12();
    virtual void nr13();
    virtual void nr14();
    virtual void nr15();
    virtual void nr16();
    virtual void nr17();
    virtual void nr18();
    virtual void nr19();
    virtual void nr20(const Mat4&);
    virtual void nr21();
    char _pad0[0xe8];
    DebugRenderNode* m_a;
    DebugRenderNode* m_b;
    DebugRenderNode* m_c;
};

class CollisionMeshTemplate {
public:
    bool isLodValid(int, int) const;
    DebugRenderNode* getValidLod(int, int);
    void drawDebugMesh(int, int, const Mat4&, bool, bool, bool);
};

}}}

void dice::hfe::world::CollisionMeshTemplate::drawDebugMesh(int a, int b, const Mat4& m, bool e, bool f, bool g)
{
    if (!isLodValid(a, b))
        return;
    DebugRenderNode* lod = getValidLod(a, b);
    if (e == 1)
    {
        if (lod->m_a != 0)
        {
            lod->m_a->nr20(m);
            lod->m_a->nr06(0, 0, true);
        }
    }
    if (f == 1)
    {
        if (lod->m_b != 0)
        {
            lod->m_b->nr20(m);
            lod->m_b->nr06(0, 0, true);
        }
    }
    if (g == 1)
    {
        if (lod->m_c != 0)
        {
            lod->m_c->nr20(m);
            lod->m_c->nr06(0, 0, true);
        }
    }
}
