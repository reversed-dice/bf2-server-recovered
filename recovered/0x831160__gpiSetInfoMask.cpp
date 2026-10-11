// FUNCTION: BF2 0x831160
typedef void* GPConnection;
typedef int GPEnum;
typedef int GPResult;

extern "C" int sprintf(char *str, const char *format, ...);
extern "C" GPResult gpiSendLocalInfo(GPConnection * connection, const char * key, const char * value);

extern "C" GPResult
gpiSetInfoMask(
  GPConnection * connection, 
  GPEnum mask
)
{
	char buffer[16];

	sprintf(buffer, "%d", mask);

	return gpiSendLocalInfo(connection, "\\publicmask\\", buffer);
}
