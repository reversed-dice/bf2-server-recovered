// FUNCTION: BF2 0x5baa10
// 0x5baa10 RadioGLCompTemplate::getDestroyedMessage
extern "C" void string_copy(void*, void*);

void* getDestroyedMessage(void* dst, void* self)
{
    void* src = (char*)self + 0x28;
    string_copy(dst, src);
    return dst;
}
