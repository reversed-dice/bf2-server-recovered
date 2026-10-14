// BF2_FLAGS: -fcrossjumping
// FUNCTION: BF2 0x83d6e0
// upstream gsiLargeIntMult @ gsLargeInt.c:381
#include <cstring>
typedef unsigned int gsi_u32;
typedef unsigned long long gsi_u64;
typedef int gsi_bool;
typedef int gsi_i32;
#define gsi_false ((gsi_bool)0)
#define gsi_true ((gsi_bool)1)
typedef gsi_u32 l_word;
typedef gsi_u64 l_dword;
#define GS_LARGEINT_DIGIT_SIZE_BITS 32
#define GS_LARGEINT_DIGIT_SIZE_BYTES 4
#define GS_LARGEINT_MAX_DIGITS 256
#define GS_LARGEINT_KARATSUBA_CUTOFF 32
typedef struct gsLargeInt_s { gsi_u32 mLength; gsi_u32 mData[GS_LARGEINT_MAX_DIGITS]; } gsLargeInt_t;
void gsiLargeIntTimerEnter(unsigned int id);
void gsiLargeIntTimerExit(unsigned int id);
#define GSLINT_ENTERTIMER(id) gsiLargeIntTimerEnter(id)
#define GSLINT_EXITTIMER(id) gsiLargeIntTimerExit(id)
#define GSLintTimerMult 0
#define GSLintTimerMultM 1
#define GSLintTimerKMult 2
#define GSLintTimerAdd 3
#define GSLintTimerSub 4
#define GSLintTimerDiv 5
#define GSLintTimerSubDivide 6
#define GSLintTimerSquareMod 7
#define GSLintTimerPowerMod 8
gsi_bool gsiLargeIntAdd(const l_word*, l_word, const l_word*, l_word, l_word*, l_word*, l_word);
gsi_bool gsiLargeIntSub(const l_word*, l_word, const l_word*, l_word, l_word*, l_word*);
gsi_bool gsiLargeIntMult(const l_word*, l_word, const l_word*, l_word, l_word*, l_word*, l_word);
gsi_bool gsiLargeIntKMult(const l_word*, const l_word*, l_word, l_word*, l_word*, l_word);
gsi_bool gsiLargeIntDiv(const l_word*, l_word, const gsLargeInt_t*, gsLargeInt_t*, gsLargeInt_t*);
gsi_bool gsiLargeIntSubDivide(l_word*, l_word, const l_word*, l_word, gsi_u32, l_word*);
gsi_bool gsiLargeIntMultM(gsLargeInt_t*, gsLargeInt_t*, const gsLargeInt_t*, gsi_u32, gsLargeInt_t*);
gsi_bool gsiLargeIntInverseMod(const gsLargeInt_t*, l_word*);
gsi_bool gsiLargeIntResize(gsLargeInt_t*, l_word);
gsi_bool gsiLargeIntStripLeadingZeroes(gsLargeInt_t*);
gsi_bool gsiLargeIntSizePower2(const gsLargeInt_t*, const gsLargeInt_t*, l_word*);
gsi_i32 gsiLargeIntCompare(const l_word*, l_word, const l_word*, l_word);
gsi_bool gsLargeIntMult(const gsLargeInt_t*, const gsLargeInt_t*, gsLargeInt_t*);
gsi_bool gsLargeIntSquareMod(const gsLargeInt_t*, const gsLargeInt_t*, gsLargeInt_t*);
gsi_bool gsLargeIntPowerMod(const gsLargeInt_t*, const gsLargeInt_t*, const gsLargeInt_t*, gsLargeInt_t*);
static l_word max(l_word a, l_word b) { return a > b ? a : b; }
static gsi_bool gsi_is_false(gsi_bool b) { return b == gsi_false; }
static gsi_bool gsi_is_true(gsi_bool b) { return b == gsi_true; }
gsi_bool gsiLargeIntMult(const l_word *data1, l_word length1, const l_word *data2, l_word length2, l_word *dest, l_word *lenout, l_word maxlen)
{
	unsigned int i=0;
	unsigned int k=0;

	gsLargeInt_t temp;
	memset(&temp, 0, sizeof(temp));
	*lenout = 0;

	GSLINT_ENTERTIMER(GSLintTimerMult);

	for(i=0; i<length2; i++)
	{
		// don't have to multiply by 0
		if(data2[i] != 0)
		{
			// multiply data1 by data2[i]
			for (k=0; k<length1; k++)
			{
				// carry starts out as product
				//   (it is mathematically impossible for carry to overflow
				//    at the first addition [see below])
				l_dword carry = (l_dword)data1[k] * data2[i];
				unsigned int digit = (unsigned int)(i+k);
				if (digit >= maxlen)
				{
					GSLINT_EXITTIMER(GSLintTimerMult);
					return gsi_false; // overflow
				}
				while(carry)
				{
					carry += temp.mData[digit];
					temp.mData[digit] = (l_word)carry;
					carry = carry >> GS_LARGEINT_DIGIT_SIZE_BITS;
					digit++;
					if ((digit > maxlen) ||
						(digit == maxlen && carry>0))
					{
						GSLINT_EXITTIMER(GSLintTimerMult);
						return gsi_false; // overflow
					}
				}
				if (digit > (gsi_i32)temp.mLength)
					temp.mLength = (l_word)digit;
			}
		}
	}
	// copy into destination (calculate length at this time)
	while(temp.mLength>0 && temp.mData[temp.mLength-1] == 0)
		temp.mLength--; // strip leading zeroes
	*lenout = temp.mLength;
	memcpy(dest, temp.mData, (*lenout)*sizeof(l_word));

	GSLINT_EXITTIMER(GSLintTimerMult);
	return gsi_true;
}
