// FUNCTION: BF2 0x7e5290
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x18];
    void* m_v;
    void* get() { return m_v; }
};
void* get_0x7e5290(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_io_MemStream_getPtr (0x7e5290)
