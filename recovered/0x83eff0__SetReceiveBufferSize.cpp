// FUNCTION: BF2 0x83eff0
extern "C" int setsockopt(int, int, int, void*, unsigned);
bool fn_0x83eff0(int fd, int size) {
    int val = size;
    int r = setsockopt(fd, 1, 8, &val, 4);
    return r != -1;
}
// REVERSED_FUNCTION: SetReceiveBufferSize (0x83eff0)
