// FUNCTION: BF2 0x4cc6a0
#include <errno.h>
namespace dice { namespace hfe {

class ISocket {
public:
    virtual void _v00(); virtual void _v08(); virtual void _v10(); virtual void _v18();
    virtual int receive(unsigned char* buf, int size);
    virtual void _v28(); virtual void _v30(); virtual void _v38();
    virtual void update();
};

class VoipServerConnection {
public:
    void Receive();
    void ExtractPacketId(unsigned char* buf, int& len, unsigned char& id);
    void HandlePacketChallengeString(unsigned char* buf, int len);
    void* _vptr0;
    ISocket* m_socket;
    unsigned char m_buffer[0x4200];
};

void VoipServerConnection::Receive()
{
    int n = m_socket->receive(m_buffer, 0x4200);
    m_socket->update();
    if (n == -1) {
        errno = 0;
        return;
    }
    if (n <= 0)
        return;
    int len = n;
    unsigned char id = 0;
    ExtractPacketId(m_buffer, len, id);
    if (id == 'h')
        HandlePacketChallengeString(m_buffer, len);
}

} }
