// FUNCTION: BF2 0x7a5b80
namespace dice {
namespace hfe {

struct TickCalculator {
    float  m_00;   // 0x00
    int    m_04;   // 0x04
    double m_08;   // 0x08
    double m_10;   // 0x10
    double m_18;   // 0x18
};

void dice_hfe_TickCalculator_TickCalculator(TickCalculator* self, int a, float b)
{
    self->m_00 = 1.0f / b;
    self->m_04 = a;
    self->m_08 = 0.0;
    self->m_10 = 0.0;
    self->m_18 = 0.0;
}

}}
