// FUNCTION: BF2 0xaf3c20
#include <string>

namespace dice { namespace hfe {

class IConsole {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31(); virtual void v32();
    virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36();
    virtual const char* getBasePath();
};

namespace io { extern IConsole* mainConsole; }

} }

namespace dice { namespace hfe { namespace world {

class ICollisionManager {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8();
    virtual void* a9(const std::string& name);
    virtual void* loadCollisionMesh(const std::string& name);
};

extern ICollisionManager* collisionManager;

void createTemplate(const std::string& name)
{
    void* t = collisionManager->loadCollisionMesh(name);
    if (t != 0)
    {
        std::string path = io::mainConsole->getBasePath() + std::string("Meshes/");
        ((std::string*)((char*)t + 0x40))->assign(path);
    }
    else
    {
        t = collisionManager->a9(name);
    }
}

} } }
