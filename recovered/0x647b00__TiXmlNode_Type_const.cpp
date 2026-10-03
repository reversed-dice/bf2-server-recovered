// FUNCTION: BF2 0x647b00
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x20];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x647b00(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: TiXmlNode_Type_const (0x647b00)
