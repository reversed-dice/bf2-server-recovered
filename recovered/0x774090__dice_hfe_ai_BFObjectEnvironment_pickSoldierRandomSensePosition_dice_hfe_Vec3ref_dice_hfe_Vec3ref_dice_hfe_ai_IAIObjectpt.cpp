// FUNCTION: BF2 0x774090
namespace dice { namespace hfe {
class Vec3 { public: float x; float y; float z; };
namespace ai {
class IAIObject;
class BFObjectEnvironment {
public:
    bool pickSoldierRandomSensePosition(Vec3& a, Vec3& b, IAIObject* obj, unsigned int& c) const;
};
} } }

namespace dice { namespace hfe { namespace ai {

bool BFObjectEnvironment::pickSoldierRandomSensePosition(Vec3& a, Vec3& b, IAIObject* obj, unsigned int& c) const {
    void* p = ((void* (*)(void*))(*(void***)obj)[0x40 / 8])(obj);
    if (p != 0) {
        if (((bool (*)(void*, int))(*(void***)obj)[0x148 / 8])(obj, 0x15)) {
            void* p2 = ((void* (*)(void*))(*(void***)obj)[0x40 / 8])(obj);
            void* inner = *(void**)((char*)p2 + 0x28);
            void* t = ((void* (*)(void*, int))(*(void***)inner)[0xa0 / 8])(inner, *(int*)0x00c7d03c);
            if (t != 0) {
                void* q = ((void* (*)(void*))(*(void***)p2)[0x348 / 8])(p2);
                void* r = *(void**)((char*)q + 0x18);
                void* s = *(void**)((char*)r + 0x28);
                void* obj2 = 0;
                if (s != 0) {
                    obj2 = ((void* (*)(void*, int))(*(void***)s)[0x18 / 8])(s, *(int*)0x00c7d110);
                }
                unsigned* av = (unsigned*)&a;
                unsigned* v = (unsigned*)((void* (*)(void*))(*(void***)obj2)[0xd8 / 8])(obj2);
                unsigned int a2 = v[2];
                unsigned int a1 = v[1];
                unsigned int a0 = v[0];
                av[0] = a0;
                av[1] = a1;
                av[2] = a2;
                unsigned* bv = (unsigned*)&b;
                unsigned* w = (unsigned*)((void* (*)(void*))(*(void***)obj2)[0x1c0 / 8])(obj2);
                unsigned int b2 = w[2];
                unsigned int b1 = w[1];
                unsigned int b0 = w[0];
                bv[0] = b0;
                bv[1] = b1;
                bv[2] = b2;
                return true;
            }
        }
    }
    return false;
}
} } }
