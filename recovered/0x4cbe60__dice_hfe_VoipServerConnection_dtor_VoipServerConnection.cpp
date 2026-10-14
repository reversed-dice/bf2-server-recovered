// FUNCTION: BF2 0x4cbe60
#include <fstream>
#include <string>

namespace dice { namespace hfe {

class VoipServerInternal {
public:
    void Stop();
    ~VoipServerInternal();
};

class ISocket {
public:
    virtual ~ISocket();
    virtual void update();
};

class VoipServerConnection {
public:
    virtual ~VoipServerConnection();
    ISocket* m_socket;
    unsigned char _gap[0x430d];
    bool m_flag;
    char _gap2[0xe9];
    std::string m_str;
    char _gap3[0x10];
    VoipServerInternal* m_internal;
    char _gap4[8];
    std::ofstream* m_log;
};

} }

dice::hfe::VoipServerConnection::~VoipServerConnection()
{
    if (m_flag == false)
    {
        if (m_internal)
        {
            m_internal->Stop();
            delete m_internal;
        }
        m_internal = 0;
    }
    if (m_log)
    {
        m_log->close();
        delete m_log;
        m_log = 0;
    }
    if (m_socket)
    {
        m_socket->update();
        delete m_socket;
        m_socket = 0;
    }
}
