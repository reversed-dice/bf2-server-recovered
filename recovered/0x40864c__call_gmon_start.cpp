// FUNCTION: BF2 0x40864c
// BF2_FLAGS: -fno-optimize-sibling-calls
// 0x40864c call_gmon_start
extern "C" void (*gmon_start)(void);

void call_gmon_start()
{
    if (gmon_start != 0) {
        gmon_start();
    }
}

