// FUNCTION: BF2 0x81d770
extern "C" void * negotiateList;
extern "C" int ArrayLength(void * array);
extern "C" void * ArrayNth(void * array, int n);
extern "C" void ArrayRemoveAt(void * array, int n);
extern "C" void RemoveNegotiator(void * neg)
{
	int i;
	for (i = 0 ; i < ArrayLength(negotiateList) ; i++)
	{
		if (neg == ArrayNth(negotiateList, i))
		{
			ArrayRemoveAt(negotiateList, i);
			return;
		}
	}
}
