// FUNCTION: BF2 0x69d5b0
// BF2_FLAGS: -fno-strict-aliasing
#include <vector>

namespace dice { namespace hfe {

class Vec3
{
public:
	float x;
	float y;
	float z;
	Vec3(float _x, float _y, float _z) : x(_x), y(_y), z(_z) {}
};

class Plane3
{
public:
	Vec3 m_normal;
	float m_dist;
};

class Frustum;

namespace world {

class IObject;
class ObjectPredicator;

class QuadTreeCuller
{
public:
	struct Node;

	char m_pad0[0x30];
	std::vector<IObject*>* m_out;        // 0x30
	std::vector<IObject*>* m_out2;       // 0x38
	ObjectPredicator* m_pred;            // 0x40
	Frustum const* m_frustum;            // 0x48
	Plane3 m_planes[6];                  // 0x50
	int m_planeCount;                    // 0xb0
	char m_pad1[0xf8 - 0xb4];
	Node* m_root;                        // 0xf8
	int m_searchCount;                   // 0x100

	void getObjects(Frustum const& frustum, std::vector<IObject*>& out, std::vector<IObject*>& out2, ObjectPredicator* pred);
	void getFrustumObjects(Node* node);
	void getFrustumVisibleObjects(Node* node);
};

} } }

namespace {

int projectFrustum(dice::hfe::Plane3* planes, dice::hfe::Frustum const& frustum, dice::hfe::Vec3 const& up);

}

extern "C" int quadTreeCuller_nObjectsAdded;
extern "C" int quadTreeCuller_nObjectsCompletelyInside;

namespace dice { namespace hfe { namespace world {

void QuadTreeCuller::getObjects(Frustum const& frustum, std::vector<IObject*>& out, std::vector<IObject*>& out2, ObjectPredicator* pred)
{
	if (!m_root)
		return;

	quadTreeCuller_nObjectsAdded = 0;
	quadTreeCuller_nObjectsCompletelyInside = 0;

	++m_searchCount;

	m_out = &out;
	m_out2 = &out2;
	m_frustum = &frustum;
	m_pred = pred;

	Vec3 up(0.0f, 1.0f, 0.0f);

	m_planeCount = projectFrustum(m_planes, frustum, up);

	if (pred)
		getFrustumObjects(m_root);
	else
		getFrustumVisibleObjects(m_root);

	quadTreeCuller_nObjectsAdded += (int)m_out->size();
	quadTreeCuller_nObjectsCompletelyInside += (int)m_out2->size();
}

} } }
