// FUNCTION: BF2 0x743200
namespace dice { namespace hfe {
class Profiler {
public:
    char _pad[0x21d8];
    bool field;
    void setEnablePageFaults(bool v);
};
void Profiler::setEnablePageFaults(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_Profiler_setEnablePageFaults (0x743200)
