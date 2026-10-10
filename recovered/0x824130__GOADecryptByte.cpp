// FUNCTION: BF2 0x824130
// upstream GameSpy/serverbrowsing/sb_crypt.c GOADecryptByte
#include <cstring>
#include <cstdlib>
#include <cstdio>
#define GS_ASSERT(x)
#define GSI_UNUSED(x)
#define assert(x)
typedef struct _GOACryptState { unsigned char cards[256]; unsigned char rotor; unsigned char ratchet; unsigned char avalanche; unsigned char last_plain; unsigned char last_cipher; } GOACryptState;
typedef unsigned char byte;
extern "C" {
}

unsigned char GOADecryptByte(GOACryptState *state, unsigned char b)
{
    unsigned char swaptemp;
	
    // Shuffle the deck a little more.
	
    state->ratchet = (unsigned char)(state->ratchet + state->cards[state->rotor++]);
    swaptemp = state->cards[state->last_cipher];
    state->cards[state->last_cipher] = state->cards[state->ratchet];
    state->cards[state->ratchet] = state->cards[state->last_plain];
    state->cards[state->last_plain] = state->cards[state->rotor];
    state->cards[state->rotor] = swaptemp;
    state->avalanche = (unsigned char)(state->avalanche + state->cards[swaptemp]);
	
    // Output one byte from the state in such a way as to make it
    // very hard to figure out which one you are looking at.
	/*
    state->last_plain = b^state->cards[(state->cards[state->ratchet] + state->cards[state->rotor]) & 0xFF] ^
	state->cards[state->cards[(state->cards[state->last_plain] +
	state->cards[state->last_cipher] +
	state->cards[state->avalanche])&0xFF]];
	*/
	//crt - change this around
	state->last_plain = (unsigned char)(b^state->cards[(state->cards[state->avalanche] + state->cards[state->rotor]) & 0xFF] ^
		state->cards[state->cards[(state->cards[state->last_plain] +
		state->cards[state->last_cipher] +
		state->cards[state->ratchet])&0xFF]]);
    state->last_cipher = b;
    return state->last_plain;
}
