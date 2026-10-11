// FUNCTION: BF2 0x7e7920
namespace dice { namespace hfe { namespace io {

class ZipReadStream {
public:
    virtual void a();
    virtual void b();
    virtual void c();
    virtual void d();
    virtual int read(void* dst, unsigned int n);
    bool skip(unsigned int n);
};

} } }

bool dice::hfe::io::ZipReadStream::skip(unsigned int n) {
    if (n == 0) {
        return true;
    }
    char* buf = new char[n];
    if (read(buf, n) != (int)n) {
        delete[] buf;
        return false;
    }
    delete[] buf;
    return true;
}
