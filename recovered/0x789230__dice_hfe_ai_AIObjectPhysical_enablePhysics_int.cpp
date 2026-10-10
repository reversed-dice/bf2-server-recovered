// FUNCTION: BF2 0x789230
// Target: 0x789230 dice::hfe::ai::AIObjectPhysical::enablePhysics(int)
// Compiler: gcc-4.0
// Flags: -O2

namespace dice { namespace hfe {
namespace world {
class IObject;
}
void resetPhysics(dice::hfe::world::IObject*, bool);

namespace ai {

class AIObjectPhysical {
public:
    virtual ~AIObjectPhysical();
    virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5();
    virtual void d6(); virtual void d7(); virtual void d8(); virtual void d9();
    virtual void d10(); virtual void d11(); virtual void d12(); virtual void d13();
    virtual void d14(); virtual void d15(); virtual void d16(); virtual void d17();
    virtual void d18(); virtual void d19(); virtual void d20(); virtual void d21();
    virtual void d22(); virtual void d23(); virtual void d24(); virtual void d25();
    virtual void d26(); virtual void d27(); virtual void d28(); virtual void d29();
    virtual void d30();
    virtual bool hasPhysicsEnabled();

    void* m_sub1;
    char _pad[0x10];
    void* m_sub4;

    bool enablePhysics(int mode);
};

bool AIObjectPhysical::enablePhysics(int mode) {
    int curMode = ((int (*)(void*))(*(void***)m_sub1)[0x258 / 8])(m_sub1);
    if (curMode == mode) {
        if (!hasPhysicsEnabled()) {
            ((void (*)(void*, int))(*(void***)m_sub4)[0x30 / 8])(m_sub4, 1);
            void* obj = ((void* (*)(void*))(*(void***)m_sub4)[0x58 / 8])(m_sub4);
            void* cont = *(void**)((char*)obj + 0x90);
            ((void (*)(void*, int))(*(void***)cont)[0x30 / 8])(cont, 1);
            dice::hfe::world::IObject* iobj = ((dice::hfe::world::IObject* (*)(void*))(*(void***)m_sub1)[0x40 / 8])(m_sub1);
            dice::hfe::resetPhysics(iobj, true);
        }
        return true;
    }
    return false;
}

} } }
