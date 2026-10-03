// FUNCTION: BF2 0x837f10
// gpiFinishTransferMessage
extern "C" {
    int gpiPeerFinishTransferMessage(long peer, long data);
    unsigned int current_time(...);
}

int gpiFinishTransferMessage(long peer, long transfer) {
    int result = gpiPeerFinishTransferMessage(peer, *(long*)(transfer + 0x28));
    unsigned int now = current_time();
    *(long*)(transfer + 0x40) = (long)now;
    return result;
}
// REVERSED_FUNCTION: gpiFinishTransferMessage (0x837f10)
