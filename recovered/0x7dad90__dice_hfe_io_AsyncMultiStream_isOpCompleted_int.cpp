// FUNCTION: BF2 0x7dad90
namespace dice {
namespace hfe {
namespace io {

class IAsyncStream {
public:
    virtual void addRef();
    virtual void getRef();
    virtual void release();
    virtual void queryInterface(unsigned int) const;
    virtual bool isCompleted();
};

struct AsyncOp {
    IAsyncStream* m_pStream;
    char _pad[0x14];
    int m_bytes;
};

class AsyncMultiStream {
public:
    char _pad0[0x10];
    AsyncOp* m_ops;

    bool isOpCompleted(int i);
};

bool AsyncMultiStream::isOpCompleted(int i)
{
    AsyncOp* op = m_ops + i;
    return op->m_pStream->isCompleted();
}

} // namespace io
} // namespace hfe
} // namespace dice
// REVERSED_FUNCTION: dice_hfe_io_AsyncMultiStream_isOpCompleted_int (0x7dad90)
