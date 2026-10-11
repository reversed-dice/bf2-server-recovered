// FUNCTION: BF2 0x807ba0
typedef struct _gs_crypt_key
{      
   unsigned char state[256];       
   unsigned char x;        
   unsigned char y;
} gs_crypt_key;

#define swap_byte(x,y) t = *(x); *(x) = *(y); *(y) = t

extern "C" void gs_crypt(unsigned char *buffer_ptr, int buffer_len, gs_crypt_key *key)
{
	unsigned char t;
	unsigned char x;
	unsigned char y;
	unsigned char* state;
	unsigned char xorIndex;
	int counter;
	
	x = key->x;
	y = key->y;
	state = &key->state[0];
	for(counter = 0; counter < buffer_len; counter++)
	{
		x = (unsigned char)((x + 1) % 256);
		y = (unsigned char)((state[x] + y) % 256);
		swap_byte(&state[x], &state[y]);
		xorIndex = (unsigned char)((state[x] + state[y]) % 256);
		buffer_ptr[counter] ^= state[xorIndex];
	}
	key->x = x;
	key->y = y;
}
