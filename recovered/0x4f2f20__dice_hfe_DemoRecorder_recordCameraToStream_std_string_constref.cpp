// FUNCTION: BF2 0x4f2f20
#include <string>
#include <iostream>

extern char DAT_00bb25f1;

namespace dice { namespace hfe {

enum DebugType { DebugType_6 = 6 };

class Debug {
    char _pad[0x20];
    char _stream[0x160];
public:
    Debug(DebugType type, std::string const& file, int line, std::string const& func = "");
    ~Debug();
    template <typename T>
    std::ostream& operator<<(T const& val) {
        return *(std::ostream*)(_stream) << val;
    }
};

namespace io { class IStream; }

class DemoSpectatorCamera {
public:
    void setPlaybackStream(io::IStream* s);
    void setRecordStream(io::IStream* s);
};

void* openCompressedDemoFile(std::string const& name, bool a, bool b);

class DemoRecorder {
public:
    bool recordCameraToStream(std::string const& name);
private:
    char _p[0x70];
    io::IStream* m_70;
    char _p2[0x2];
    unsigned char m_7a;
    unsigned char m_7b;
    char _p3[0x24];
    DemoSpectatorCamera* m_a0;
};

bool DemoRecorder::recordCameraToStream(std::string const& name)
{
    m_70 = (io::IStream*)openCompressedDemoFile(name, true, false);
    if (m_70 != 0) {
        m_7a = 1;
        m_7b = 0;
        m_a0->setPlaybackStream(0);
        m_a0->setRecordStream(m_70);
        return true;
    }
    dice::hfe::Debug(dice::hfe::DebugType(6), std::string("Game/DemoRecorder/DemoRecorder.cpp"), 0x163,
                     std::string(&DAT_00bb25f1))
        << "Failed to open camera file " << name << " for writing. It probably exist already.";
    return false;
}

} }
