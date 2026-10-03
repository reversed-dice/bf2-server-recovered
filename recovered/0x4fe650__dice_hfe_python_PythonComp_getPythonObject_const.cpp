// FUNCTION: BF2 0x4fe650
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x10];
    void* m_v;
    void* get() { return m_v; }
};
void* get_0x4fe650(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_python_PythonComp_getPythonObject_const (0x4fe650)
