// FUNCTION: BF2 0x840080
// SHA1Reset: initialize SHA1 context
struct SHA1Context {
    unsigned int state[5];
    unsigned int count[2];
    unsigned char buffer[64];
};

bool SHA1Reset(SHA1Context* context) {
    if (context == 0) return true;
    context->count[0] = 0;
    context->count[1] = 0;
    *(unsigned short*)&context->count[2] = 0;
    context->state[0] = 0x67452301;
    context->state[1] = 0xefcdab89;
    context->state[2] = 0x98badcfe;
    context->state[3] = 0x10325476;
    context->state[4] = 0xc3d2e1f0;
    *(unsigned int*)((char*)context + 0x60) = 0;
    *(unsigned int*)((char*)context + 0x64) = 0;
    return false;
}
