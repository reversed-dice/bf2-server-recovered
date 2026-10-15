// FUNCTION: BF2 0x711e90

#include <map>
#include <string>
#include <vector>

namespace dice { namespace hfe { namespace world {

class CollisionMeshTemplate {
public:
    void destroyDebugMeshes(bool b);
};

class CollisionManager {
public:
    char m_pad[0x18];
    std::map<std::string, std::vector<CollisionMeshTemplate*> > m_fullCollisionMeshes;
    void destroyDebugCollisionMeshes();
};

void CollisionManager::destroyDebugCollisionMeshes()
{
    for (std::map<std::string, std::vector<CollisionMeshTemplate*> >::iterator it = m_fullCollisionMeshes.begin();
         it != m_fullCollisionMeshes.end(); ++it) {
        for (int i = 0; i < (int)it->second.size(); ++i) {
            std::vector<CollisionMeshTemplate*> meshes = it->second;
            CollisionMeshTemplate* t = meshes[i];
            if (t != 0) {
                t->destroyDebugMeshes(false);
            }
        }
    }
}

} } }
