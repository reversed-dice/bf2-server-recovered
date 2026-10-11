// FUNCTION: BF2 0x832b10
#include <cassert>
extern "C" int gpiProcessConnect(void* gpi);
extern "C" int gpiProcessDeleteProfle(void* gpi);
extern "C" int gpiProcessRegisterUniqueNick(void* gpi);
extern "C" int gpiProcessGetInfo(void* gpi);
extern "C" int gpiProcessNewProfile(void* gpi);

struct GpOperation { int type; char pad0[0x2c]; int f30; };

void gpiProcessOperation(void* gpi, GpOperation* op)
{
    int result;
    switch (op->type) {
    case 0:
        result = gpiProcessConnect(gpi);
        break;
    case 1:
        result = gpiProcessDeleteProfle(gpi);
        break;
    case 2:
        result = gpiProcessRegisterUniqueNick(gpi);
        break;
    case 3:
        result = gpiProcessGetInfo(gpi);
        break;
    case 4:
    case 5:
        result = gpiProcessNewProfile(gpi);
        break;
    default:
#line 343 "External/GameSpy/gp/gpiOperation.c"
        assert(0);
    }
    if (result != 0)
        op->f30 = result;
}
