// FUNCTION: BF2 0x711fb0
// BF2_FLAGS: -fno-strict-aliasing

#include <map>
#include <string>
#include <vector>

namespace dice { namespace hfe { namespace world {

class CollisionMeshTemplate;

class CollisionManager {
public:
    char m_pad[0x18];
    std::map<std::string, std::vector<CollisionMeshTemplate*> > m_fullCollisionMeshes;
    void deleteCollisionMesh(const std::string& name);
};

typedef void (*TemplateFn)(void*);

void CollisionManager::deleteCollisionMesh(const std::string& name)
{
    std::map<std::string, std::vector<CollisionMeshTemplate*> >::iterator it =
        m_fullCollisionMeshes.find(name);
    if (it != m_fullCollisionMeshes.end()) {
        int n = (int)it->second.size();
        for (int i = 0; i < n; ++i) {
            CollisionMeshTemplate* t = it->second[i];
            if (t != 0) {
                ((TemplateFn)(*(void***)t)[1])(t);
            }
        }
        m_fullCollisionMeshes.erase(it);
    }
}

}}}
