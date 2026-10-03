// FUNCTION: BF2 0x770cd0
namespace dice { namespace hfe { namespace ai {

extern "C" void del_4085b8(void* p);
extern "C" void base_77d8d0(void* self);

extern "C" void dtor_770cd0(void* self)
{
    void** v = (void**)((char*)self + 0x8);
    *(long* volatile*)self = (long*)0xba19f0;
    char* begin = *(char* volatile*)((char*)self + 0x8);
    char* end = (char*)v[1];
    if (end != begin) {
        do { begin = begin + 0x14; } while (end != begin);
    }
    if (__builtin_expect(v[0] != 0, 1)) del_4085b8(v[0]);
    base_77d8d0(self);
    del_4085b8(self);
}

} } }
// REVERSED_FUNCTION: dice_hfe_ai_BFGameEffector_dtor_BFGameEffector (0x770cd0)
