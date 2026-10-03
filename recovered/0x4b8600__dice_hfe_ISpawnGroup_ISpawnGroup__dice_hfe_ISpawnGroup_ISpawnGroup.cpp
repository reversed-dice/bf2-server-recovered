// FUNCTION: BF2 0x4b8600
namespace dice { namespace hfe {
class ISpawnGroup {
public:
    ISpawnGroup();
};
ISpawnGroup::ISpawnGroup() {
    *reinterpret_cast<void**>(this) = reinterpret_cast<void*>(0xb36f90);
}
} }
// REVERSED_FUNCTION: dice_hfe_ISpawnGroup_ISpawnGroup (0x4b8600)