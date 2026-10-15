// BF2_FLAGS: -mno-red-zone -fno-strict-aliasing
// FUNCTION: BF2 0x5183d0
#include <string>

namespace dice { namespace hfe {
extern void* objectTemplateManager;
} }

namespace dice { namespace hfe { namespace world {

struct DropVehicle {
    char _pad[0x238];
    void* m_238;
    void* m_240;
    void setVehicle(void* p);
};

typedef void* (*FnTmpl)(void*, const std::string&);
typedef void* (*FnRet)(void*);
typedef void  (*FnOne)(void*, void*);
typedef void  (*FnVoid)(void*);


struct Blk3 {
    float a, b, c;
    Blk3(float a_, float b_, float c_) { a = a_; b = b_; c = c_; }
};

typedef void (*FnVec)(void*, const Blk3&);

void DropVehicle::setVehicle(void* p) {
    m_238 = p;
    void* t = ((FnTmpl)(*(void***)dice::hfe::objectTemplateManager)[0x48 / 8])
              (dice::hfe::objectTemplateManager, std::string("supply_parachute"));
    m_240 = ((FnRet)(*(void***)t)[0xa8 / 8])(t);
    if (m_238 && m_240) {
        ((FnVoid)(*(void***)m_240)[0x40 / 8])(m_240);
        ((FnOne)(*(void***)m_238)[0x1e8 / 8])(m_238, m_240);
        ((FnVec)(*(void***)m_240)[0x1c8 / 8])(m_240, Blk3(0.0f, 2.5f, 0.0f));
    }
}

} } }
