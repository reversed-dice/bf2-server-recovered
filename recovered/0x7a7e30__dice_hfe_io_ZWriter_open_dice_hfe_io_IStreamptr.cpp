// FUNCTION: BF2 0x7a7e30
// BF2_FLAGS: -fno-strict-aliasing
namespace dice { namespace hfe { namespace io {

struct z_stream { char _pad[0x70]; };
extern "C" int deflateInit_(z_stream* strm, int level, const char* version, int stream_size);

class IStream;
typedef void (*FnVoid)(void*);

class ZWriter {
public:
    bool open(IStream* s);
    void close();
private:
    z_stream* m_zs;      // +0x00
    IStream*  m_stream;  // +0x08
};

bool ZWriter::open(IStream* s) {
    close();
    if (s == 0)
        return false;
    if (deflateInit_(m_zs, 3, "1.2.3", 0x70) != 0)
        return false;
    m_stream = s;
    ((FnVoid)(*(void***)s)[0])(s);
    return true;
}}}}
