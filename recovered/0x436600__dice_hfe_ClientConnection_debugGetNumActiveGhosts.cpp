// FUNCTION: BF2 0x436600
namespace dice { namespace hfe {
class ClientConnection {
public:
    char _pad[0x40];
    void* ghostList;
    int debugGetNumActiveGhosts() const;
};
int ClientConnection::debugGetNumActiveGhosts() const {
    void* list = ghostList;
    if (list == 0) return -1;
    return (*(long*)((char*)list + 0x2070) - *(long*)((char*)list + 0x2068)) >> 3;
}
}
}

// REVERSED_FUNCTION: dice_hfe_ClientConnection_debugGetNumActiveGhosts (0x436600)
