// FUNCTION: BF2 0x539db0
namespace dice { namespace hfe { namespace world {

extern unsigned int IID_IPlayerControlObject;

class PlayerControlObject {
public:
    void disableWeapons();
    void reset();
};

void PlayerControlObject::reset()
{
    char* self = (char*)this;
    if (*(void**)(self + 0x50) == 0) {
        void* gl = *(void**)0x10b8c08;
        ((void (*)(void*, void*))(*(void***)gl)[0x67])(gl, this);
    }
    disableWeapons();
    if (*(int*)(self + 0x260) == 0) {
        void* head = *(void**)(self + 0x50);
        if (head != 0) {
            void* node = head;
            do {
                void* r = ((void* (*)(void*, unsigned int))(*(void***)node)[3])(node, IID_IPlayerControlObject);
                if (r != 0) {
                    ((void (*)(void*))(*(void***)r)[8])(r);
                    break;
                }
                node = *(void**)((char*)node + 0x50);
            } while (node != 0);
        }
    }
    void* p = *(void**)(self + 0x410);
    if (p != 0) {
        ((void (*)(void*))(*(void***)p)[3])(p);
    }
    *(int*)(self + 0x3ec) = -1;
    *(float*)(self + 0x3e0) = -1.0f;
    *(float*)(self + 0x3e4) = -1.0f;
    *(char*)(self + 0x3f0) = 0;
    *(char*)(self + 0x5f9) = 0;
    *(char*)(self + 0x4c0) = 0;
    *(char*)(self + 0x5fa) = 1;
    *(char*)(self + 0x4c1) = 0;
    *(int*)(self + 0x4c4) = 0xf;
    *(float*)(self + 0x258) = -1.0f;
    *(float*)(self + 0x3e8) = -1.0f;
    *(int*)(self + 0x4d8) = 0;
    *(char*)(self + 0x25c) = 0;
    *(int*)(self + 0x3d8) = 0;
    *(int*)(self + 0x3dc) = 0;
    *(char*)(self + 0x5f8) = 0;
    int*& rc = *(int**)(self + 0x270);
    if (rc != 0) {
        if (--*rc == 0) {
            operator delete(rc);
        }
    }
    rc = 0;
}

}}}
