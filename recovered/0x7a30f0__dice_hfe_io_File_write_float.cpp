// FUNCTION: BF2 0x7a30f0
// BF2_FLAGS: -fno-strict-aliasing
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
    bool write(float val);

    IStream* m_stream;
};

bool File::write(float val)
{
    return m_stream->write(&val, sizeof(val)) == sizeof(val);
}

} } }
// REVERSED_FUNCTION: dice_hfe_io_File_write_float (0x7a30f0)
