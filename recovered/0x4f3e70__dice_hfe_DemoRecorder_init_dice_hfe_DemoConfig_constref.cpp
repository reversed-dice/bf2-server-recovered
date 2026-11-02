// FUNCTION: BF2 0x4f3e70
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <ostream>

extern char DAT_00bb25f1;

namespace dice { namespace hfe {

struct Debug {
    char _pad[0x20];
    std::ostream os;
    char _tail[0x50];
    Debug(int type, const std::string& file, int line, const std::string& tag);
    ~Debug();
};

class DemoHeader
{
public:
    DemoHeader();
private:
    unsigned char m_pad[0x28];
};

class DemoConfig
{
public:
    enum DemoMode
    {
        DEMO_MODE_PLAYBACK = 0,
        DEMO_MODE_RECORD = 1,
        DEMO_MODE_RENDER = 2,
        DEMO_MODE_RENDERSOUND = 3
    };

    int m_mode;
    int m_subMode;
    std::string m_path1;
    std::string m_path2;
    std::string m_path3;
    int m_20;
    int m_24;
    int m_28;
    int m_2c;
    bool m_30;
    bool m_31;
    int m_34;
    bool m_38;
    bool m_39;
    int m_3c;
    int m_40;
    bool m_44;
    int m_48;

    bool sanityCheck() const;
};

struct DemoRecorder
{
    bool m_started;
    char _p0[7];
    DemoConfig m_config;
    void* m_58;
    void* m_60;
    void* m_68;
    void* m_70;
    bool m_78;
    bool m_79;
    bool m_7a;
    bool m_7b;
    DemoHeader* m_header;
    bool m_88;
    bool m_89;
    int m_8c;
    int m_90;
    int m_94;
    void* m_98;
    void* m_a0;
    bool m_a8;
    int m_ac;
    char _p1[0x10];
    int m_c0;
    bool m_c4;
    bool m_c5;

    void init(const DemoConfig& config);
    bool initPlayback();
    bool initRecord();
    bool initRender();
    bool initRenderSound();
};

void DemoRecorder::init(const DemoConfig& config)
{
    m_c4 = false;
    m_c5 = false;
    m_started = false;

    m_config = config;

    m_68 = 0;
    m_70 = 0;
    m_78 = false;
    m_79 = false;
    m_7a = false;
    m_7b = false;

    m_header = new DemoHeader();

    m_88 = false;
    m_89 = false;
    m_8c = 0;
    m_90 = 0;
    m_94 = 0x40000;
    m_98 = 0;
    m_a0 = 0;
    m_a8 = false;
    m_ac = 0;
    m_c0 = 0;
    m_c4 = false;

    if (!m_config.sanityCheck())
    {
        Debug(6, std::string("Game/DemoRecorder/DemoRecorder.cpp"), 123,
              std::string(&DAT_00bb25f1)).os << "Invalid demo configuration.";
        return;
    }

    switch (m_config.m_mode)
    {
    case DemoConfig::DEMO_MODE_PLAYBACK:
        m_started = initPlayback();
        break;
    case DemoConfig::DEMO_MODE_RECORD:
        m_started = initRecord();
        break;
    case DemoConfig::DEMO_MODE_RENDER:
        m_started = initRender();
        break;
    case DemoConfig::DEMO_MODE_RENDERSOUND:
        m_started = initRenderSound();
        break;
    default:
        Debug(6, std::string("Game/DemoRecorder/DemoRecorder.cpp"), 133,
              std::string(&DAT_00bb25f1)).os << "Invalid demo mode" << (int)m_config.m_mode;
        break;
    }
}

} }
