// FUNCTION: BF2 0x802be0
#include <string>
#include <unistd.h>
struct UnixFileStream { char _pad[0x2c]; };
void UnixFileStream_close(UnixFileStream* self)
{
    int fd = *(int*)((char*)self + 0xc);
    if (fd != -1) {
        int r = close(fd);
        if (r == -1) {
            std::string tmp("<unknown>");
        }
        (*(int*)(*(char**)((char*)self + 0x28) + 0xc))--;
    }
}
