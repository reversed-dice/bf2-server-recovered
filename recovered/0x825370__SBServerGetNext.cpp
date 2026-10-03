// FUNCTION: BF2 0x825370
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x28];
    void* m_v;
    void* get() { return m_v; }
};
void* get_0x825370(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: SBServerGetNext (0x825370)
