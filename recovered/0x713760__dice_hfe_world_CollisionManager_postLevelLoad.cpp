// scratch-register phase pad (trick 407)
extern "C" void padcall();
extern "C" void pad(int* p)
{
    if (p[0] == 0) padcall();
    if (p[1] == 0) padcall();
    if (p[2] == 0) padcall();
    if (p[3] == 0) padcall();
}

// FUNCTION: BF2 0x713760
// BF2_FLAGS: -fno-strict-aliasing

#include <map>
#include <string>
#include <vector>
#include <cstdlib>

namespace dice { namespace hfe {

struct NoCaseStringCompare {
    bool operator()(std::string const& a, std::string const& b) const;
};

class IEventManager {
public:
    virtual void e0();
    virtual void e1();
    virtual void e2();
    virtual void e3();
    virtual void e4();
    virtual void sendEvent(int target, int type, void* data, float delay);
};
extern IEventManager* eventManager;

std::string getFixPath(std::string const& path, char sep);
std::string getLowerCase(std::string const& s);
void goUpInPath(std::string& path);

namespace world {

class CollisionMeshTemplate {
public:
    virtual void addRef();
    virtual void release();
    char m_pad[0x38];
    std::string m_00;
    std::string m_08;
};

typedef std::map<std::string, std::vector<CollisionMeshTemplate*> > MeshMap;

class CollisionManager {
public:
    char m_pad[0x18];
    MeshMap m_fullCollisionMeshes;
    char m_pad2[0x18];
    unsigned char m_loaded;
    void erase(MeshMap::iterator& it);
    void load(std::vector<CollisionMeshTemplate*>& v);
    void postLevelLoad();
};

} } }

namespace { extern int* g_convert_meshes; }

namespace dice { namespace hfe { namespace world {

void CollisionManager::postLevelLoad()
{
    if (m_loaded == 0) {
        return;
    }
    eventManager->sendEvent(2, 7, (void*)"Loading Collision Meshes..", 0.0f);

    MeshMap::iterator it = m_fullCollisionMeshes.begin();
    while (it != m_fullCollisionMeshes.end()) {
        erase(it);
    }

    std::map<std::string, MeshMap::iterator, NoCaseStringCompare> paths;

    for (it = m_fullCollisionMeshes.begin(); it != m_fullCollisionMeshes.end(); ++it) {
        CollisionMeshTemplate* t = it->second[0];
        std::string lower = getLowerCase(getFixPath(t->m_00, '/') + t->m_08);
        goUpInPath(lower);
        paths.insert(std::make_pair(lower, it));
    }

    struct LoadInfo {
        int count;
        float ratio;
        char const* name;
    };
    LoadInfo d;
    d.ratio = 0.5f;
    d.name = "Collision";
    d.count = (int)paths.size();
    eventManager->sendEvent(5, 4, &d, 0.0f);

    for (std::map<std::string, MeshMap::iterator, NoCaseStringCompare>::iterator j = paths.begin(); j != paths.end(); ++j) {
        it = j->second;
        load(it->second);
    }

    if (*g_convert_meshes) {
        exit(0);
    }
}

} } }
