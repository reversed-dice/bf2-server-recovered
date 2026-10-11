// FUNCTION: BF2 0x83f5d0
#define RANa 16807
#define LONGRAND_MAX 2147483647L

static long randomnum = 1;

static long nextlongrand(long seed)
{
	unsigned long lo, hi;
	lo = RANa *(unsigned long)(seed & 0xFFFF);
	hi = RANa *((unsigned long)seed >> 16);
	lo += (hi & 0x7FFF) << 16;

	if (lo > LONGRAND_MAX)
	{
		lo &= LONGRAND_MAX;
		++lo;
	}
	lo += hi >> 15;

	if (lo > LONGRAND_MAX)
	{
		lo &= LONGRAND_MAX;
		++lo;
	}

	return(long)lo;
}

static long longrand(void)
{
	randomnum = nextlongrand(randomnum);
	return randomnum;
}

int Util_RandInt(int low, int high)
{
	unsigned int range = (unsigned int)high-low;
	int num;

	if (range == 0)
		return (low);

	num = (int)(longrand() % range);

	return(num + low);
}
