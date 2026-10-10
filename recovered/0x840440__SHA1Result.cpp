// FUNCTION: BF2 0x840440
// upstream GameSpy/common/gsSHA1.c SHA1Result
#include <cstring>
#include <cstdlib>
#include <cstdio>
#define GS_ASSERT(x)
#define GSI_UNUSED(x)
#define assert(x)
#define SHA1HashSize 20
typedef short gsi_i16;
typedef gsi_i16 int_least16_t;
typedef unsigned int gsi_u32;
typedef gsi_u32 uint32_t;
typedef unsigned char gsi_u8;
typedef gsi_u8 uint8_t;
typedef struct SHA1Context { uint32_t Intermediate_Hash[SHA1HashSize/4]; uint32_t Length_Low; uint32_t Length_High; int_least16_t Message_Block_Index; uint8_t Message_Block[64]; int Computed; int Corrupted; } SHA1Context;
enum { shaSuccess = 0, shaNull, shaInputTooLong, shaStateError };
extern "C" {
void SHA1PadMessage(SHA1Context *);
}

int SHA1Result( SHA1Context *context,
                uint8_t Message_Digest[SHA1HashSize])
{
    int i;

    if (!context || !Message_Digest)
    {
        return shaNull;
    }

    if (context->Corrupted)
    {
        return context->Corrupted;
    }

    if (!context->Computed)
    {
        SHA1PadMessage(context);
        for(i=0; i<64; ++i)
        {
            /* message may be sensitive, clear it out */
            context->Message_Block[i] = 0;
        }
        context->Length_Low = 0;    /* and clear length */
        context->Length_High = 0;
        context->Computed = 1;

    }

    for(i = 0; i < SHA1HashSize; ++i)
    {
        Message_Digest[i] = (uint8_t)(context->Intermediate_Hash[i>>2]
                            >> 8 * ( 3 - ( i & 0x03 ) ));
    }

    return shaSuccess;
}
