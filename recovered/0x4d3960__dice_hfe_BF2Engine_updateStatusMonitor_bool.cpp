// FUNCTION: BF2 0x4d3960
namespace dice { namespace hfe {
class BF2Engine {
public:
    char _pad[0x40];
    void* statusMonitor;
    void updateStatusMonitor(bool param);
};
extern void func_4e9b20(void*, int);
void BF2Engine::updateStatusMonitor(bool param) {
    void* monitor = statusMonitor;
    if (monitor != 0) {
        func_4e9b20(monitor, param);
    }
}
}
}

// REVERSED_FUNCTION: dice_hfe_BF2Engine_updateStatusMonitor_bool (0x4d3960)
