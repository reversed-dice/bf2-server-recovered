// FUNCTION: BF2 0x73e9b0
namespace dice { namespace hfe {

void MD5Decode(unsigned int* output, const unsigned char* input, unsigned int len)
{
    unsigned int i, j;
    for (i = 0, j = 0; j < len; i++, j += 4)
        output[i] = ((unsigned int)input[j]) | (((unsigned int)input[j + 1]) << 8) |
                    (((unsigned int)input[j + 2]) << 16) | (((unsigned int)input[j + 3]) << 24);
}

} }
