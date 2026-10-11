// FUNCTION: BF2 0x83c710
typedef unsigned int uint32;

struct MD5_CTX {
    uint32 buf[4];
    uint32 bits[2];
    unsigned char in[64];
};

extern void Encode(unsigned char*, uint32*, unsigned int);
extern void MD5Update(MD5_CTX*, unsigned char const*, unsigned int);
extern void MD5_memset(void*, int, unsigned int);
extern unsigned char PADDING[64];

void MD5Final(unsigned char* digest, MD5_CTX* ctx)
{
    unsigned char bits[8];
    unsigned int index, padLen;

    Encode(bits, ctx->bits, 8);
    index = (unsigned int)((ctx->bits[0] >> 3) & 0x3f);
    padLen = (index < 56) ? (56 - index) : (120 - index);
    MD5Update(ctx, PADDING, padLen);
    MD5Update(ctx, bits, 8);
    Encode(digest, ctx->buf, 16);
    MD5_memset(ctx, 0, sizeof(MD5_CTX));
}
