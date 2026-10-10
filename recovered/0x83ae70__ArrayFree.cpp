// FUNCTION: BF2 0x83ae70
extern "C" void gsifree(void * p);
extern "C" void FreeElement(void * array, int index);
struct DArrayImplementation
{
	int count;
	char pad[0x14];
	void * list;
};
extern "C" void ArrayFree(DArrayImplementation * array)
{
	int i;

	for (i = 0; i < array->count; i++)
	{
		FreeElement(array, i);
	}
	gsifree(array->list);
	gsifree(array);
}
