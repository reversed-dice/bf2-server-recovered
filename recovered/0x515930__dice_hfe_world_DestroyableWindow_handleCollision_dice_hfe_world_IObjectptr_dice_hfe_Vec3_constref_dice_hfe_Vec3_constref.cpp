// FUNCTION: BF2 0x515930
namespace dice { namespace hfe {

struct Vec3;

namespace world {

class IObject;
class DestroyableWindow;
class DestroyableWindowsBundle;
struct CollisionFaceInfo;

extern const unsigned int CID_DestroyableWindowsBundleTemplate;

typedef int (*CidFn)(void*);

const IObject* getRootParent(const IObject* obj);

class IObject {
public:
    virtual void _m0();
    char _pad0[0x20];
    void* m_unk28;
};

class SimpleObject : public IObject {
public:
    bool handleCollision(IObject* obj, const Vec3& p1, const Vec3& p2, const Vec3& p3,
                         int i1, int i2, CollisionFaceInfo* c1, CollisionFaceInfo* c2);
};

class DestroyableWindow : public SimpleObject {
public:
    virtual void _v00();
    virtual void _v01();
    virtual void _v02();
    virtual void _v03();
    virtual void _v04();
    virtual void _v05();
    virtual void _v06();
    virtual void _v07();
    virtual void _v08();
    virtual void _v09();
    virtual void _v10();
    virtual void _v11();
    virtual void _v12();
    virtual void _v13();
    virtual void _v14();
    virtual void _v15();
    virtual void _v16();
    virtual void _v17();
    virtual void _v18();
    virtual void _v19();
    virtual void _v20();
    virtual void _v21();
    virtual void _v22();
    virtual void _v23();
    virtual void _v24();
    virtual void _v25();
    virtual void _v26();
    virtual void _v27();
    virtual void _v28();
    virtual void _v29();
    virtual void _v30();
    virtual void _v31();
    virtual void _v32();
    virtual void _v33();
    virtual void _v34();
    virtual void _v35();
    virtual void _v36();
    virtual void _v37();
    virtual void _v38();
    virtual void _v39();
    virtual void _v40();
    virtual void _v41();
    virtual void _v42();
    virtual void _v43();
    virtual void _v44();
    virtual void _v45();
    virtual void _v46();
    virtual void _v47();
    virtual void _v48();
    virtual int getType() const;
    char _padA[0x230 - 0x30];
    unsigned char m_unk_0x230;

    bool handleCollision(IObject* obj, const Vec3& p1, const Vec3& p2, const Vec3& p3,
                         int i1, int i2, CollisionFaceInfo* c1, CollisionFaceInfo* c2);
};

class DestroyableWindowsBundle {
    char m_pad[0x23C];
    unsigned int m_unk_0x23C;
public:
    void handleChildCollision(DestroyableWindow* child);
    void updateStates(unsigned int state);
};

bool DestroyableWindow::handleCollision(IObject* obj, const Vec3& p1, const Vec3& p2, const Vec3& p3,
                                        int i1, int i2, CollisionFaceInfo* c1, CollisionFaceInfo* c2)
{
    if (m_unk_0x230 != 0)
        return false;
    const IObject* root = getRootParent(this);
    if (root != 0) {
        if (((CidFn)(*(void***)root->m_unk28)[0x20 / 8])(root->m_unk28)
            == CID_DestroyableWindowsBundleTemplate) {
            if (getType() != -1) {
                ((DestroyableWindowsBundle*)root)->handleChildCollision(this);
            }
        }
    }
    return SimpleObject::handleCollision(obj, p1, p2, p3, i1, i2, c1, c2);
}

} } }
