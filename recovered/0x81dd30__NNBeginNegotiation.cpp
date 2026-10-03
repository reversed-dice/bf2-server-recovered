// FUNCTION: BF2 0x81dd30
// 0x81dd30 NNBeginNegotiation
extern "C" int NNBeginNegotiationWithSocket(int, int, int, void*, void*, void*);

int NNBeginNegotiation(int a1, int a2, void* a3, void* a4, void* a5)
{
    return NNBeginNegotiationWithSocket(-1, a1, a2, a3, a4, a5);
}
