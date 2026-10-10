// FUNCTION: BF2 0x83e580
// upstream GameSpy/common/gsLargeInt.c gsiLargeIntInverseMod
#include <cstring>
#include <cstdlib>
#include <cstdio>
#define GS_ASSERT(x)
#define GSI_UNUSED(x)
#define assert(x)
#define GS_LARGEINT_BINARY_SIZE (2048)
typedef unsigned long gsi_u64;
#define GS_LARGEINT_DIGIT_LONG_TYPE gsi_u64
typedef unsigned int gsi_u32;
#define GS_LARGEINT_DIGIT_TYPE gsi_u32
#define GS_LARGEINT_DIGIT_SIZE_BYTES (sizeof(GS_LARGEINT_DIGIT_TYPE))
#define GS_LARGEINT_DIGIT_SIZE_BITS (GS_LARGEINT_DIGIT_SIZE_BYTES*8)
#define GS_LARGEINT_MAX_DIGITS (GS_LARGEINT_BINARY_SIZE / GS_LARGEINT_DIGIT_SIZE_BITS)
typedef struct gsLargeInt_s { GS_LARGEINT_DIGIT_TYPE mLength; GS_LARGEINT_DIGIT_TYPE mData[GS_LARGEINT_MAX_DIGITS]; } gsLargeInt_t;
typedef int gsi_bool;
#define gsi_true ((gsi_bool)1)
#define l_dword GS_LARGEINT_DIGIT_LONG_TYPE
#define l_word GS_LARGEINT_DIGIT_TYPE
extern "C" {
}

gsi_bool gsiLargeIntInverseMod(const gsLargeInt_t *mod, l_word *dest)
{
	l_dword x=2;
	l_dword y=1;
	l_dword check = 0;

	gsi_u32 i;
	for (i = 2; i <= GS_LARGEINT_DIGIT_SIZE_BITS; i++)
	{
		check = (l_dword)mod->mData[0] * (l_dword)y;
		if (x < (check & ((x<<1)-1)))
			y += x;
		x = x << 1;
	}
	*dest = (l_word)(x-y);
	return gsi_true;
}
