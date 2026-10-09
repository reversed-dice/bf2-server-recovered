// FUNCTION: BF2 0x51ea60
namespace dice { namespace hfe { namespace world {
extern unsigned int IID_IObject;

class GrapplingHookRopeContainer {
public:
    void updateClimbAnimation();
    void handleClimber();
    void handleFrameUpdate(float dt);
};

void GrapplingHookRopeContainer::handleFrameUpdate(float dt)
{
    char* self = (char*)this;
    void* o = *(void**)(self + 0x618);
    if (((void* (*)(void*))(*(void***)o)[0x60])(o) == 0)
        ((void (*)(void*))(*(void***)self)[0x66])(self);
    *(float*)(self + 0x600) = dt;
    if (*(void**)(self + 0x610) != 0) {
        void* q = ((void* (*)(void*))(*(void***)self)[0x6f])(self);
        ((void (*)(void*, unsigned int))(*(void***)q)[3])(q, IID_IObject);
        updateClimbAnimation();
        handleClimber();
        if (*(float*)(self + 0x668) > 0.0f)
            *(float*)(self + 0x668) = *(float*)(self + 0x668) - dt;
    }
}
}}}
