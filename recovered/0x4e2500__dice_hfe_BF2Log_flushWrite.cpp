// FUNCTION: BF2 0x4e2500
namespace dice { namespace hfe {

namespace io {
class Stream {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void flush();   // +0x58
};

class File {
public:
    Stream* m_stream;
    bool isOpen();
    Stream* getStream();
};
}

class BF2Log {
public:
    virtual ~BF2Log();
    virtual void initDebugCallback();

private:
    char pad_0x8[0x28];
    io::File* m_logFile;    // +0x30
    io::File* m_errorFile;  // +0x38

public:
    void flushWrite();
};

void BF2Log::flushWrite() {
    if (m_logFile && m_logFile->isOpen()) {
        m_logFile->getStream()->flush();
    }
    if (m_errorFile && m_errorFile->isOpen()) {
        m_errorFile->getStream()->flush();
    }
}

} }
// REVERSED_FUNCTION: dice_hfe_BF2Log_flushWrite (0x4e2500)
