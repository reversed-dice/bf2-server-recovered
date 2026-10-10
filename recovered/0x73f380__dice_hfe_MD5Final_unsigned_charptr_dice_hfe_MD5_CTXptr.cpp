// FUNCTION: BF2 0x73f380
// BF2_FLAGS: -fno-strict-aliasing

namespace dice {
namespace hfe {

struct MD5_CTX {
    unsigned int state[4];
    unsigned int count[2];
    unsigned char buffer[64];
};

extern unsigned char PADDING[64];

void MD5Encode(unsigned char* output, unsigned int* input, unsigned int len);
void MD5Update(MD5_CTX* context, unsigned char const* input, unsigned int inputLen);

void MD5Final(unsigned char* digest, MD5_CTX* context) {
    unsigned char bits[8];
    unsigned int index, padLen;

    MD5Encode(bits, context->count, 8);

    index = (unsigned int)((context->count[0] >> 3) & 0x3f);
    padLen = (index < 56) ? (56 - index) : (120 - index);
    MD5Update(context, PADDING, padLen);

    MD5Update(context, bits, 8);

    MD5Encode(digest, context->state, 16);
}

}
}
