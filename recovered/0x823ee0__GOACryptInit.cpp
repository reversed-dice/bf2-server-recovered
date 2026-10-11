// FUNCTION: BF2 0x823ee0
typedef struct _GOACryptState
{
    unsigned char cards[256];
    unsigned char rotor;
    unsigned char ratchet;
    unsigned char avalanche;
    unsigned char last_plain;
    unsigned char last_cipher;
} GOACryptState;

void GOAHashInit(GOACryptState *state);

static unsigned char keyrand(GOACryptState *state, int limit,
							 unsigned char *user_key,
							 unsigned char keysize,
							 unsigned char *rsum,
							 unsigned *keypos)
{
    unsigned int u,
        retry_limiter,
        mask;

    if (!limit) return 0;
    retry_limiter = 0;
    mask = 1;
    while (mask < (unsigned)limit)
        mask = (mask << 1) + 1;
    do
	{
        *rsum = (unsigned char)(state->cards[*rsum] + user_key[(*keypos)++]);
        if (*keypos >= keysize)
		{
            *keypos = 0;
            *rsum = (unsigned char)(*rsum + keysize);
		}
        u = mask & *rsum;
        if (++retry_limiter > 11)
            u %= (unsigned int)limit;
	}
    while (u > (unsigned)limit);
    return (unsigned char)(u);
}

void GOACryptInit(GOACryptState *state, unsigned char *key, unsigned char keysize)
{
    int i;
    unsigned char toswap, swaptemp, rsum;
    unsigned keypos;

    if (keysize < 1)
	{
        GOAHashInit(state);
        return;
	}

    for (i=0;i<256;i++)
        state->cards[i] = (unsigned char)(i);

    toswap = 0;
    keypos = 0;
    rsum = 0;
    for (i=255;i>=0;i--)
	{
        toswap = keyrand(state, i, key, keysize, &rsum, &keypos);
        swaptemp = state->cards[i];
        state->cards[i] = state->cards[toswap];
        state->cards[toswap] = swaptemp;
	}

    state->rotor = state->cards[1];
    state->ratchet = state->cards[3];
    state->avalanche = state->cards[5];
    state->last_plain = state->cards[7];
    state->last_cipher = state->cards[rsum];

    toswap = swaptemp = rsum = 0;
    keypos = 0;
}
