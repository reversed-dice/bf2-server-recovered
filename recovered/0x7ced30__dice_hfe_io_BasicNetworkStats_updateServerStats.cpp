// FUNCTION: BF2 0x7ced30
// BF2_FLAGS: -fcrossjumping -fno-strict-aliasing
#include <vector>

namespace dice { namespace hfe { namespace io {

typedef void* (*FnQuery)(void*, int);
typedef void* (*FnHead)(void*);
typedef char  (*FnBool)(void*);
typedef int   (*FnInt)(void*);
typedef char  (*FnPos)(void*, int, float*);

class BasicNetworkStats
{
public:
	BasicNetworkStats();
	virtual ~BasicNetworkStats();
	virtual void update();

private:
	std::vector<float> m_v1;    // +0x08
	std::vector<float> m_v2;    // +0x20
	std::vector<float> m_v3;    // +0x38
	std::vector<float> m_v4;    // +0x50
	float m_arr1[3];            // +0x68
	float m_arr2[3];            // +0x74
	float m_x;                  // +0x80
	float m_y;                  // +0x84
	float m_z;                  // +0x88
	float m_w;                  // +0x8c
	float m_a;                  // +0x90
	float m_b;                  // +0x94
	int   m_n;                  // +0x98

public:
	void updateServerStats();
};

struct Node
{
	Node* m_next;
	void* m_unk8;
	void* m_player;             // +0x10
};

extern "C" void* game;                  // 0x10c5420
extern "C" int iid_gameServer;          // 0xc76024
extern "C" void* playerManager;         // 0x112ee38

void BasicNetworkStats::updateServerStats()
{
	if (game == 0)
		return;
	void* gs = ((FnQuery)(*(void***)game)[0x18 / 8])(game, iid_gameServer);
	if (gs == 0)
		return;

	void* pm = playerManager;
	Node* head = (Node*)((FnHead)(*(void***)pm)[0x78 / 8])(pm);

	m_n = 0;
	m_a = 0.0f;
	m_b = 0.0f;
	m_y = 0.0f;
	m_w = 0.0f;
	m_x = 0.0f;
	m_z = 0.0f;

	Node* end = head;
	Node* n = end->m_next;
	while (n != end)
	{
		void* p = n->m_player;
		if (((FnBool)(*(void***)p)[0xb8 / 8])(p) == 0)
			break;
		float pos[8];
		if (((FnPos)(*(void***)gs)[0x88 / 8])(gs, ((FnInt)(*(void***)p)[0xa8 / 8])(p), pos) != 0)
		{
			m_z += pos[2];
			m_w += pos[3];
			m_x += pos[0];
			m_y += pos[1];
		}
		n = n->m_next;
	}

	float sum1 = 0.0f;
	float sum2 = 0.0f;
	for (int i = 0; i < 3; i++)
	{
		sum1 += m_v3[i];
		sum2 += m_v4[i];
	}

	for (int i = 0; i < 3; i++)
	{
		if (sum1 > 0.0f)
			m_arr1[i] = m_v3[i] * 100.0f / sum1;
		if (sum2 > 0.0f)
			m_arr2[i] = m_v4[i] * 100.0f / sum2;
		m_v3[i] = 0.0f;
		m_v4[i] = 0.0f;
	}
}

} } }
