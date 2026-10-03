// FUNCTION: BF2 0x4f1cc0
namespace dice { namespace hfe { namespace io {
class IStream;
} } }

namespace dice { namespace hfe {

class DemoSpectatorCamera {
public:
    unsigned int m_unk_0x2;
    unsigned int m_unk_0x4;
    unsigned int m_unk_0x5;
    void* m_unk_0x8;
    unsigned int m_unk_0xA;
    unsigned int m_unk_0xD;
    unsigned int m_unk_0xE;
    int m_unk_0x10;
    unsigned int m_unk_0x14;
    unsigned int m_unk_0x15;
    unsigned int m_unk_0x16;
    unsigned char m_unk_0x17;
    void* m_unk_0x18;
    int m_unk_0x20;
    unsigned char m_unk_0x24;
    unsigned char m_unk_0x25;
    unsigned int m_unk_0x3C;
    unsigned int m_unk_0x64;
    unsigned int m_unk_0x6C;
    int m_unk_0x74;
    void* m_unk_0x78;
    unsigned int m_unk_0xB4;
    unsigned char m_unk_0xB9;
    unsigned int m_unk_0xBC;

    void setPlaybackStream(io::IStream* stream);
    void setRecordStream(io::IStream* stream);
};

class DemoRecorder {
public:
    void stopCameraRecording();
    int m_unk_0x8;
    int m_unk_0xC;
    unsigned int m_unk_0x28;
    unsigned int m_unk_0x2C;
    void* m_unk_0x58;
    void* m_unk_0x60;
    long* m_unk_0x68;
    long* m_unk_0x70;
    char m_unk_0x79;
    unsigned char m_unk_0x7A;
    unsigned char m_unk_0x7B;
    void* m_unk_0x80;
    unsigned char m_unk_0x88;
    unsigned char m_unk_0x89;
    int m_unk_0x8C;
    unsigned int m_unk_0x90;
    unsigned int m_unk_0x94;
    void* m_unk_0x98;
    void* m_unk_0xA0;
    unsigned char m_unk_0xA8;
    unsigned int m_unk_0xAC;
    void* m_unk_0xB0;
    void* m_unk_0xB8;
    unsigned int m_unk_0xC0;
};

namespace {

void stopCameraRecording_impl(DemoRecorder* self) {
    if (self->m_unk_0x68) {
        void** vtable68 = *(void***)self->m_unk_0x68;
        ((void (*)(void*))vtable68[2])(self->m_unk_0x68);
        self->m_unk_0x68 = 0;
        if (self->m_unk_0x70) {
            void** vtable70 = *(void***)self->m_unk_0x70;
            ((void (*)(void*))vtable70[2])(self->m_unk_0x70);
            self->m_unk_0x70 = 0;
            self->m_unk_0xA8 = 0;
            self->m_unk_0x88 = 0;
            if (self->m_unk_0xA0) {
                ((DemoSpectatorCamera*)self->m_unk_0xA0)->setPlaybackStream(0);
                ((DemoSpectatorCamera*)self->m_unk_0xA0)->setRecordStream(0);
            }
        }
    }
}

}

void DemoRecorder::stopCameraRecording() {
    stopCameraRecording_impl(this);
}

} }
// REVERSED_FUNCTION: dice_hfe_DemoRecorder::stopCameraRecording (0x4f1cc0)