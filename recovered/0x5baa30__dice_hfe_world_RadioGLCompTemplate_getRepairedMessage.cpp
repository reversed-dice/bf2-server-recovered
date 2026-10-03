// FUNCTION: BF2 0x5baa30
// 0x5baa30 RadioGLCompTemplate::getRepairedMessage
extern "C" void string_copy(void*, void*);

void* getRepairedMessage(void* dst, void* self)
{
    void* src = (char*)self + 0x30;
    string_copy(dst, src);
    return dst;
}
