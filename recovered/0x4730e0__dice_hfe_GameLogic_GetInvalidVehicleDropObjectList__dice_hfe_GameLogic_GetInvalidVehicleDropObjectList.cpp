// FUNCTION: BF2 0x4730e0
namespace dice { namespace hfe {

class GameLogic {
public:
    const char* GetInvalidVehicleDropObjectList();
};

const char* GameLogic::GetInvalidVehicleDropObjectList() {
    return reinterpret_cast<const char*>(this) + 0x3b0;
}

} }
// REVERSED_FUNCTION: dice_hfe_GameLogic_GetInvalidVehicleDropObjectList (0x4730e0)