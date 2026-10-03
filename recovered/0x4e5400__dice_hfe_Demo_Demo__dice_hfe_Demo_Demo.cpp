// FUNCTION: BF2 0x4e5400
namespace dice { namespace hfe {
class Demo {
public:
    Demo();
    void* m_vtable;
    unsigned long long m_field8;
    unsigned long long m_field10;
    unsigned long long m_field18;
    unsigned char m_field20;
};
Demo::Demo() {
    m_vtable = reinterpret_cast<void*>(0xb3a310);
    m_field8 = 0;
    m_field10 = 0;
    m_field18 = 0;
    m_field20 = 0;
}
} }
// REVERSED_FUNCTION: dice_hfe_Demo_Demo (0x4e5400)