// FUNCTION: BF2 0x7658c0
#include <istream>

namespace dice { namespace hfe {

struct SoundEnvelopeHeader {
    float        m_f0;
    float        m_f1;
    float        m_f2;
    float        m_f3;
    bool         m_b;
    unsigned int m_u;
};

std::istream& operator>>(std::istream& is, SoundEnvelopeHeader& h) {
    char c;
    is >> h.m_f0;
    is >> c;
    is >> h.m_f1;
    is >> c;
    is >> h.m_f2;
    is >> c;
    is >> h.m_f3;
    is >> c;
    is >> h.m_b;
    is >> c;
    is >> h.m_u;
    is >> c;
    return is;
}

}}
// REVERSED_FUNCTION: dice_hfe_operator_std_istreamref_dice_hfe_SoundEnvelopeHeaderref (0x7658c0)
