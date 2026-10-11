// FUNCTION: BF2 0x8400e0
typedef unsigned int uint32_t;
typedef unsigned char uint8_t;
typedef short int_least16_t;

#define SHA1HashSize 20
#define SHA1CircularShift(bits,word) (((word) << (bits)) | ((word) >> (32-(bits))))

typedef struct SHA1Context
{
    uint32_t Intermediate_Hash[SHA1HashSize/4];
    uint32_t Length_Low;
    uint32_t Length_High;
    int_least16_t Message_Block_Index;
    uint8_t Message_Block[64];
    int Computed;
    int Corrupted;
} SHA1Context;

void SHA1ProcessMessageBlock(SHA1Context *context)
{
    const uint32_t K[] =    {
                            0x5A827999,
                            0x6ED9EBA1,
                            0x8F1BBCDC,
                            0xCA62C1D6
                            };
    int           t;
    uint32_t      temp;
    uint32_t      W[80];
    uint32_t      A, B, C, D, E;

    for(t = 0; t < 16; t++)
    {
        W[t] = (uint32_t)(context->Message_Block[t * 4] << 24);
        W[t] |= (uint32_t)(context->Message_Block[t * 4 + 1] << 16);
        W[t] |= (uint32_t)(context->Message_Block[t * 4 + 2] << 8);
        W[t] |= (uint32_t)(context->Message_Block[t * 4 + 3]);
    }

    for(t = 16; t < 80; t++)
    {
       W[t] = SHA1CircularShift(1,W[t-3] ^ W[t-8] ^ W[t-14] ^ W[t-16]);
    }

    A = context->Intermediate_Hash[0];
    B = context->Intermediate_Hash[1];
    C = context->Intermediate_Hash[2];
    D = context->Intermediate_Hash[3];
    E = context->Intermediate_Hash[4];

    for(t = 0; t < 20; t++)
    {
        temp =  SHA1CircularShift(5,A) +
                ((B & C) | ((~B) & D)) + E + W[t] + K[0];
        E = D;
        D = C;
        C = SHA1CircularShift(30,B);

        B = A;
        A = temp;
    }

    for(t = 20; t < 40; t++)
    {
        temp = SHA1CircularShift(5,A) + (B ^ C ^ D) + E + W[t] + K[1];
        E = D;
        D = C;
        C = SHA1CircularShift(30,B);
        B = A;
        A = temp;
    }

    for(t = 40; t < 60; t++)
    {
        temp = SHA1CircularShift(5,A) +
               ((B & C) | (B & D) | (C & D)) + E + W[t] + K[2];
        E = D;
        D = C;
        C = SHA1CircularShift(30,B);
        B = A;
        A = temp;
    }

    for(t = 60; t < 80; t++)
    {
        temp = SHA1CircularShift(5,A) + (B ^ C ^ D) + E + W[t] + K[3];
        E = D;
        D = C;
        C = SHA1CircularShift(30,B);
        B = A;
        A = temp;
    }

    context->Intermediate_Hash[0] += A;
    context->Intermediate_Hash[1] += B;
    context->Intermediate_Hash[2] += C;
    context->Intermediate_Hash[3] += D;
    context->Intermediate_Hash[4] += E;
    context->Message_Block_Index = 0;
}
