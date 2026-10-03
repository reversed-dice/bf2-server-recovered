// FUNCTION: BF2 0x4f44c0
namespace dice { namespace hfe {

typedef unsigned int (*CheckFunc_t)(void*);
typedef void (*ReadFunc_t)(void*, void*, unsigned int);

class DemoRecorder {
public:
    unsigned int readNextFrameHeader();
private:
    char __pad00[0x68];
public:
    void* m_unk_0x68;
private:
    char __pad70[0x89 - 0x70];
public:
    unsigned char m_unk_0x89;
private:
    char __pad8A[0x8c - 0x8a];
public:
    unsigned int m_unk_0x8c;
    unsigned int m_unk_0x90;
    unsigned int m_unk_0x94;
};

unsigned int DemoRecorder::readNextFrameHeader() {
    if (((CheckFunc_t)((void**)*(void**)this->m_unk_0x68)[7])(this->m_unk_0x68) == 0) {
        return 0;
    }
    ((ReadFunc_t)((void**)*(void**)this->m_unk_0x68)[4])(this->m_unk_0x68, &this->m_unk_0x8c, 4);
    ((ReadFunc_t)((void**)*(void**)this->m_unk_0x68)[4])(this->m_unk_0x68, &this->m_unk_0x90, 4);
    if (this->m_unk_0x90 <= this->m_unk_0x94) {
        unsigned int checkResult = ((CheckFunc_t)((void**)*(void**)this->m_unk_0x68)[7])(this->m_unk_0x68);
        this->m_unk_0x89 = (unsigned char)(checkResult != 0);
        return (unsigned int)(checkResult != 0);
    }
    this->m_unk_0x89 = 0;
    return 0;
}
// REVERSED_FUNCTION: dice::hfe::DemoRecorder::readNextFrameHeader (0x4f44c0)
} }