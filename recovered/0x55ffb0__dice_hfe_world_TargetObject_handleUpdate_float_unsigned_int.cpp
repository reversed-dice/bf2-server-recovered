// FUNCTION: BF2 0x55ffb0
namespace dice {
namespace hfe {
namespace world {

class WorldPref {
public:
    static unsigned int getTickCount();
};

class TargetObject {
public:
    char __pad_0x000[0x238];
    void* m_238;
    char __pad_0x240[5];
    char m_245;
    char __pad_0x246[2];
    int m_248;

    void handleUpdate(float dt, unsigned int mask);
    void setTargetActive(bool active, bool force);
};

void TargetObject::handleUpdate(float dt, unsigned int mask) {
    void* p = *(void**)((char*)this + 0x238);
    float f = *(float*)((char*)p + 0x1f8);
    if (f == -1.0f)
        return;
    if (*(char*)((char*)this + 0x245) == 0)
        return;
    if (!(f > 0.0f))
        return;
    if ((unsigned int)(*(int*)((char*)this + 0x248) + *(int*)((char*)p + 0x1fc)) < WorldPref::getTickCount())
        setTargetActive(false, true);
}

}
}
}
