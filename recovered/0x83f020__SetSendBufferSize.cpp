// FUNCTION: BF2 0x83f020
extern "C" int setsockopt(int, int, int, void*, unsigned);
bool fn_0x83f020(int fd, int size) {
    int val = size;
    int r = setsockopt(fd, 1, 7, &val, 4);
    return r != -1;
}
// REVERSED_FUNCTION: SetSendBufferSize (0x83f020)
