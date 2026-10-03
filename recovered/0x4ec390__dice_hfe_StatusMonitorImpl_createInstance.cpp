// FUNCTION: BF2 0x4ec390
namespace dice { namespace hfe {

extern "C" void* real_operator_new(unsigned long);
extern "C" void StatusMonitorImpl_posix_ctor(void*);
void* fn_0x4ec390() {
    void* p = real_operator_new(0x20);
    StatusMonitorImpl_posix_ctor(p);
    return p;
}

} }
// REVERSED_FUNCTION: dice_hfe_StatusMonitorImpl_createInstance (0x4ec390)
