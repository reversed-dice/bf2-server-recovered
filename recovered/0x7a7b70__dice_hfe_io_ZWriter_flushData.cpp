// FUNCTION: BF2 0x7a7b70
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <ostream>

extern char DAT_00bb25f1;

namespace dice { namespace hfe { namespace io {

struct z_stream {
    char*          next_in;    // 0x00
    unsigned int   avail_in;   // 0x08
    unsigned int   _pad0c;
    unsigned long  total_in;   // 0x10
    char*          next_out;   // 0x18
    unsigned int   avail_out;  // 0x20
    unsigned int   _pad24;
    unsigned long  total_out;  // 0x28
    char*          msg;        // 0x30
    void*          state;      // 0x38
    char           _tail[0x30];
};

extern "C" int deflate(z_stream* strm, int flush);
extern "C" int deflateEnd(z_stream* strm);

struct Debug {
    char _pad[0x20];
    std::ostream os;
    char _tail[0x50];
    Debug(int type, const std::string& file, int line, const std::string& tag);
    ~Debug();
};

typedef void (*WriteFn)(void*, char*, int);

struct ZWriter {
    z_stream* m_zs;    // 0x00
    void*     m_out;   // 0x08
    int       m_size;  // 0x10
    int       _pad14;
    char*     m_buf;   // 0x18
    void flushData();
};

void ZWriter::flushData()
{
    int ret;
    do {
        m_zs->avail_in = 0;
        m_zs->next_in = m_buf;
        m_zs->avail_out = m_size;
        m_zs->next_out = m_buf;
        ret = deflate(m_zs, 4);
        if (ret == -5) {
            Debug(6, std::string("IO/ZUtil.cpp"), 0xc4, std::string(&DAT_00bb25f1)).os
                << "zlib buffer error, compression failed";
            return;
        }
        if (ret == -2) {
            Debug(6, std::string("IO/ZUtil.cpp"), 0xc8, std::string(&DAT_00bb25f1)).os
                << "zlib buffer error, inconsistent stream state";
            return;
        }
        ((WriteFn)(*(void***)m_out)[5])(m_out, m_buf, m_size - (int)m_zs->avail_out);
    } while (ret != 1);
    deflateEnd(m_zs);
}

} } }
