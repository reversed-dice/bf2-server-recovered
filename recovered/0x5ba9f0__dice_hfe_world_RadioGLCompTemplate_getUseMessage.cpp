// FUNCTION: BF2 0x5ba9f0
// 0x5ba9f0 RadioGLCompTemplate::getUseMessage
extern "C" void string_copy(void*, void*);

void* getUseMessage(void* dst, void* self)
{
    void* src = (char*)self + 0x20;
    string_copy(dst, src);
    return dst;
}
