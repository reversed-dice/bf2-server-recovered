// FUNCTION: BF2 0x7a3260
#include <string>

namespace dice { namespace hfe { namespace io {

class IStream {
public:
    virtual void _m0();
    virtual void _m1();
    virtual void _m2();
    virtual void _m3();
    virtual void _m4();
    virtual int write(const void* buf, unsigned int size);
};

class File {
public:
    bool write(const std::string& str);

    IStream* m_stream;
};

bool File::write(const std::string& str)
{
    int sz = str.size();
    return sz == m_stream->write(str.data(), sz);
}

} } }
// REVERSED_FUNCTION: dice_hfe_io_File_write_std_string_constref (0x7a3260)
