// FUNCTION: BF2 0x7db980
namespace dice { namespace hfe { namespace io {
class BufferedStream {
public:
    class Buffer {
    public:
        unsigned char _pad[0x10];
        void* m_data;
        ~Buffer();
    };
};
BufferedStream::Buffer::~Buffer()
{
    if (m_data)
        operator delete[](m_data);
}
} } }
// REVERSED_FUNCTION: dice_hfe_io_BufferedStream_Buffer_dtor_Buffer (0x7db980)
