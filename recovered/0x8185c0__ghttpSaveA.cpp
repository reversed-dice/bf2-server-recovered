// FUNCTION: BF2 0x8185c0
// ghttpSaveA wrapper
// 11 ins, 1 call, gcc40
extern "C" {
extern void ghttpSaveExA(long, long, long, long, long, int, long, long, long);

void ghttpSaveA(long a1, long a2, int a3, long a4, long a5)
{
    ghttpSaveExA(a1, a2, 0, 0, 0, a3, 0, a4, a5);
}

}
