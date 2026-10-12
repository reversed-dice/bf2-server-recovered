// FUNCTION: BF2 0x4673b0
#include <string>
namespace dice { namespace hfe {

class ServerConnection;
class Game {
public:
  void outputChatString(int targetChannel, int messageType, int a, int b,
                        std::string const& text);
};

extern void* game;
extern unsigned int IID_IGameServer;

class ServerStringMessageEW {
public:
  void sendMessage(ServerConnection* conn);
};

void ServerStringMessageEW::sendMessage(ServerConnection* conn)
{
  void* m = *(void**)((char*)this + 8);
  std::string text(*(const char**)((char*)m + 0x40));
  int a = *(int*)((char*)m + 0x2c);
  int b = *(int*)((char*)m + 0x28);
  int c = *(int*)((char*)m + 0x38);
  int d = *(int*)((char*)m + 0x34);
  Game* g = 0;
  if (game != 0) {
    void* s = ((void* (*)(void*, unsigned int))(*(void***)game)[0x18 / 8])(game, IID_IGameServer);
    if (s != 0) {
      g = (Game*)((char*)s - 0x80);
    }
  }
  g->outputChatString(d, c, b, a, text);
}

} } // namespaces
