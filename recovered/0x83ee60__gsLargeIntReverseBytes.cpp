// from api 87.27%
// FUNCTION: BF2 0x83ee60
extern "C" int gsLargeIntReverseBytes(unsigned int* v)
{
    unsigned int n = v[0];
    if (n == 0)
        return 1;
    unsigned char* a = (unsigned char*)(v + 1);
    unsigned char* b = (unsigned char *)&((unsigned int *)a)[n] - 1;
    while (a < b) {
        unsigned char t = *a;
        *a = *b;
        ++a;
        *b = t;
        --b;
    }
    return 1;
}
