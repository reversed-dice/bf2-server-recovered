// FUNCTION: BF2 0x510a80
namespace dice { namespace hfe { namespace world {

typedef void  (*FnInt)(void*, int);
typedef void  (*FnInt2)(void*, int, int);
typedef void* (*FnPtr)(void*);

class ControlPoint {
public:
    void reset();
    void updateFlagPosition();
private:
    char  _pad0[0x248];
    void* m_owner;               // +0x248
};

void ControlPoint::reset() {
    ((FnInt)(*(void***)this)[0x338 / 8])(this, *(int*)((char*)m_owner + 0x208));
    int v = *(int*)((char*)this + 0x250);
    if (v != 0)
        *(float*)((char*)this + 0x25c) = 1.0f;
    else
        *(float*)((char*)this + 0x25c) = 0.0f;
    *(unsigned char*)((char*)this + 0x260) = (v == 0);
    *(unsigned int*)((char*)this + 0x254) = 0;
    ((FnInt2)(*(void***)this)[0x378 / 8])(this, v, 1);
    void* q = ((FnPtr)(*(void***)this)[0x140 / 8])(this);
    *(unsigned int*)((char*)this + 0x28c) = *(unsigned int*)((char*)q + 0x10);
    updateFlagPosition();
}
}}}
