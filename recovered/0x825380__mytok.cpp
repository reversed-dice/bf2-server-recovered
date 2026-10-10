// FUNCTION: BF2 0x825380
// BF2_FLAGS: -fcrossjumping
extern "C" char * mytok(char * instr, char delim)
{
	char *result;
	static char *thestr;

	if (instr)
		thestr = instr;
	result=thestr;
	while (*thestr && *thestr != delim)
	{
		thestr++;
	}
	if (thestr == result)
		result = 0;
	if (*thestr)
		*thestr++ = '\0';
	return result;
}
