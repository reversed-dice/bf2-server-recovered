// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x4f4950
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
    void writeEndOfStream(int x);
};

static inline void put4(io::IStream* s, int v) {
    int tmp = v;
    s->write(&tmp, 4);
}

void DemoRecorder::writeEndOfStream(int x) {
    if (*(io::IStream**)((char*)this + 0x68)) {
        put4(*(io::IStream**)((char*)this + 0x68), x);
        put4(*(io::IStream**)((char*)this + 0x68), 0);
    }
}
} }
