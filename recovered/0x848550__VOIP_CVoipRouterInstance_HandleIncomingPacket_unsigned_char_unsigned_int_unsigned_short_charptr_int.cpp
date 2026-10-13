// FUNCTION: BF2 0x848550
// BF2_FLAGS: -fno-strict-aliasing
extern void* fn_845310(void* clients, unsigned short id);

class CVoipRouterInstance {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual int  dispatch(void* p, int* buf, unsigned short* id);

    int HandlePacketVoiceFrameDefaultChannelSet(unsigned short id, char* data, int len);
    int HandlePacketVoiceFrameAlternateChannelSet(unsigned short id, char* data, int len);
    int HandlePacketVoiceFrameMultiChannelSet(unsigned short id, char* data, int len);
    int HandleIncomingPacket(unsigned char type, unsigned int a3, unsigned short a4, char* data, int len);
};

int CVoipRouterInstance::HandleIncomingPacket(unsigned char type, unsigned int a3, unsigned short a4, char* data, int len)
{
    struct Pkt { int hdr[3]; int len; };
    Pkt pk;
    unsigned short id;

    pk.len = len;
    id = 0;
    if (dispatch((char*)this + 9, &pk.len, &id) == 1) {
        void* c = fn_845310((char*)this + 0x848, id);
        if (c != 0) {
            *(unsigned int*)((char*)c + 4) = a3;
            *(unsigned short*)((char*)c + 8) = a4;
            if (data != 0) {
                switch (type) {
                case 1: return HandlePacketVoiceFrameDefaultChannelSet(id, data, pk.len);
                case 2: return HandlePacketVoiceFrameAlternateChannelSet(id, data, pk.len);
                case 3: return HandlePacketVoiceFrameMultiChannelSet(id, data, pk.len);
                case 6: return 1;
                }
            }
            return -1;
        }
        return -7;
    }
    return -4;
}
