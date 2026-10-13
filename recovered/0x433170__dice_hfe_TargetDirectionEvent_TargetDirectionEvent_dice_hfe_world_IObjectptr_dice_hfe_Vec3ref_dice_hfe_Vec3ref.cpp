// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x433170
namespace dice { namespace hfe {

struct Vec3 {
    float x, y, z;
};

class GameEvent {
public:
    GameEvent();
    virtual ~GameEvent();
    char _pad8[0x8];
};

namespace world {
class IPlayerControlObject;

class IObject {
public:
    virtual void addRef();
    virtual void getRef();
    virtual void release();
    virtual void* queryInterface(unsigned int);

    // slots up to 54
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
    virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43();
    virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47();
    virtual void v48(); virtual void v49(); virtual void v50(); virtual void v51();
    virtual void v52(); virtual void v53();
    virtual void* v54();

    char _pad[0x20];
    void* m_template;    // +0x28
    char _pad2[0x20];
    IObject* m_parentRef; // +0x50
};

class IPlayerControlObject {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void* queryInterface(unsigned int);
};

extern const unsigned int IID_IPlayerControlObject;
extern const unsigned int IID_IObject;
extern unsigned char getWeaponIndex(IPlayerControlObject*, IObject*);

} // namespace world

class TargetDirectionEvent : public GameEvent {
public:
    TargetDirectionEvent(world::IObject* obj, Vec3 const& dir, Vec3 const& pos);
    virtual ~TargetDirectionEvent();

    Vec3 m_dir;            // +0x10
    Vec3 m_pos;            // +0x1c
    unsigned short m_id;   // +0x28
    unsigned char m_weaponIndex; // +0x2a
};

TargetDirectionEvent::TargetDirectionEvent(world::IObject* obj, Vec3 const& dir, Vec3 const& pos)
{
    float* d1 = (float*)((char*)this + 0x10);
    float pz = dir.z;
    float py = dir.y;
    float px = dir.x;
    d1[0] = px;
    d1[1] = py;
    d1[2] = pz;

    float* d2 = (float*)((char*)this + 0x1c);
    float rz = pos.z;
    float ry = pos.y;
    float rx = pos.x;
    d2[0] = rx;
    d2[1] = ry;
    d2[2] = rz;

    world::IPlayerControlObject* pco;
    for (world::IObject* cur = obj; ; cur = cur->m_parentRef) {
        if (!cur) {
            pco = 0;
            break;
        }
        pco = static_cast<world::IPlayerControlObject*>(cur->queryInterface(world::IID_IPlayerControlObject));
        if (pco) break;
    }

    world::IObject* pcoObj = static_cast<world::IObject*>(pco->queryInterface(world::IID_IObject));
    char* unk = (char*)pcoObj->v54();
    m_id = *(unsigned short*)(unk + 8);
    m_weaponIndex = world::getWeaponIndex(pco, obj);
}

} }
