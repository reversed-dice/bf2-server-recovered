// FUNCTION: BF2 0x5369f0
namespace dice { namespace hfe { namespace world {
struct CSTLU { unsigned char _pad[0x250]; void* m_250; unsigned char _pad2[0x478 - 0x258]; char m_478; };
bool checkSpecialToggleLastUpdate_0x5369f0(CSTLU* self, int arg2) {
    if (self->m_478 && arg2 == *(int*)((char*)self->m_250 + 0x3b8))
        return 1;
    return 0;
}
} } }
