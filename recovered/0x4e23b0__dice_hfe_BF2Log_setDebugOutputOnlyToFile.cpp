// FUNCTION: BF2 0x4e23b0
namespace dice { namespace hfe {
class BF2Log {
public:
    char _pad[0xb];
    bool field;
    void setDebugOutputOnlyToFile(bool v);
};
void BF2Log::setDebugOutputOnlyToFile(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_BF2Log_setDebugOutputOnlyToFile (0x4e23b0)
