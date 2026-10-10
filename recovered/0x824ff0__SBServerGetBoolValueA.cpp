// FUNCTION: BF2 0x824ff0
extern "C" const char * SBServerGetStringValueA(void * server, const char * key, const char * sdefault);
extern "C" int SBServerGetBoolValueA(void * server, const char * key, int bdefault)
{
	const char *s;
	s = SBServerGetStringValueA(server, key, 0);
	if (!s || !s[0])
		return bdefault;

	if('0' == s[0]|| 'F' == s[0] || 'f' == s[0] || 'N' == s[0] || 'n' == s[0])
		return 0;

	return 1;
}
