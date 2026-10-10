// FUNCTION: BF2 0x711cd0

#include <map>
#include <string>
#include <vector>

namespace dice { namespace hfe { namespace world {

class CollisionMeshTemplate;

class CollisionManager {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void init();
private:
    char m_pad[0x10];
public:
    std::map<std::string, std::vector<CollisionMeshTemplate*> > m_fullCollisionMeshes;
    void preLevelLoad();
};

void CollisionManager::preLevelLoad()
{
    init();
    for (std::map<std::string, std::vector<CollisionMeshTemplate*> >::iterator it = m_fullCollisionMeshes.begin();
         it != m_fullCollisionMeshes.end(); ++it) {
        *(unsigned char *)((char *)it->second[0] + 0x59) = 0;
    }
}

}}}
