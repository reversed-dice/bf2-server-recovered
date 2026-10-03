// FUNCTION: BF2 0x5baa50
// 0x5baa50 RadioGLCompTemplate::getSpottedMessage
extern "C" void string_copy(void*, void*);

void* getSpottedMessage(void* dst, void* self)
{
    void* src = (char*)self + 0x38;
    string_copy(dst, src);
    return dst;
}
