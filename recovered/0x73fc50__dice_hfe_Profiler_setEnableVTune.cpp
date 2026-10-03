// FUNCTION: BF2 0x73fc50
namespace dice { namespace hfe {
class Profiler {
public:
    char _pad[0x21c8];
    bool field;
    void setEnableVTune(bool v);
};
void Profiler::setEnableVTune(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_Profiler_setEnableVTune (0x73fc50)
