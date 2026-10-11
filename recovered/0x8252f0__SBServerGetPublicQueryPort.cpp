// FUNCTION: BF2 0x8252f0
extern "C" unsigned short SBServerGetPublicQueryPort(const char* data)
{
    unsigned int v = *(const unsigned int*)(data + 4);
    unsigned short s = (unsigned short)v;
    return (unsigned short)((unsigned short)(s << 8) | (unsigned short)(s >> 8));
}
