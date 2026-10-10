// FUNCTION: BF2 0x81d720
extern "C" void * negotiateList;
extern "C" int ArrayLength(void * array);
extern "C" void * ArrayNth(void * array, int n);
struct NATNegotiatorImpl
{
	char pad[8];
	int cookie;
};
typedef NATNegotiatorImpl * NATNegotiator;
extern "C" NATNegotiator FindNegotiatorForCookie(int cookie)
{
	int i;
	if (negotiateList == 0)
		return 0;
	for (i = 0 ; i < ArrayLength(negotiateList) ; i++)
	{
		NATNegotiator neg = (NATNegotiator)ArrayNth(negotiateList, i);
		if (neg->cookie == cookie)
			return neg;
	}
	return 0;
}
