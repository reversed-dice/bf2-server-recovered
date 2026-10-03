// FUNCTION: BF2 0x7d4410
// handleDisconnect 0x7d4410
// Reads bits from stream, checks flag, stores connection event or resets
#include <string>

extern "C" {
    // BitStream::readBits(void* buf, unsigned int nbits) at 0x79e920
    extern "C" void _ZN5dice3hf2io9BitStream8readBitsEPvj(void* stream, void* buf, unsigned int nbits);
    // NetServer::storeConnectionEvent(int, PResult) at 0x7d3e00
    extern "C" void _ZN5dice3hf2io9NetServer22storeConnectionEventEiNS1_7PResultE(void* self, int param, unsigned int result);
}

long handleDisconnect(void* self, int param) {
    void* streamPtr = *(void**)((char*)self + 0x4f0);
    
    // Read 32 bits from stream
    unsigned int bits = 0;
    _ZN5dice3hf2io9BitStream8readBitsEPvj(streamPtr, &bits, 0x20);
    
    // Reload stream pointer after call
    void* stream = *(void**)((char*)self + 0x4f0);
    unsigned int readVal = bits;
    
    if (*(char*)((char*)stream + 0x20) == 0) {
        // Store connection event twice
        _ZN5dice3hf2io9NetServer22storeConnectionEventEiNS1_7PResultE(self, param, readVal);
        _ZN5dice3hf2io9NetServer22storeConnectionEventEiNS1_7PResultE(self, param, 0xd);
        return 0;
    } else {
        *(unsigned int*)((char*)stream + 0x24) = 0;
        *(char*)((char*)stream + 0x20) = 0;
        return 9;
    }
}
