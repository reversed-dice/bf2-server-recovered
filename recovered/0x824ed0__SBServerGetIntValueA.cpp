// FUNCTION: BF2 0x824ed0
typedef void * SBServer;

extern "C" int SBServerGetPing(SBServer server);
extern "C" const char * SBServerGetStringValueA(SBServer server, const char * keyname, const char * sdefault);
extern "C" int strcmp(const char * a, const char * b);
extern "C" long __strtol_internal(const char * nptr, char ** endptr, int base, int group);
extern "C" const unsigned short ** __ctype_b_loc(void);

#define isdigit(c) (((*__ctype_b_loc())[c] & 0x800) != 0)
#define atoi(s) ((int)__strtol_internal(s, 0, 10, 0))

extern "C" int SBServerGetIntValueA(SBServer server, const char * key, int idefault)
{
	const char * s, * s2;

	// check assumtions during development
	if (server == 0)
		return idefault;
	if (strcmp(key,"ping") == 0) //ooh! they want the ping!
		return SBServerGetPing(server);
	s = SBServerGetStringValueA(server, key, 0);
	if (s == 0)
		return idefault;
	s2 = (*s != '-') ? s : s+1;  // check for signed values
	if (!isdigit((unsigned char)*s2)) // empty-string/non-numeric should return idefault
		return idefault;
	else
		return atoi(s);
}
