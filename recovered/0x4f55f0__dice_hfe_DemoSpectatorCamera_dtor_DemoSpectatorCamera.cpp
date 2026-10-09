// FUNCTION: BF2 0x4f55f0
// BF2_FLAGS: -fno-strict-aliasing
extern "C" {
    void _ZdlPv(void* ptr);
    void _ZdaPv(void* ptr);
}

namespace dice {
namespace hfe {

class DemoSpectatorCamera {
public:
    char _pad0[8];
    void* m_ptr8;
    char _pad10[8];
    void* m_ptr18;
    char _pad20[0x58];
    void* m_ptr78;
    char _pad80[0x18];
    void* m_ptr98;

    ~DemoSpectatorCamera();
};

DemoSpectatorCamera::~DemoSpectatorCamera()
{
    _ZdlPv(m_ptr98);

    if (m_ptr78 != 0) {
        _ZdaPv(m_ptr78);
    }

    void** p18 = &m_ptr18;
    _ZdlPv(m_ptr8);

    void* r = *p18;
    if (r != 0) {
        void* p8 = *(void**)((char*)r + 8);
        if (p8 != 0) {
            ((void (*)(void*, int))(*(void***)p8)[0x68 / 8])(p8, 1);
        }
    }

    int* rc = *(int**)p18;
    if (rc != 0) {
        if (--(*rc) == 0) {
            _ZdlPv(rc);
        }
    }
}

} // namespace hfe
} // namespace dice
