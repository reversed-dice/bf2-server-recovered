// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x599970

namespace dice { namespace hfe { namespace world {

class EmitterTemplate;
class SimpleObjectTemplate;

class Object {
public:
    void updateFlags(unsigned int index, unsigned int value);
};

class ObjectTemplate {
public:
    static bool getIsPreCaching();
};

class SimpleObject : public Object {
public:
    SimpleObject(SimpleObjectTemplate const* t);
};

class Emitter : public SimpleObject {
public:
    Emitter(EmitterTemplate const* t);
};

Emitter::Emitter(EmitterTemplate const* t)
    : SimpleObject(reinterpret_cast<SimpleObjectTemplate const*>(t))
{
    char* p = reinterpret_cast<char*>(this);
    *(float*)(p + 0x238) = -1.0f;
    *(float*)(p + 0x244) = 0.0f;
    *(float*)(p + 0x248) = 0.0f;
    *(void**)(p + 0x000) = (void*)0xb5fbb0;
    *(void**)(p + 0x100) = (void*)0xb5fec0;
    *(long*)(p + 0x230) = 0;
    float* q = reinterpret_cast<float*>(p + 0x24c);
    q[0] = 0.0f;
    q[1] = 0.0f;
    q[2] = 0.0f;
    *(int*)(p + 0x258) = 0;
    *(float*)(p + 0x25c) = 300.0f;
    *(bool*)(p + 0x260) = false;
    *(float*)(p + 0x264) = -1.0f;
    updateFlags(1, 0);
    if (ObjectTemplate::getIsPreCaching())
        ((void (*)(void*))(*(void***)t)[27])((void*)t);
}

// REVERSED_FUNCTION: dice_hfe_world_Emitter_Emitter_dice_hfe_world_EmitterTemplate_constptr (0x599970)
}}}
