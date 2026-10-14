// BF2_FLAGS: -fcrossjumping
// FUNCTION: BF2 0x83d3c0
// upstream GameSpy/common/gsLargeInt.c static gsiLargeIntAdd
#include <cstring>

typedef unsigned int gsi_u32;
typedef unsigned long long gsi_u64;
typedef int gsi_bool;
#define gsi_false ((gsi_bool)0)
#define gsi_true ((gsi_bool)1)
typedef gsi_u32 l_word;
typedef gsi_u64 l_dword;
#define GS_LARGEINT_DIGIT_SIZE_BITS 32

void gsiLargeIntTimerEnter(unsigned int id);
void gsiLargeIntTimerExit(unsigned int id);

gsi_bool gsiLargeIntAdd(const l_word *data1, l_word length1, const l_word *data2, l_word length2, l_word *dest, l_word *lenout, l_word maxlen)
{
	gsi_u32 i = 0;
	l_dword carry = 0; // to hold overflow

	gsi_u32 shorterLen = 0;
	gsi_u32 longerLen = 0;
	//const gsi_u32 *shorterSrc = NULL;
	const l_word *longerSrc = NULL;

	gsiLargeIntTimerEnter(3);

	if (maxlen < length1 || maxlen < length2)
		return gsi_false; // dest not large enough, OVERFLOW

	if (length1 < length2)
	{
		shorterLen = length1;
		//shorterSrc = data1;
		longerLen = length2;
		longerSrc = data2;
	}
	else
	{
		shorterLen = length2;
		//shorterSrc = data2;
		longerLen = length1;
		longerSrc = data1;
	}

	// Add digits until the shorterSrc's length is reached
	while (i < shorterLen)
	{
		carry += (l_dword)data1[i] + data2[i];
		dest[i] = (l_word)carry;
		carry = carry >> GS_LARGEINT_DIGIT_SIZE_BITS; //32;
		i++;
	}

	// Continue adding until carry is zero
	while ((carry > 0) && (i < longerLen))
	{
		carry += (l_dword)longerSrc[i];
		dest[i] = (l_word)carry;
		carry = carry >> GS_LARGEINT_DIGIT_SIZE_BITS; //32;
		i++;
	}

	// Is there still a carry?
	//    do not perform length check here, so that we can support oversized buffers
	if (carry > 0) // && i < GS_LARGEINT_INT_SIZE)
	{
		if (maxlen <= i)
			return gsi_false; // OVERFLOW, no room for extra digit
		dest[i++] = (l_word)carry;
		carry = 0;
	}

	// Copy the rest of the bytes straight over (careful of memory overlap)
	//    this can't happen if there was a carry (see above carry>0 check)
	if (i < longerLen)
	{
		// check overlap
		if (&dest[i] != &longerSrc[i])
			memcpy(&dest[i], &longerSrc[i], (longerLen - i) * sizeof(l_word));
		i = longerLen;
	}
	*lenout = (l_word)i;

	gsiLargeIntTimerExit(3);

	if (carry)
		return gsi_false; // overflow
	else
		return gsi_true;
}
