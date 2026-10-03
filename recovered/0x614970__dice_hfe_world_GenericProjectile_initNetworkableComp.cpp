// FUNCTION: BF2 0x614970
#include <string>

// dice::hfe::world::GenericProjectile::initNetworkableComp() -- 0x614970
//
// Registers the networkable component unless the projectile is flagged at
// +0x369 or its template's name (vtable +0x128) is the empty tag.

extern char DAT_00bb25f1;

namespace dice { namespace hfe { namespace world {
extern void setNetworkableComp_614970(void*, unsigned);
} } }

typedef std::string* (*FnName_614970)(void*);

extern "C" void initNetworkableComp_614970(char* self)
{
    if (*(char*)(self + 0x369) != 0) return;
    void* tmpl = *(void**)(self + 0x258);
    if (tmpl == 0) return;
    std::string* name = (*(FnName_614970*)(*(char**)tmpl + 0x128))(tmpl);
    if (name->compare(&DAT_00bb25f1) != 0)
        dice::hfe::world::setNetworkableComp_614970(self, *(unsigned*)0xc75ebc);
}
// REVERSED_FUNCTION: dice_hfe_world_GenericProjectile_initNetworkableComp (0x614970)
