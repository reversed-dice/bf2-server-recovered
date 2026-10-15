// BF2_FLAGS: -fno-regmove
// FUNCTION: BF2 0x83ccd0
typedef unsigned int gsi_u32;
typedef int gsi_i32;
typedef unsigned char gsi_u8;
#define GS_LARGEINT_MAX_DIGITS 256
#define GS_CRYPT_RSA_BYTE_SIZE 128

struct gsLargeInt_t { gsi_u32 mLength; gsi_u32 mData[GS_LARGEINT_MAX_DIGITS]; };
struct gsCryptRSAKey { gsLargeInt_t modulus; gsLargeInt_t exponent; };

extern "C" {
void *memcpy(void *, const void *, unsigned long);
int gsLargeIntReverseBytes(gsLargeInt_t *);
int gsLargeIntPowerMod(gsLargeInt_t *, const gsLargeInt_t *, const gsLargeInt_t *, gsLargeInt_t *);
}

gsi_i32 gsCryptRSADecryptBuffer(const gsCryptRSAKey *privateKey, const unsigned char cipherText[GS_CRYPT_RSA_BYTE_SIZE], unsigned char *plainText, gsi_u32 *lenout)
{
	int i = 0;
	char *temp;
	gsLargeInt_t lintRSAPacket;
	lintRSAPacket.mLength = GS_CRYPT_RSA_BYTE_SIZE / 4;
	memcpy(lintRSAPacket.mData, cipherText, GS_CRYPT_RSA_BYTE_SIZE);

	gsLargeIntReverseBytes(&lintRSAPacket);
	gsLargeIntPowerMod(&lintRSAPacket, &privateKey->exponent, &privateKey->modulus, &lintRSAPacket);
	gsLargeIntReverseBytes(&lintRSAPacket);

	if ((lintRSAPacket.mLength < (GS_CRYPT_RSA_BYTE_SIZE / 4)) || (((char *)lintRSAPacket.mData)[0] != 0x00))
		return -1;
	if (((char *)lintRSAPacket.mData)[1] != 0x02)
		return -2;
	temp = (char *)lintRSAPacket.mData;

	temp = (char *)lintRSAPacket.mData;
	for (i = 2; i < GS_CRYPT_RSA_BYTE_SIZE; i++) {
		if (temp[i] == 0)
			break;
	}
	if (i < (2 + 8))
		return -3;
	if (i == GS_CRYPT_RSA_BYTE_SIZE)
		return -4;

	memcpy(plainText, (temp + i + 1), GS_CRYPT_RSA_BYTE_SIZE);
	*lenout = (gsi_u32)(GS_CRYPT_RSA_BYTE_SIZE - (i + 1));

	return 0;
}
