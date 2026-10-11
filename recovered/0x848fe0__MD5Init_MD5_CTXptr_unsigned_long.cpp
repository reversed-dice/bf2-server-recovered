// FUNCTION: BF2 0x848fe0
struct MD5_CTX { unsigned int i[2]; unsigned int buf[4]; unsigned char in[64]; };

void MD5Init(MD5_CTX* mdContext, unsigned long count)
{
    mdContext->i[1] = 0;
    mdContext->i[0] = 0;
    mdContext->buf[0] = 0x67452301 + (count * 11);
    mdContext->buf[1] = 0xefcdab89 + (count * 71);
    mdContext->buf[2] = 0x98badcfe + (count * 37);
    mdContext->buf[3] = 0x10325476 + (count * 97);
}
