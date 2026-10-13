// FUNCTION: BF2 0x729240
namespace dice { namespace hfe {

class TrueRandom {
public:
    static int between(int lo, int hi);
    static bool random(unsigned char* buf, int len);
};

bool TrueRandom::random(unsigned char* buf, int len)
{
    for (int i = 0; i < len; ++i)
        buf[i] = (unsigned char)between(0, 255);
    return true;
}

} }
