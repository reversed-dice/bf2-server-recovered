// FUNCTION: BF2 0x516d40
namespace dice { namespace hfe { namespace world {

namespace detail {
    struct DestroyableWindowStateBlock {
        unsigned char _pad0[0x200];
        unsigned int m_numStates;
    };
} // namespace detail

class DestroyableWindowsBundle {
public:
    unsigned int getNumStates() const;

private:
    unsigned char _pad0[0x28];
    detail::DestroyableWindowStateBlock* m_stateData;
};

unsigned int DestroyableWindowsBundle::getNumStates() const {
    return m_stateData->m_numStates;
}

} } } // namespace dice::hfe::world
// REVERSED_FUNCTION: dice_hfe_world_DestroyableWindowsBundle_getNumStates_const (0x516d40)