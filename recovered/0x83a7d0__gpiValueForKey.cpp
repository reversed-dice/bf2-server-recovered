// FUNCTION: BF2 0x83a7d0
typedef int GPIBool;
extern "C" void __assert_fail(const char * expr, const char * file, unsigned int line, const char * fn) __attribute__((noreturn));
extern "C" char * strstr(const char * haystack, const char * needle);
extern "C" unsigned long strlen(const char * s);

GPIBool gpiValueForKey(const char * command, const char * key, char * value, int len)
{
	char delimiter;
	const char * start;
	int i;
	char c;

	if(!command)
		__assert_fail("command != ((void *)0)", "External/GameSpy/gp/gpiUtility.c", 145, "__PRETTY_FUNCTION__.5558");
	if(!key)
		__assert_fail("key != ((void *)0)", "External/GameSpy/gp/gpiUtility.c", 146, "__PRETTY_FUNCTION__.5558");
	if(!value)
		__assert_fail("value != ((void *)0)", "External/GameSpy/gp/gpiUtility.c", 147, "__PRETTY_FUNCTION__.5558");
	if(len <= 0)
		__assert_fail("len > 0", "External/GameSpy/gp/gpiUtility.c", 148, "__PRETTY_FUNCTION__.5558");

	delimiter = key[0];

	start = strstr(command, key);
	if(start == 0)
		return 0;

	start += strlen(key);

	len--;
	for(i = 0 ; (i < len) && ((c = start[i]) != '\0') && (c != delimiter) ; i++)
	{
		value[i] = c;
	}
	value[i] = '\0';

	return 1;
}
