// FUNCTION: BF2 0x577510
namespace dice { namespace hfe { namespace world {

class RotationalBundle {
public:
    virtual void _m0();
    virtual void _m1();
    virtual void _m2();
    virtual void _m3();
    virtual void _m4();
    virtual void _m5();
    virtual void _m6();
    virtual void _m7();
    virtual void _m8();
    virtual void _m9();
    virtual void _m10();
    virtual void _m11();
    virtual void _m12();
    virtual void _m13();
    virtual void _m14();
    virtual void _m15();
    virtual void _m16();
    virtual void _m17();
    virtual void _m18();
    virtual void _m19();
    virtual void _m20();
    virtual void _m21();
    virtual void _m22();
    virtual void _m23();
    virtual void updateFlags(unsigned int, unsigned int); // slot 24 = 0xc0
    void init();
};

class Camera : public RotationalBundle {
public:
    void init();

    char _pad[0x50 - sizeof(RotationalBundle)];
    void* m_ptr50;
    char _pad2[0x296 - 0x58];
    bool m_flag296;
};

void Camera::init()
{
    RotationalBundle::init();
    if (m_ptr50 != 0) {
        m_flag296 = true;
        updateFlags(0, 0x800);
    }
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_Camera_init (0x577510)
