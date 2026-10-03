// FUNCTION: BF2 0x748b90
namespace dice { namespace hfe {
struct IPA { void* m_0; };
bool isPathAbsolute_0x748b90(IPA* self) {
    void* p = self->m_0;
    if (*(void**)((char*)p - 0x18) && *(char*)p == '/')
        return 1;
    return 0;
}
} }
