// FUNCTION: BF2 0x821ea0
extern "C" int sprintf(char*, const char*, ...);
extern "C" int qr2_buffer_addA(void* outbuf, const char* str);

extern "C" int qr2_buffer_add_int(void* outbuf, int value)
{
    char temp[20];
    sprintf(temp, "%d", value);
    return qr2_buffer_addA(outbuf, temp);
}
