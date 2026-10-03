// FUNCTION: BF2 0x50cc20
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x22c];
    unsigned int m_v;
    unsigned int inc() { return ++m_v; }
};
unsigned int f_556(Accessor* p) { return p->inc(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_AntennaObject_addRef (556)
