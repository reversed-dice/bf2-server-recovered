// BF2_FLAGS: -mtune=nocona
// FUNCTION: BF2 0x444780
namespace dice { namespace hfe { namespace io {

struct IdHolder {
	char pad[8];
	unsigned short m_id;
};
struct Holder2 {
	IdHolder* m_p;
};
struct Holder1 {
	Holder2* m_p;
};
struct NetworkableDescriptor {
	char pad[0x10];
	Holder1* m_p;
};

} } }

namespace dice { namespace hfe {

struct GhostObject {
	int m_00;
	int m_state;      // 0x4
	char pad[0x44];
	float m_timeout;  // 0x4c
};

class GhostManager {
public:
	GhostObject* findGhostObjectInHash(unsigned short id);
	void removeGhostObject(io::NetworkableDescriptor* descriptor);
};

GhostObject* GhostManager::findGhostObjectInHash(unsigned short id)
{
	(void)id;
	return 0;
}

void GhostManager::removeGhostObject(io::NetworkableDescriptor* descriptor)
{
	GhostObject* ghost = findGhostObjectInHash(descriptor->m_p->m_p->m_p->m_id);
	if (ghost) {
		ghost->m_state = 3;
		ghost->m_timeout = 10000.0f;
	}
}

} }
