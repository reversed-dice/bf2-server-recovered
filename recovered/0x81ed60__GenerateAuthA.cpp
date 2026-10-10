// FUNCTION: BF2 0x81ed60
// upstream GameSpy/gstats/gstats.c GenerateAuthA
#include <cstring>
#include <cstdlib>
#include <cstdio>
#define GS_ASSERT(x)
#define GSI_UNUSED(x)
#define assert(x)
#define RAWSIZE 128
extern "C" {
int MD5();
void MD5Digest(unsigned char *input, unsigned int len, char output[33]);
}

char *GenerateAuthA(const char *challenge, const char *password, char response[33])
{
	char rawout[RAWSIZE];
	
	/* check to make sure we weren't passed a huge pass/challenge */
	if (strlen(password) + strlen(challenge) + 20>= RAWSIZE)
	{
		strcpy(response,"CD Key or challenge too long");
		return response;
	}

	/* response = MD5(pass + challenge) */
	sprintf(rawout, "%s%s",password, challenge );

	/* do the response md5 */
	MD5Digest((unsigned char *)rawout, strlen(rawout), response);
	return response;
}
