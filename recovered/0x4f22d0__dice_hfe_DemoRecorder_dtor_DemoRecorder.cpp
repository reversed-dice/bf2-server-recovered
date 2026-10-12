// FUNCTION: BF2 0x4f22d0
#include <string>
#include <list>

namespace dice { namespace hfe { namespace io {
class PlayerInput
{
public:
    unsigned char m_pad[0x20];
};
}}}

namespace dice { namespace hfe {

class DemoConfig
{
public:
    ~DemoConfig();
private:
    unsigned char m_pad[0x50];
};

class DemoSpectatorCamera
{
public:
    ~DemoSpectatorCamera();
private:
    unsigned char m_pad[0x80];
};

class InputBlock
{
public:
    void* m_00;
    std::string m_a;
    std::string m_b;
    std::string m_c;
};

class DemoRecorder
{
public:
    void close();
    ~DemoRecorder();
private:
    unsigned char m_00[8];
    DemoConfig m_config;
    std::string m_58;
    std::string m_60;
    unsigned char m_68[0x18];
    InputBlock* m_holder;
    unsigned char m_88[0x10];
    void* m_array;
    DemoSpectatorCamera* m_camera;
    unsigned char m_a8[8];
    std::list<io::PlayerInput> m_inputs;
};

DemoRecorder::~DemoRecorder()
{
    close();
    if (m_camera != 0)
    {
        delete m_camera;
    }
    if (m_array != 0)
    {
        delete[] m_array;
    }
    delete m_holder;
}

}}
