// FUNCTION: BF2 0x7d01d0
extern "C" void dice_hfe_io_GraphicalNetworkStats_initGraphs(void*);
namespace dice { namespace hfe { namespace io {

typedef void (*VF)(void*, float);
typedef void (*VF2)(void*, long);

class GraphicalNetworkStats {
public:
    char pad[8];
    unsigned char* m_begin;
    unsigned char* m_end;
    char pad18[0x80 - 0x18];
    float m_f80;
    float m_f84;
    char pad88[0xa0 - 0x88];
    void* m_a0;
    void* m_a8;
    void* m_b0;
    void* m_b8;

    void updateGraphs();
};

void GraphicalNetworkStats::updateGraphs()
{
    if (((m_end - m_begin) >> 2) == 0)
        return;
    if (!m_a8)
        dice_hfe_io_GraphicalNetworkStats_initGraphs(this);
    ((VF*)(*(void***)m_a0))[0x80 / 8](m_a0, m_f80 / 1000.0f);
    ((VF*)(*(void***)m_a8))[0x80 / 8](m_a8, m_f84 / 1000.0f);
    ((VF2*)(*(void***)m_b8))[0x80 / 8](m_b8, *(long*)((char*)this + 0x8));
    ((VF2*)(*(void***)m_b0))[0x80 / 8](m_b0, *(long*)((char*)this + 0x38));
}

} } }
