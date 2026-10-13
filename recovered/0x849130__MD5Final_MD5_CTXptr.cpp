// FUNCTION: BF2 0x849130
struct MD5_CTX
{
	unsigned int count[2];
	unsigned int state[4];
	unsigned char buffer[64];
	unsigned char digest[16];
};
extern "C" unsigned char PADDING[64];
extern "C" void Transform(unsigned int * state, unsigned int * in);
extern "C" void MD5Update(MD5_CTX * context, unsigned char * input, unsigned int inputLen);

void MD5Final(MD5_CTX * context)
{
	unsigned int in[16];
	int index;
	int padLen;
	unsigned int i;
	unsigned int j;

	in[14] = context->count[0];
	in[15] = context->count[1];

	index = (int)((context->count[0] >> 3) & 0x3f);
	padLen = (index < 56) ? (56 - index) : (120 - index);

	MD5Update(context, PADDING, padLen);

	for(i = 0 ; i < 14 ; i++)
	{
		in[i] = (((unsigned int)context->buffer[(i * 4) + 3]) << 24)
			| (((unsigned int)context->buffer[(i * 4) + 2]) << 16)
			| (((unsigned int)context->buffer[(i * 4) + 1]) << 8)
			| ((unsigned int)context->buffer[(i * 4) + 0]);
	}

	Transform(context->state, in);

	for(i = 0, j = 0 ; j < 16 ; i++, j += 4)
	{
		unsigned int v = context->state[i];
		context->digest[j + 0] = (unsigned char)(v & 0xff);
		context->digest[j + 1] = (unsigned char)((v >> 8) & 0xff);
		context->digest[j + 2] = (unsigned char)((v >> 16) & 0xff);
		context->digest[j + 3] = (unsigned char)((v >> 24) & 0xff);
	}
}
