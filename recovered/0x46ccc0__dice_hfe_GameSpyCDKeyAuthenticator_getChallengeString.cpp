// BF2_FLAGS: -fno-tree-loop-optimize
// FUNCTION: BF2 0x46ccc0
extern "C" int rand();
namespace dice { namespace hfe {

class GameSpyCDKeyAuthenticator {
public:
    virtual ~GameSpyCDKeyAuthenticator();
    virtual const char* getChallengeString();
};

const char* GameSpyCDKeyAuthenticator::getChallengeString()
{
    char* str = (char*)0xf66ac4;
    if (str[0] == 0) {
        const char* chars = (const char*)0xb32688;
        for (unsigned long i = 0; i != 8; ++i)
            str[i] = chars[rand() % 78UL];
        str[8] = 0;
    }
    return str;
}

} }
