// FUNCTION: BF2 0x528d60
namespace dice { namespace hfe {

extern void base_dtor_69f670(void*);
extern void operator_delete_4085b8(void*);

// SpawnPointTemplate::~SpawnPointTemplate() deleting-destructor body (D0Ev).
void SpawnPointTemplate_dtor_D0(void* p) {
    *reinterpret_cast<void**>(p) = reinterpret_cast<void*>(0xb45030);
    *reinterpret_cast<void**>((char*)p + 0x100) = reinterpret_cast<void*>(0xb45350);
    *reinterpret_cast<void**>((char*)p + 0x238) = reinterpret_cast<void*>(0xb45388);
    base_dtor_69f670(p);
    operator_delete_4085b8(p);
}

} }
// REVERSED_FUNCTION: dice_hfe_SpawnPointTemplate_dtor (0x4be3f0)
