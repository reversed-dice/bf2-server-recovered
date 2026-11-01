// from api 94.42%
// BF2_FLAGS: -fcrossjumping
// FUNCTION: BF2 0x83e3f0
// upstream gsLargeIntSquareMod @ gsLargeInt.c:860
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
gsi_bool gsLargeIntSquareMod(const gsLargeInt_t *lint, const gsLargeInt_t *mod, gsLargeInt_t *dest)
{
	int i = 0;
	int k = 0;
	int len = (int)lint->mLength; // signed version
	l_dword carry = 0;
	int oldShiftBit = 0;
	int newShiftBit = 0;
	gsi_bool result = gsi_false;
	unsigned int mask = (unsigned int)1<<(GS_LARGEINT_DIGIT_SIZE_BITS-1);

	l_word squareSums[GS_LARGEINT_MAX_DIGITS*2];   // temp dest for square sums
	l_word otherSums[GS_LARGEINT_MAX_DIGITS*2];    // temp dest for other sums
	l_word squareLen = 0;
	l_word otherLen = 0;

	GSLINT_ENTERTIMER(GSLintTimerSquareMod);

	memset(&squareSums, 0, sizeof(squareSums));
	memset(&otherSums, 0, sizeof(otherSums));

	// Go through each digit, multiplying with each other digit
	// (only do this once per pair, since AB == BA)
	// Ex: ABC * ABC, we want AB,AC,BC only
	for (i=1; i < len; i++)
	{
		for(k=0; k < i; k++)
		{
			carry += (l_dword)lint->mData[i]*lint->mData[k] + otherSums[i+k];
			otherSums[i+k] = (l_word)carry;
			carry  = carry >> GS_LARGEINT_DIGIT_SIZE_BITS;
		}
		if(carry)
		{
			otherSums[i+k] = (l_word)carry;
			carry = carry >> GS_LARGEINT_DIGIT_SIZE_BITS;
		}
	}

	// Multiply by 2 (because each internal pair appears twice)
	for (i=0; i < (len+len); i++)
	{
		l_word v = otherSums[i];
		newShiftBit = (int)(v >> (GS_LARGEINT_DIGIT_SIZE_BITS-1));
		otherSums[i] = (l_word)((otherSums[i] << 1) + oldShiftBit);
		oldShiftBit = newShiftBit;
	}
	// don't worry about left-overy carry because this can't overflow
	// maxlen N-digit*N-digit = 2n-digit

	// Go through each digit, multiplying with itself
	for (i=0; i <len; i++)
	{
		carry = (l_dword)lint->mData[i] * lint->mData[i];
		squareSums[i*2] = (l_word)carry;
		squareSums[i*2+1] = (l_word)(carry >> GS_LARGEINT_DIGIT_SIZE_BITS);
	}
	squareLen = (l_word)(2*len);
	otherLen = (l_word)(2*len); 

	// Add the two together
	result = gsiLargeIntAdd(otherSums, otherLen, squareSums, squareLen, squareSums, &squareLen, GS_LARGEINT_MAX_DIGITS*2);
	result = gsiLargeIntDiv(squareSums, squareLen, mod, NULL, dest);

	GSLINT_EXITTIMER(GSLintTimerSquareMod);
	return result;
}
