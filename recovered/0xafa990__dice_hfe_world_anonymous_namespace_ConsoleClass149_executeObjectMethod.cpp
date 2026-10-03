// FUNCTION: BF2 0xafa990
#include <string>
namespace dice { namespace hfe {
struct HC {
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
    virtual void m(std::string const&, int, int);
};
extern "C" HC* dice_hfe_world_heightmapCluster;

long cb(long p) {
    if (*(int*)(p + 0x30) != 3) return 0;
    std::string s(**(std::string**)(p + 0x38));
    // PERM_ORDER
    int a = **(int**)(p + 0x40);
    int b = **(int**)(p + 0x48);
    *(char*)(p + 0x108) = 0;
    // PERM_ORDER_END
    dice_hfe_world_heightmapCluster->m(s, a, b);
    return 0;
}
} }
