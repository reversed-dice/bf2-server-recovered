// FUNCTION: BF2 0x46f140
#include <string>
#include <ostream>

namespace dice { namespace hfe {

namespace geom {
extern unsigned int IID_ITerrainEditable;
}

struct Debug {
    char _pad[0x20];
    std::ostream os;
    char _tail[0x50];
    Debug(int type, const std::string& file, int line, const std::string& tag);
    ~Debug();
};

class ClassManager {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void* getClass(const std::string& name);
};

extern ClassManager* classManager;

extern char DAT_00bb25f1;

namespace world {

class IObject;

class ITerrain {
public:
    virtual void t00(); virtual void t08(); virtual void t10();
    virtual void* queryInterface(unsigned int iid);        // +0x18
    virtual void t20(); virtual void t28(); virtual void t30(); virtual void t38();
    virtual void t40(); virtual void t48(); virtual void t50(); virtual void t58();
    virtual int getSubdivisions();                          // +0x60
};

}

class DistributedLightRenderer {
public:
    void addObjectToJobQueue(world::IObject* o, unsigned int id);
    void traceTerrain();
};

void DistributedLightRenderer::traceTerrain()
{
    world::ITerrain* terrain = (world::ITerrain*)classManager->getClass(std::string("Terrain"));
    if (terrain == 0) {
        Debug(6, std::string("Game/DistributedLightRenderer/DistributedLightRenderer.cpp"), 90,
              std::string(&DAT_00bb25f1)).os << "no terrain found";
        return;
    }

    if (terrain->queryInterface(geom::IID_ITerrainEditable) == 0) {
        Debug(6, std::string("Game/DistributedLightRenderer/DistributedLightRenderer.cpp"), 96,
              std::string(&DAT_00bb25f1)).os << "IID_ITerrainEditable not found for terrain";
        return;
    }

    for (unsigned int i = 0; ; ++i) {
        unsigned int n = (unsigned int)terrain->getSubdivisions();
        if (i >= n * n)
            break;
        addObjectToJobQueue(0, i);
    }
}

} }
