// FUNCTION: BF2 0x4f4b50
namespace dice { namespace hfe {

class DemoSpectatorCamera {
public:
    char _pad_0x00[0x18];
    void* m_unk_0x18;

    void* getFreeCamera();
};

void* DemoSpectatorCamera::getFreeCamera() {
    void* p = this->m_unk_0x18;
    if (__builtin_expect(p != 0, 0)) {
        p = *(void**)((char*)p + 8);
        if (__builtin_expect(p != 0, 1)) return p;
    }
    return 0;
}

} }
// REVERSED_FUNCTION: dice_hfe_DemoSpectatorCamera::getFreeCamera (0x4f4b50)