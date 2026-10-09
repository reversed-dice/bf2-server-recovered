// FUNCTION: BF2 0x73e880
namespace dice { namespace hfe {
class MD5String {
public:
    bool operator==(MD5String const& o) const;
    bool operator>(MD5String const& o) const;
    unsigned char m_data[16];
};
bool MD5String::operator>(MD5String const& o) const
{
    unsigned char const* a = m_data;
    unsigned char const* b = o.m_data;
    for (int i = 0; i < 16; ++i, ++a, ++b) {
        if (*a < *b) return true;
    }
    return false;
}
} }
