// FUNCTION: BF2 0x4f2ac0
#include <string>

namespace dice { namespace hfe { namespace io {

class Console {
public:
    static const std::string ignoredString_;
};

class IConsole {
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
    virtual bool execute(const std::string& file, const std::string& a1, const std::string& a2,
                         const std::string& a3, const std::string& a4, const std::string& a5,
                         const std::string& a6, const std::string& a7, const std::string& a8,
                         const std::string& ignored);
};

extern IConsole* mainConsole;

} } }

namespace dice { namespace hfe {

class DemoRecorder;

class DemoSpectatorCamera
{
public:
    DemoSpectatorCamera(DemoRecorder* owner);
private:
    unsigned char m_pad[0xc8];
};

class DemoRecorder
{
public:
    bool initRender();
    bool openPlaybackStream(const std::string& file);
    bool playCameraFromStream(const std::string& file);

private:
    unsigned char m_00[0x10];
    std::string m_playbackFile;                 // 0x10
    std::string m_cameraFile;                   // 0x18
    unsigned char m_20[0x80];                   // 0x20
    DemoSpectatorCamera* m_camera;              // 0xa0
    unsigned char m_a8[0x18];                   // 0xa8
    unsigned int m_renderMode;                  // 0xc0
};

bool DemoRecorder::initRender()
{
    m_camera = new DemoSpectatorCamera(this);
    m_renderMode = 1;
    if (!openPlaybackStream(m_playbackFile))
        return false;
    if (!playCameraFromStream(m_cameraFile))
        return false;
    io::mainConsole->execute("Settings/demo-playcam.con", "", "", "", "", "", "", "", "",
                             io::Console::ignoredString_);
    return true;
}

} }
