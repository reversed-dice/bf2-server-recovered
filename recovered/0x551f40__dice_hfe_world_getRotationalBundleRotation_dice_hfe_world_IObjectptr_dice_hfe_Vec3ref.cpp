// FUNCTION: BF2 0x551f40
namespace dice { namespace hfe { namespace world {

struct Vec3 { float x, y, z; };
class IObject;

extern int CID_PlayerControlObjectTemplate;

void accumulateRotationalBundleRotations(IObject*, Vec3&);

typedef int (*GetCIDFn)(void*);
typedef IObject* (*GetChildFn)(void*);

void getRotationalBundleRotation(IObject* obj, Vec3& out) {
    if (obj == 0) return;
    int cid = CID_PlayerControlObjectTemplate;
    IObject* cur = obj;
    while (cur != 0) {
        void* t = *(void**)((char*)cur + 0x28);
        GetCIDFn fn = *(GetCIDFn*)((char*)(*(void**)t) + 0x20);
        if (fn(t) == cid) break;
        cur = *(IObject**)((char*)cur + 0x50);
    }
    if (cur == 0) return;
    accumulateRotationalBundleRotations(cur, out);
    GetChildFn child = *(GetChildFn*)((char*)(*(void**)cur) + 0x1e0);
    IObject* r = child(cur);
    accumulateRotationalBundleRotations(r, out);
}

} } }
