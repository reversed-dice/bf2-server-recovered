// FUNCTION: BF2 0x6d7b30

#include <iostream>

namespace {

struct Sin
{
	Sin()
	{
		*(float**)0x010a34f0 = (float*)0x010a34f8;
		*(float**)0x010a34e0 = (float*)0x010a34e8;
		*(float*)0x010a34f8 = 0.99f;
		*(float*)0x010a34e8 = 0.99f;
		*(float*)0x010a34d8 = 0.9f;
		*(float*)0x010a34c8 = 0.9f;
		*(float**)0x010a34d0 = (float*)0x010a34d8;
		*(float**)0x010a34c0 = (float*)0x010a34c8;
		*(float*)0x010a34b8 = 1.6f;
		*(float**)0x010a34b0 = (float*)0x010a34b8;
		*(float*)0x010a34a8 = 0.5f;
		*(float**)0x010a34a0 = (float*)0x010a34a8;
		*(float*)0x010a3498 = 0.5f;
		*(float**)0x010a3490 = (float*)0x010a3498;
		*(float*)0x010a3488 = 1.5f;
		*(float**)0x010a3480 = (float*)0x010a3488;
		*(float*)0x010a3478 = 0.5f;
		*(float**)0x010a3470 = (float*)0x010a3478;
		*(float*)0x010a3468 = 0.5f;
		*(float**)0x010a3460 = (float*)0x010a3468;
		*(float*)0x010a3458 = 0.1f;
		*(float**)0x010a3450 = (float*)0x010a3458;
		*(int*)0x010a3448 = 1;
		*(int**)0x010a3440 = (int*)0x010a3448;
	}
};
Sin g_sin;

}
