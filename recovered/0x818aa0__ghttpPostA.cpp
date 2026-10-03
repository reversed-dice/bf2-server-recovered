// FUNCTION: BF2 0x818aa0
// ghttpPostA wrapper
// 11 ins, 1 call, gcc40
extern "C" {
extern void ghttpPostExA(long, long, long, long, int, long, long, long);

void ghttpPostA(long a1, long a2, int a3, long a4, long a5)
{
    ghttpPostExA(a1, 0, a2, 0, a3, 0, a4, a5);
}

}
