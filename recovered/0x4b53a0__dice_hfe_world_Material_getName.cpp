// FUNCTION: BF2 0x4b53a0
// 0x4b53a0 Material::getName
extern "C" void string_copy(void*, void*);

void* getName(void* dst, void* self)
{
    void* src = (char*)self + 8;
    string_copy(dst, src);
    return dst;
}
