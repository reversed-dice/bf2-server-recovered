// FUNCTION: BF2 0x829190
extern "C" void gpiDestroy_82c840(void);

extern "C" void gpDestroy_829190(void* param1)
{
    if (param1 != 0 && *(void**)param1 != 0) {
        gpiDestroy_82c840();
    }
}
