// FUNCTION: BF2 0x82eb10
extern "C" void* memmove(void*, const void*, unsigned long);

struct Buf { char* buffer; int size; int len; int pos; };

extern "C" int gpiClipBufferToPosition(void* unused, Buf* b)
{
    if (b == 0 || b->buffer == 0 || b->pos == 0) return 0;
    b->len -= b->pos;
    if (b->len != 0)
        memmove(b->buffer, b->buffer + b->pos, (unsigned int)b->len);
    b->buffer[b->len] = 0;
    b->pos = 0;
    return 0;
}
