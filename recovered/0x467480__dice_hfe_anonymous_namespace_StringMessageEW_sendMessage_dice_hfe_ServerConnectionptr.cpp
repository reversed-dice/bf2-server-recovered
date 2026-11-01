// FUNCTION: BF2 0x467480
#include <string>

namespace dice { namespace hfe {

class ServerConnection;

struct StringMsgData {
    char pad[0x28];
    int f28;
    char pad2[4];
    int f30;
    int f34;
    int f38;
    const char* f40;
};

namespace {

class StringMessageEW {
public:
    StringMsgData* m_data;          // 0x08
    virtual void sendMessage(ServerConnection* conn);
};

typedef void (*FnSend)(void*, int, int, int, const std::string&, int, int);

void StringMessageEW::sendMessage(ServerConnection* conn)
{
    void* sink = ((void* (*)(void*))(*(void***)conn)[0x28 / 8])(conn);
    FnSend f = (FnSend)(*(void***)sink)[0];
    f(sink, m_data->f34, m_data->f38, m_data->f28, std::string(m_data->f40), m_data->f30, 0);
}

}

} }
