// FUNCTION: BF2 0x788510
// BF2_FLAGS: -fno-strict-aliasing
namespace dice { namespace hfe { namespace ai {
int pcoIdToPositionSelect(int);
void traverseObjects(void* self, void* obj);
} } }

extern unsigned int IID_IPlayerControlObject;

typedef void* (*V0)(void*);
typedef void* (*V1)(void*, void*);
typedef void* (*VQ)(void*, unsigned int);
typedef int (*VI)(void*);
typedef unsigned char (*VB)(void*);

struct Unit {
    char pad0[0x10];
    int* m_10;
};

void initFromObject(void* self, void* obj)
{
    if (*(char*)((char*)self + 0x24) != 0)
        return;

    *(int*)((char*)self + 0x8) = 0;

    void* settings = *(void**)0x10ade00;
    int n = ((VI)(*(void**)((char*)*(void**)settings + 0x68)))(settings);

    if (n > 0) {
        int i = 0;
        long off = 0;
        Unit* s = (Unit*)self;
        do {
            ++i;
            *(int*)((char*)s->m_10 + off) = 0;
            off += 4;
        } while (n != i);
    }

    dice::hfe::ai::traverseObjects(self, obj);

    void* e = *(void**)((char*)obj + 0x68);
    if (!((VB)(*(void**)((char*)*(void**)e + 0x1f0)))(e))
        return;

    void* pco = ((VQ)(*(void**)((char*)*(void**)obj + 0x18)))(obj, IID_IPlayerControlObject);
    int id = ((VI)(*(void**)((char*)*(void**)pco + 0x60)))(pco);
    *(int*)((char*)self + 0x30) = dice::hfe::ai::pcoIdToPositionSelect(id);

    int local;
    for (void* it = ((V1)(*(void**)((char*)*(void**)e + 0x238)))(e, &local); it != 0;
         it = ((V1)(*(void**)((char*)*(void**)e + 0x228)))(e, &local)) {
        void* t = ((V0)(*(void**)((char*)*(void**)it + 0x40)))(it);
        void* t2 = ((VQ)(*(void**)((char*)*(void**)t + 0x18)))(t, IID_IPlayerControlObject);
        int id2 = ((VI)(*(void**)((char*)*(void**)t2 + 0x60)))(t2);
        int pos = dice::hfe::ai::pcoIdToPositionSelect(id2);
        void* u = ((V0)(*(void**)((char*)*(void**)it + 0x130)))(it);
        *(int*)((char*)*(void**)((char*)u + 0x10) + 0x30) = pos;
    }
}
