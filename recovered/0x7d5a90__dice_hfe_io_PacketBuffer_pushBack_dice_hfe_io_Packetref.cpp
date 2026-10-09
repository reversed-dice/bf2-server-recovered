// FUNCTION: BF2 0x7d5a90
extern "C" void* memcpy(void*, void const*, unsigned long);
extern "C" void* dice_hfe_io_PacketBuffer_getNewPacketPtr(void* self);
namespace dice { namespace hfe { namespace io {

class Packet {
public:
    unsigned int m_size;
    unsigned int m_f4;
    unsigned int m_f8;
    unsigned int m_fc;
    unsigned int m_f10;
    unsigned int m_f14;
    char* m_data;
};

class PacketBuffer {
public:
    bool pushBack(Packet const& p);
};

bool PacketBuffer::pushBack(Packet const& p)
{
    if (p.m_size > 0x5c0)
        return false;
    Packet* n = (Packet*)dice_hfe_io_PacketBuffer_getNewPacketPtr(this);
    if (!n)
        return false;
    n->m_f8 = p.m_f8;
    n->m_size = p.m_size;
    n->m_f4 = p.m_f4;
    n->m_f10 = p.m_f10;
    memcpy(n->m_data, p.m_data, p.m_size);
    return true;
}

} } }
