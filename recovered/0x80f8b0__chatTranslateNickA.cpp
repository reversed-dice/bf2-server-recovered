// FUNCTION: BF2 0x80f8b0
extern "C" void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__((noreturn));
extern "C" unsigned long strlen(const char *);
extern "C" int strcasecmp(const char *, const char *, ...);
typedef void *CHAT;

const char * chatTranslateNickA(char * nick, const char * extension)
{
	int nickLen;
	int extensionLen;

	if (nick == 0)
		__assert_fail("nick", "External/GameSpy/chat/chatMain.c", 0x4c9, "chatTranslateNickA");
	if (extension == 0)
		__assert_fail("extension", "External/GameSpy/chat/chatMain.c", 0x4ca, "chatTranslateNickA");

	nickLen = (int)strlen(nick);
	extensionLen = (int)strlen(extension);

	if((extensionLen < nickLen) && (strcasecmp(nick + nickLen - extensionLen, extension) == 0))
	{
		nick[nickLen - extensionLen] = '\0';
		return nick;
	}

	return 0;
}
