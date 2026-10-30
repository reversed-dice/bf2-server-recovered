// FUNCTION: BF2 0x6f39f0
#include <string>
#include <ostream>

namespace dice { namespace hfe {

struct Debug_6f39f0 {
    char _pad[0x20];
    std::ostream os;
    char _tail[0x50];
    Debug_6f39f0(int type, const std::string& file, int line, const std::string& tag);
    ~Debug_6f39f0();
};

} }

extern char DAT_00bb25f1;

extern "C" float getSoldierHeight_6f39f0(void* self, int* pPose, float* pHeight)
{
    typedef float (*FnF)(void*);
    typedef int   (*FnI)(void*);

    void* obj = *(void**)((char*)self + 0x28);
    float h = ((FnF)(*(void***)obj)[176])(obj);
    int pose = ((FnI)(*(void***)obj)[158])(obj);
    float f = ((FnF)(*(void***)obj)[175])(obj);

    float result;
    switch (pose) {
    case 0:
        if (pPose) *pPose = 5;
        if (pHeight && pPose)
            *pHeight = (h + f * -2.0f) / (float)(*pPose - 1);
        result = h;
        break;
    case 1:
    case 3:
        result = **(float**)0x10a4018;
        if (pPose) *pPose = 3;
        if (pHeight && pPose)
            *pHeight = (result + f * -2.0f) / (float)(*pPose - 1);
        break;
    case 2:
        result = **(float**)0x10a4010;
        if (pPose) *pPose = 1;
        if (pHeight && pPose)
            *pHeight = 0.0f;
        break;
    default:
        dice::hfe::Debug_6f39f0(6, std::string("Physics/SoldierResponse.cpp"), 597,
                                std::string(&DAT_00bb25f1)).os << "Pose does not exist";
        result = h;
        break;
    }
    return result;
}
