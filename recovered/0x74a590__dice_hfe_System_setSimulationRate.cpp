// FUNCTION: BF2 0x74a590
namespace dice { namespace hfe {
class System {
public:
    char _pad[0xc];
    int field;
    void setSimulationRate(int v);
};
void System::setSimulationRate(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_System_setSimulationRate (0x74a590)
