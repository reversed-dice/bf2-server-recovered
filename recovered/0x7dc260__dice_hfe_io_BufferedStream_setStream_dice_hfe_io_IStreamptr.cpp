// FUNCTION: BF2 0x7dc260
namespace dice { namespace hfe { namespace io {
struct IStream {
    virtual void addRef();
    virtual void d1();
    virtual void release();
    virtual void* queryInterface(unsigned int iid);
};
struct INonlinearStream {
    virtual void addRef();
};
struct IAsyncStream {
    virtual void addRef();
};
struct BufferedStream {
    void** vtable;
    char _pad[0x18];
    IStream* stream;
    INonlinearStream* nonlinear;
    IAsyncStream* async;
    void setStream(IStream* next);
};
void BufferedStream::setStream(IStream* next) {
    ((void (*)(void*))vtable[0xb])(this);
    if (stream) {
        stream->release();
        stream = 0;
    }
    stream = next;
    if (next)
        next->addRef();
    if (nonlinear) {
        ((IStream*)nonlinear)->release();
        nonlinear = 0;
    }
    if (next)
        nonlinear = (INonlinearStream*)next->queryInterface(*(unsigned int*)0xbc1a10);
    if (nonlinear)
        nonlinear->addRef();
    if (async) {
        ((IStream*)async)->release();
        async = 0;
    }
    if (next)
        async = (IAsyncStream*)next->queryInterface(*(unsigned int*)0xbc1a0c);
    if (async)
        async->addRef();
}
}}}
