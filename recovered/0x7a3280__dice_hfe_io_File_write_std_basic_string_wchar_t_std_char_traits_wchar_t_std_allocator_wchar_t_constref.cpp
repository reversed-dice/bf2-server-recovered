// FUNCTION: BF2 0x7a3280
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
    bool write(const std::wstring& str);

    IStream* m_stream;
};

bool File::write(const std::wstring& str)
{
    int sz = str.size() * sizeof(wchar_t);
    return sz == m_stream->write(str.data(), sz);
}

} } }
// REVERSED_FUNCTION: dice_hfe_io_File_write_std_basic_string_wchar_t_std_char_traits_wchar_t_std_allocator_wchar_t_constref (0x7a3280)
