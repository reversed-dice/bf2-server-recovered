// FUNCTION: BF2 0x42d190
namespace dice { namespace hfe {

class PythonCommandEvent {
public:
    unsigned int getType() const __attribute__((noinline));
};

unsigned int PythonCommandEvent::getType() const {
    return 0x31;
}

} }
// REVERSED_FUNCTION: dice_hfe_PythonCommandEvent_getType_const (0x42d190)