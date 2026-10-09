// FUNCTION: BF2 0x903820
// BF2_FLAGS: -fno-strict-aliasing
#include <vector>
namespace dice { namespace hfe { namespace world {
enum VehicleCategory { VC_DUMMY };
extern int CID_SupplyObjectTemplate;
extern void* getActiveTemplate(unsigned int);
int cb(void* p) {
    if (*(int*)((char*)p + 0x30) != 1)
        return 0;
    unsigned int v = **(unsigned int**)((char*)p + 0x38);
    *(char*)((char*)p + 0x108) = 0;
    std::vector<VehicleCategory>* vec = (std::vector<VehicleCategory>*)((char*)getActiveTemplate(CID_SupplyObjectTemplate) + 0x228);
    vec->push_back((VehicleCategory)v);
    return 0;
}
} } }
