// FUNCTION: BF2 0x4f68d0
namespace dice { namespace hfe {
namespace io {

struct IStream {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual int vslot0x20(void* out, int n);
};

}

class DemoSpectatorCamera {
public:
    static int intToMode(unsigned int mode);
};

struct CamSub1c { float f0; float f4; float f8; int fc; };
struct CamSub2c { float x; float y; float z; };

inline float len2(CamSub2c const& v) { return v.x * v.x + v.y * v.y + v.z * v.z; }
inline void clear(CamSub2c& v) { v.x = 0.0f; v.y = 0.0f; v.z = 0.0f; }

struct CameraUpdate {
    int m_mode;
    int m_4;
    int m_8;
    int m_c;
    int m_10;
    int m_14;
    int m_18;
    CamSub1c m_1c;
    CamSub2c m_2c;
    void readFromStream(io::IStream* in);
};

void CameraUpdate::readFromStream(io::IStream* in) {
    int mode;
    in->vslot0x20(&m_4, 4);
    in->vslot0x20(&mode, 4);
    m_mode = DemoSpectatorCamera::intToMode(mode);
    if (m_mode == 0) {
        in->vslot0x20(&m_1c.f0, 4);
        in->vslot0x20(&m_1c.f4, 4);
        in->vslot0x20(&m_1c.f8, 4);
        in->vslot0x20(&m_1c.fc, 4);
        in->vslot0x20(&m_2c.x, 4);
        in->vslot0x20(&m_2c.y, 4);
        in->vslot0x20(&m_2c.z, 4);
        if (len2(m_2c) > *(float*)0xb3add8) {
            clear(m_2c);
        }
        return;
    }
    in->vslot0x20(&m_8, 4);
    in->vslot0x20(&m_c, 4);
    in->vslot0x20(&m_10, 4);
    in->vslot0x20(&m_14, 4);
    in->vslot0x20(&m_18, 4);
}

} }
