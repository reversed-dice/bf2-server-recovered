// FUNCTION: BF2 0x601b00
namespace dice { namespace hfe { namespace world {

class DefaultSoundData {
public:
    char _pad0[0x14];
    bool m_noisy;
};

class DefaultSoundComp {
public:
    bool getNoisy() const;
private:
    char _pad0[0x30];
    DefaultSoundData* m_data;
};

bool DefaultSoundComp::getNoisy() const {
    return m_data->m_noisy;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_DefaultSoundComp_getNoisy_const (0x601b00)