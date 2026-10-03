extern "C" long g_connectionTypes[3];

extern "C" void setConnectionType_436210(void* self, int t)
{
    *(int*)((char*)self + 0x188) = t;
    long* d = (long*)((char*)self + 0x18c);
    long* src = g_connectionTypes + (long)t * 3;
    d[0] = src[0];
    d[1] = src[1];
    d[2] = src[2];
}
