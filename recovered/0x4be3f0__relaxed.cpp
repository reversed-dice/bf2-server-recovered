// FUNCTION: BF2 0x4be3f0
namespace dice { namespace hfe {

extern void base_dtor_69f670(void*);
extern void operator_delete_4085b8(void*);

// SpawnPointTemplate::~SpawnPointTemplate() deleting-destructor body (D0Ev).
void SpawnPointTemplate_dtor_D0(void* p) {
    *reinterpret_cast<void**>(p) = reinterpret_cast<void*>(0xb37a70);
    *reinterpret_cast<void**>((char*)p + 0x10) = reinterpret_cast<void*>(0xb37d20);
    *reinterpret_cast<void**>((char*)p + 0x68) = reinterpret_cast<void*>(0xb37d58);
    base_dtor_69f670(p);
    operator_delete_4085b8(p);
}

} }
// REVERSED_FUNCTION: dice_hfe_SpawnPointTemplate_dtor (0x4be3f0)
