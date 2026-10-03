// FUNCTION: BF2 0x7dade0
extern "C" void fn_7db5c0(void*);
struct AsyncMultiStreamer {
    virtual void s0();
    virtual void s1();
    virtual ~AsyncMultiStreamer();
};
AsyncMultiStreamer::~AsyncMultiStreamer() { fn_7db5c0((char*)this + 0x10); }
