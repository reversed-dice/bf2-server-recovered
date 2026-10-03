// FUNCTION: BF2 0x4df090
namespace dice { namespace hfe {

extern "C" void dice_hfe_io_shutdownSocketManager();

void fn_0x4df090() {
    dice_hfe_io_shutdownSocketManager();
    void* g = *(void**)0x10aebe8;
    if (g != 0) {
        void** vt = *(void***)g;
        ((void(*)(void*))vt[0x10/8])(g);
        *(void**)0x10aebe8 = 0;
    }
}

} }
// REVERSED_FUNCTION: dice_hfe_BF2EngineSetup_shutdownNetwork (0x4df090)
