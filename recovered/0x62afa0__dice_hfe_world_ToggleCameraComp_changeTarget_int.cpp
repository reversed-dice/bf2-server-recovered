// FUNCTION: BF2 0x62afa0
#include <map>
namespace dice { namespace hfe { namespace world {

class ICameraObject {
public:
    virtual void _v0(); virtual void _v1(); virtual void _v2(); virtual void _v3(); virtual void _v4(); virtual void _v5();
    virtual void activate(int a, int b, int c);
    virtual void _v7(); virtual void _v8(); virtual void _v9(); virtual void _v10(); virtual void _v11(); virtual void _v12();
    virtual void setTarget(int t);
};
class ICameraComp {
public:
    virtual void _v0(); virtual void _v1(); virtual void _v2(); virtual void _v3(); virtual void _v4(); virtual void _v5(); virtual void _v6(); virtual void _v7(); virtual void _v8(); virtual void _v9(); virtual void _v10(); virtual void _v11(); virtual void _v12(); virtual void _v13();
    virtual std::map<int, ICameraObject*>* getCameras();
};
class IObject {
public:
    virtual void _v0(); virtual void _v1(); virtual void _v2();
    virtual ICameraComp* queryInterface(int id);
    char _pad8[0x48];
    IObject* m_nextSibling;
};
extern int g_cameraCompId;

class ToggleCameraComp {
public:
    virtual void _v0(); virtual void _v1(); virtual void _v2(); virtual void _v3(); virtual void _v4(); virtual void _v5(); virtual void _v6(); virtual void _v7(); virtual void _v8(); virtual void _v9(); virtual void _v10(); virtual void _v11(); virtual void _v12(); virtual void _v13(); virtual void _v14(); virtual void _v15(); virtual void _v16(); virtual void _v17(); virtual void _v18(); virtual void _v19(); virtual void _v20(); virtual void _v21(); virtual void _v22(); virtual void _v23(); virtual void _v24(); virtual void _v25(); virtual void _v26(); virtual void _v27(); virtual void _v28(); virtual void _v29(); virtual void _v30(); virtual void _v31(); virtual void _v32(); virtual void _v33(); virtual void _v34(); virtual void _v35(); virtual void _v36(); virtual void _v37(); virtual void _v38(); virtual void _v39();
    virtual int getActiveCamera();
    void changeTarget(int target);
    char _pad8[0x10];
    IObject* m_firstChild;
};

void ToggleCameraComp::changeTarget(int target)
{
    int id = getActiveCamera();
    if (id == -1)
        return;
    ICameraComp* comp = 0;
    for (IObject* o = m_firstChild; o; o = o->m_nextSibling)
        if ((comp = o->queryInterface(g_cameraCompId)) != 0)
            break;
    std::map<int, ICameraObject*>* m = comp->getCameras();
    std::map<int, ICameraObject*>::iterator it = m->find(id);
    if (it == m->end())
        return;
    it->second->setTarget(target);
    it->second->activate(6, 0, 0);
}

} } }
