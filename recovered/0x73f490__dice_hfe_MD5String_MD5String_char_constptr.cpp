// FUNCTION: BF2 0x73f490
#include <string.h>
namespace dice { namespace hfe {

struct MD5_CTX {
    unsigned int state[4];      // +0x00
    unsigned int count[2];      // +0x10
    unsigned char buffer[64];   // +0x18
};

void MD5Update(MD5_CTX*, unsigned char const*, unsigned int);
void MD5Final(unsigned char*, MD5_CTX*);

class MD5String {
public:
    unsigned char m_digest[16];
    MD5String(char const* str);
};

MD5String::MD5String(char const* str)
{
    MD5_CTX ctx;
    ctx.count[1] = 0;
    ctx.count[0] = 0;
    ctx.state[0] = 0x67452301;
    ctx.state[1] = 0xefcdab89;
    ctx.state[2] = 0x98badcfe;
    ctx.state[3] = 0x10325476;
    MD5Update(&ctx, (unsigned char const*)str, strlen(str));
    MD5Final(m_digest, &ctx);
}

} }
