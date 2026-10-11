// FUNCTION: BF2 0x827270
extern "C" void * memcpy(void *dst, const void *src, unsigned long n);

void BufferAddInt(char **buffer, int ival, int *len)
{
	memcpy(*buffer, &ival, 4);
	(*len) += 4;
	(*buffer) += 4;
}
