// FUNCTION: BF2 0x7dba60
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x20];
    void* m_v;
    void* get() { return m_v; }
};
void* get_0x7dba60(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_io_BufferedStream_getStream (0x7dba60)
