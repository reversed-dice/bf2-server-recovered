// FUNCTION: BF2 0x4e2d30
namespace dice { namespace hfe {
class BF2Log {
public:
    char _pad[0x8];
    bool field;
    void setDebugCallbackDisabled(bool v);
};
void BF2Log::setDebugCallbackDisabled(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_BF2Log_setDebugCallbackDisabled (0x4e2d30)
