// FUNCTION: BF2 0x7dba80
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x38];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x7dba80(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_io_BufferedStream_getBufferSize (0x7dba80)
