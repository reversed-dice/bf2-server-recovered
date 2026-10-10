// FUNCTION: BF2 0x824260
extern "C" unsigned char GOAEncryptByte(void * state, unsigned char b);
extern "C" void GOAHashFinal(void * state, unsigned char * outputhash, unsigned char hashlength)
{
	int i;

	for (i=255;i>=0;i--)
		GOAEncryptByte(state, (unsigned char) i);
	for (i=0;i<hashlength;i++)
		outputhash[i] = GOAEncryptByte(state, 0);
}
