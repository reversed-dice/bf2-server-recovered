// FUNCTION: BF2 0x74aae0
namespace dice { namespace hfe {

extern long PerformanceCounter_getCount();

extern "C" void Timer_update(long param_1) {
    long lVar1 = PerformanceCounter_getCount();
    long lVar2 = lVar1 - *(long*)(param_1 + 8);
    *(long*)(param_1 + 8) = lVar1;
    lVar1 = lVar2 + *(long*)(param_1 + 0x10);
    *(long*)(param_1 + 0x10) = lVar1;
    *(double*)(param_1 + 0x18) = (double)lVar2 * *(double*)(param_1 + 0x28);
    *(double*)(param_1 + 0x20) = (double)lVar1 * *(double*)(param_1 + 0x28);
}
} }
