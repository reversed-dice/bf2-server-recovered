// FUNCTION: BF2 0x83aec0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x18];
    void* m_v;
    void* get() { return m_v; }
};
void* get_0x83aec0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: ArrayGetDataPtr (0x83aec0)
