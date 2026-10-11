// FUNCTION: BF2 0x825350
extern "C" unsigned short SBServerGetPrivateQueryPort(const char* data)
{
    unsigned int v = *(const unsigned int*)(data + 0xc);
    unsigned short s = (unsigned short)v;
    return (unsigned short)((unsigned short)(s << 8) | (unsigned short)(s >> 8));
}
