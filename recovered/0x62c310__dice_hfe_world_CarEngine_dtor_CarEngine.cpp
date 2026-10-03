// FUNCTION: BF2 0x62c310
namespace dice { namespace hfe {

// SpawnPointTemplate::~SpawnPointTemplate() (D1Ev body).
// GCC 3.4 emits D1+D2 for any out-of-line dtor; the target binary has a single
// dtor function at 0x4be3d0, so the body is written as a plain function.
extern void base_dtor_69f670(void*);

void SpawnPointTemplate_dtor_D1(void* p) {
    *reinterpret_cast<void**>(p) = reinterpret_cast<void*>(0xb80cd0);
    *reinterpret_cast<void**>((char*)p + 0x100) = reinterpret_cast<void*>(0xb81050);
    *reinterpret_cast<void**>((char*)p + 0x238) = reinterpret_cast<void*>(0xb81088);
    base_dtor_69f670(p);
}

} }
// REVERSED_FUNCTION: dice_hfe_SpawnPointTemplate_dtor (0x4be3d0)
