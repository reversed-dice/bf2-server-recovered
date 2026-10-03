// FUNCTION: BF2 0x5ba9d0
// 0x5ba9d0 RadioGLCompTemplate::getFailMessage
extern "C" void string_copy(void*, void*);

void* getFailMessage(void* dst, void* self)
{
    void* src = (char*)self + 0x18;
    string_copy(dst, src);
    return dst;
}
