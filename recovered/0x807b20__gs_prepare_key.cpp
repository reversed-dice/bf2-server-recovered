// FUNCTION: BF2 0x807b20
typedef struct _gs_crypt_key
{      
   unsigned char state[256];       
   unsigned char x;        
   unsigned char y;
} gs_crypt_key;

#define swap_byte(x,y) t = *(x); *(x) = *(y); *(y) = t

extern "C" void gs_prepare_key(const unsigned char *key_data_ptr, int key_data_len, gs_crypt_key *key)
{
	unsigned char t;
	unsigned char index1;
	unsigned char index2;
	unsigned char* state;
	int counter;
	
	state = &key->state[0];
	for(counter = 0; counter < 256; counter++)
		state[255 - counter] = (unsigned char)counter; //crt - we fill reverse of normal
	key->x = 0;
	key->y = 0;
	index1 = 0;
	index2 = 0;
	for(counter = 0; counter < 256; counter++)
	{
		index2 = (unsigned char)((key_data_ptr[index1] + state[counter] + index2) % 256);
		swap_byte(&state[counter], &state[index2]);
		index1 = (unsigned char)((index1 + 1) % key_data_len);
	}
}
