// FUNCTION: BF2 0x903620
// BF2_FLAGS: -fno-strict-aliasing
#include <vector>
namespace dice { namespace hfe { namespace world {
enum FireRate { FR_DUMMY };
extern int CID_FireCompTemplate;
extern int IID_IWeaponFireCompTemplate;
extern void* getActiveTemplateComponent(unsigned int, unsigned int);

int cb(void* p) {
    if (*(int*)((char*)p + 0x30) != 1)
        return 0;
    int cid = CID_FireCompTemplate;
    unsigned int v = **(unsigned int**)((char*)p + 0x38);
    *(char*)((char*)p + 0x108) = 0;
    int iid = IID_IWeaponFireCompTemplate;
    std::vector<FireRate>* vec = (std::vector<FireRate>*)((char*)getActiveTemplateComponent(iid, cid) + 0x38);
    vec->push_back((FireRate)v);
    return 0;
}
} } }
