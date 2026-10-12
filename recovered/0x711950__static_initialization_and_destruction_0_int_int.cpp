// FUNCTION: BF2 0x711950

#include <iostream>

namespace {

struct Sin
{
	Sin()
	{
		*(int*)0x010a4c48 = 0;
		*(float*)0x010a4c60 = 0.66f;
		*(float*)0x010a4c64 = 0.66f;
		*(float*)0x010a4c68 = 0.185f;
		*(float*)0x010a4c6c = 0.185f;
		*(float*)0x010a4c70 = 0.66f;
		*(float*)0x010a4c74 = 0.185f;
		*(float*)0x010a4c78 = 0.185f;
		*(float*)0x010a4c7c = 0.185f;
		*(float*)0x010a4c80 = 0.66f;
		*(float*)0x010a4c84 = 0.185f;
		*(float*)0x010a4c88 = 0.66f;
		*(float*)0x010a4c8c = 0.66f;
		*(float*)0x010a4c90 = 0.66f;
		*(float*)0x010a4c94 = 0.185f;
		*(float*)0x010a4c98 = 0.185f;
		*(float*)0x010a4c9c = 0.66f;
		*(float*)0x010a4ca0 = 0.66f;
		*(float*)0x010a4ca4 = 0.66f;
		*(float*)0x010a4ca8 = 0.66f;
		*(float*)0x010a4cac = 0.185f;
		*(float*)0x010a4cb0 = 0.66f;
		*(float*)0x010a4cb4 = 0.185f;
		*(float*)0x010a4cb8 = 0.185f;
		*(float*)0x010a4cbc = 0.185f;
		*(float*)0x010a4cc0 = 1.0f;
		*(float*)0x010a4cc4 = 1.0f;
		*(float*)0x010a4cc8 = 1.0f;
		*(float*)0x010a4ccc = 0.0f;
		*(float*)0x010a4cd0 = 0.0f;
		*(float*)0x010a4cd4 = 0.0f;
		*(int**)0x010a4c40 = (int*)0x010a4c48;
		*(int*)0x010a4c38 = 0;
		*(int**)0x010a4c30 = (int*)0x010a4c38;
		*(int*)0x010a4c28 = 0;
		*(int**)0x010a4c20 = (int*)0x010a4c28;
		*(int*)0x010a4c18 = 0;
		*(int**)0x010a4c10 = (int*)0x010a4c18;
		*(float*)0x010a4c08 = 0.01f;
		*(float**)0x010a4c00 = (float*)0x010a4c08;
	}
};
Sin g_sin;

}
