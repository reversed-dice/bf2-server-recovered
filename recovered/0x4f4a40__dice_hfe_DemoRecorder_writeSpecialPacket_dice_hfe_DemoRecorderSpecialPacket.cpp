// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x4f4a40
namespace dice { namespace hfe { namespace io {
class IStream {
public:
    virtual void vf0();
    virtual void vf1();
    virtual void vf2();
    virtual void vf3();
    virtual void vf4();
    virtual int write(void const* p, int n);
};
} } }

namespace dice { namespace hfe {
class DemoRecorder {
public:
    void writeSpecialPacket(int p);
};

void DemoRecorder::writeSpecialPacket(int p) {
    io::IStream* s = *(io::IStream**)((char*)this + 0x68);
    int tmp = -2;
    s->write(&tmp, 4);
    tmp = p;
    (*(io::IStream**)((char*)this + 0x68))->write(&tmp, 4);
}
} }
