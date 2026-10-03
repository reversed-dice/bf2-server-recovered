// FUNCTION: BF2 0x827260
extern "C" void BufferAddByte(char** buf, char byte, int* count) {
    **buf = byte;
    (*count)++;
    (*buf)++;
}
// REVERSED_FUNCTION: BufferAddByte (0x827260)
