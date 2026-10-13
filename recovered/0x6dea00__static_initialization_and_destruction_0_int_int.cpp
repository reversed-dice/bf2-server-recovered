// FUNCTION: BF2 0x6dea00
#include <iostream>
#include <string>

namespace dice { namespace hfe {

namespace {

std::string defaultSquadNames[27] = {
	"Unassigned", "Alpha", "Bravo", "Charlie", "Delta", "Echo", "Foxtrot",
	"Gamma", "Hotel", "India", "Juliet", "Kilo", "Lima", "Mike", "November",
	"Oscar", "Papa", "Quebec", "Romeo", "Sierra", "Tango", "Uniform",
	"Victor", "Whiskey", "Xray", "Yankee", "Zulu"
};

struct FloatInit
{
	FloatInit()
	{
		*(float*)0x010a3748 = 0.01f;
		*(float*)0x010a3760 = 0.66f;
		*(float*)0x010a3764 = 0.66f;
		*(float*)0x010a3768 = 0.185f;
		*(float*)0x010a376c = 0.185f;
		*(float*)0x010a3770 = 0.66f;
		*(float*)0x010a3774 = 0.185f;
		*(float*)0x010a3778 = 0.185f;
		*(float*)0x010a377c = 0.185f;
		*(float*)0x010a3780 = 0.66f;
		*(float*)0x010a3784 = 0.185f;
		*(float*)0x010a3788 = 0.66f;
		*(float*)0x010a378c = 0.66f;
		*(float*)0x010a3790 = 0.66f;
		*(float*)0x010a3794 = 0.185f;
		*(float*)0x010a3798 = 0.185f;
		*(float*)0x010a379c = 0.66f;
		*(float*)0x010a37a0 = 0.66f;
		*(float*)0x010a37a4 = 0.66f;
		*(float*)0x010a37a8 = 0.66f;
		*(float*)0x010a37ac = 0.185f;
		*(float*)0x010a37b0 = 0.66f;
		*(float*)0x010a37b4 = 0.185f;
		*(float*)0x010a37b8 = 0.185f;
		*(float*)0x010a37bc = 0.185f;
		*(float*)0x010a37c0 = 1.0f;
		*(float*)0x010a37c4 = 1.0f;
		*(float*)0x010a37c8 = 1.0f;
		*(float*)0x010a37cc = 0.0f;
		*(float*)0x010a37d0 = 0.0f;
		*(float*)0x010a37d4 = 0.0f;
		*(void**)0x010a3740 = (void*)0x10a3748;
		*(float*)0x010a3738 = 10.0f;
		*(void**)0x010a3730 = (void*)0x10a3738;
		*(float*)0x010a3728 = 0.0f;
		*(void**)0x010a3720 = (void*)0x10a3728;
	}
};

FloatInit floatInit;

} } }
