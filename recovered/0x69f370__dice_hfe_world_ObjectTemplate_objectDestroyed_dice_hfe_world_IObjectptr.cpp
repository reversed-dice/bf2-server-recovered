// FUNCTION: BF2 0x69f370
#include <map>
namespace dice { namespace hfe { namespace world {

class IObject {
public:
    virtual void _v0(); virtual void _v1(); virtual void _v2(); virtual void _v3(); virtual void _v4(); virtual void _v5(); virtual void _v6(); virtual void _v7(); virtual void _v8(); virtual void _v9(); virtual void _v10(); virtual void _v11(); virtual void _v12(); virtual void _v13(); virtual void _v14(); virtual void _v15(); virtual void _v16(); virtual void _v17(); virtual void _v18(); virtual void _v19(); virtual void _v20(); virtual void _v21();
    virtual void setTeam(int team, int flags);
};
class ITeamComp { public: virtual void _v0(); virtual void _v1(); virtual void _v2(); virtual void _v3(); virtual int getTeam(); };
class IDestroyListener { public: virtual void _v0(); virtual void _v1(); virtual void _v2(); virtual void _v3(); virtual void _v4(); virtual void _v5(); virtual void _v6(); virtual void _v7(); virtual void objectDestroyed(IObject* o); };
class IObjectTemplate {
public:
    virtual void _v0(); virtual void _v1(); virtual void _v2();
    virtual void* queryInterface(int id);
};
extern int g_destroyListenerId;
extern int g_teamCompId;

class ObjectTemplate {
public:
    void objectDestroyed(IObject* o);
    char _pad0[0x30];
    std::map<int, IObjectTemplate*> m_children;
};

void ObjectTemplate::objectDestroyed(IObject* o)
{
    for (std::map<int, IObjectTemplate*>::iterator it = m_children.begin(); it != m_children.end(); ++it) {
        IObjectTemplate* t = it->second;
        IDestroyListener* l = (IDestroyListener*)t->queryInterface(g_destroyListenerId);
        if (!l)
            continue;
        l->objectDestroyed(o);
        ITeamComp* tc = (ITeamComp*)t->queryInterface(g_teamCompId);
        if (!tc)
            continue;
        o->setTeam(tc->getTeam(), 0);
    }
}

} } }
