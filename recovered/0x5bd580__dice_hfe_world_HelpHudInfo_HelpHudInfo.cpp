// FUNCTION: BF2 0x5bd580
namespace dice { namespace hfe { namespace world {
void HelpHudInfo_0x5bd580(void* self) {
    *(long*)self = 0xf6c6e8;
    *(long*)((char*)self + 8) = 0xf6c6e8;
    *(long*)((char*)self + 0x10) = 0xf6c6e8;
    *(long*)((char*)self + 0x18) = 0xf6c6e8;
    long* p = (long*)((char*)self + 0x20);
    long i = 2;
    do {
        i--;
        *p = 0xf6c6e8;
        p++;
    } while (i != -1);
    long* q = (long*)((char*)self + 0x38);
    long j = 3;
    do {
        *q = 0xf6c6e8;
        q++;
        j--;
    } while (j != 0);
    *(long*)((char*)self + 0x50) = 0xf6c6e8;
    *(long*)((char*)self + 0x58) = 0xf6c6e8;
    *(long*)((char*)self + 0x60) = 0xf6c6e8;
    *(long*)((char*)self + 0x68) = 0xf6c6e8;
}
} } }
