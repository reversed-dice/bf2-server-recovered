// FUNCTION: BF2 0x7a5df0
namespace dice { namespace hfe {
class Token {
public:
    void* m_p;
    int m_offset;
    long operator[](unsigned int u) const;
};
long Token::operator[](unsigned int u) const
{
    long* pl = *(long**)this;
    unsigned int n = *(unsigned int*)((char*)pl + 0x18);
    unsigned int i = u + (unsigned int)m_offset;
    if ((int)i < (int)n)
        goto use_i;
    return (unsigned long)n * 0x20 + *pl;
use_i:
    return (unsigned long)i * 0x20 + *pl;
}
} }
