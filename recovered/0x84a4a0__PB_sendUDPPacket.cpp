// BF2_FLAGS: -fcrossjumping
// FUNCTION: BF2 0x84a4a0
namespace dice { namespace hfe {
extern unsigned int IID_IGameClient;
extern unsigned int IID_IGameServer;
} }

typedef void* (*QFn)(void*, unsigned int);

void PB_sendUDPPacket(void* p1, int p2, void* p3, unsigned int p4)
{
	void* client;
	void* server;

	if (*(void**)0x010c5420 == 0)
		return;
	client = ((QFn)(*(void***)*(void**)0x010c5420)[3])(*(void**)0x010c5420, dice::hfe::IID_IGameClient);
	server = ((QFn)(*(void***)*(void**)0x010c5420)[3])(*(void**)0x010c5420, dice::hfe::IID_IGameServer);
	int noServer = (server == 0);
	int noClient = (client == 0);
	if (noClient && noServer)
		return;
	if (client != 0)
		((void (*)(void*, void*, unsigned short, void*, unsigned int))(*(void***)client)[31])(client, p1, (unsigned short)p2, p3, p4);
	else if (server != 0)
		((void (*)(void*, void*, unsigned short, void*, unsigned int))(*(void***)server)[36])(server, p1, (unsigned short)p2, p3, p4);
}
