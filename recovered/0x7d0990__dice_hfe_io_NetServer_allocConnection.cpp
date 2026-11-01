// FUNCTION: BF2 0x7d0990
namespace dice { namespace hfe {
class Mutex {
public:
	void lock();
	void unlock();
};
namespace io {
class SWConnection {
public:
	void reset();
};
class NetServer {
public:
	char pad[0x5a0];
	Mutex m_mutex;
	SWConnection** m_connections;
	SWConnection* allocConnection();
};
SWConnection* NetServer::allocConnection()
{
	m_mutex.lock();
	SWConnection* conn = 0;
	for (int i = 0; i < 64; i++) {
		conn = m_connections[i];
		if (conn != 0) {
			m_connections[i] = 0;
			conn->reset();
			break;
		}
	}
	m_mutex.unlock();
	return conn;
}
} } }
