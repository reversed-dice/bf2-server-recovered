// FUNCTION: BF2 0x700d10
// BF2_FLAGS: -fno-strict-aliasing
#include <string>

extern "C" int fn_6ff5e0(void* self, int sx, int sy); // HeightmapCluster::getGridIndex
extern void* classManager;
namespace dice { namespace hfe { namespace world { extern unsigned int IID_IHeightmap; } } }

namespace dice { namespace hfe { namespace world {
class IHeightmap {
public:
    virtual void v0();  virtual void v1();  virtual void v2();  virtual void v3();
    virtual void v4();  virtual void v5();  virtual void v6();  virtual void v7();
    virtual void v8();  virtual void v9();  virtual void v10(); virtual void v11();
    virtual void v12();
    virtual void setPos(int x, int y);
};
} } }

class ClassManager {
public:
    virtual void g0();  virtual void g1();  virtual void g2();  virtual void g3();
    virtual void g4();  virtual void g5();  virtual void g6();  virtual void g7();
    virtual void g8();  virtual void g9();  virtual void g10(); virtual void g11();
    virtual void g12(); virtual void g13();
    virtual void* create(std::string name, unsigned int iid, void* param);
};

extern "C" void addHeightmap_700d10(void* self, std::string const& name, int x, int y)
{
    char* p = (char*)self;
    void** hms = *(void***)(p + 0x30);
    int idx = fn_6ff5e0(self, x, y);
    void** slot = hms + idx;

    std::string base;
    base.assign(std::string(name, 0, name.rfind("Editable")));

    std::string cls = "dice.hfe.world." + base;
    dice::hfe::world::IHeightmap* hm = (dice::hfe::world::IHeightmap*)
        ((ClassManager*)classManager)->create(cls, dice::hfe::world::IID_IHeightmap, 0);

    *slot = hm;
    *(void**)(p + 0x18) = hm;
    if (x == 0 && y == 0) {
        *(void**)(p + 0x20) = hm;
    }

    hm->setPos((int)(x * *(float*)(p + 0x38)), (int)(y * *(float*)(p + 0x38)));
}
// REVERSED_FUNCTION: dice_hfe_world_HeightmapCluster_addHeightmap_std_string_constref_int_int (0x700d10)
