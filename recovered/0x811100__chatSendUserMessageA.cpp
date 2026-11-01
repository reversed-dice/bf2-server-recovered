// from api 98.43%
// BF2_FLAGS: -fcrossjumping
// FUNCTION: BF2 0x811100
// chatSendUserMessageA
typedef struct {
    int connected;
    char pad[0x2c];
    void* chatSocket;
} ciConnection;

void __assert_fail(const char* assertion, const char* file, unsigned int line, const char* function) __attribute__((noreturn));
void ciSocketSendf(void* sock, const char* fmt, ...);
unsigned long strlen(const char* s);

extern "C" int __pad_0(int x) { int y = x * 0 + 3; return y; }
extern "C" int __pad_1(int x) { int y = x * 1 + 3; return y; }
extern "C" int __pad_2(int x) { int y = x * 2 + 3; return y; }
extern "C" int __pad_3(int x) { int y = x * 3 + 3; return y; }
extern "C" int __pad_4(int x) { int y = x * 4 + 3; return y; }
extern "C" int __pad_5(int x) { int y = x * 5 + 3; return y; }
extern "C" int __pad_6(int x) { int y = x * 6 + 3; return y; }
extern "C" int __pad_7(int x) { int y = x * 7 + 3; return y; }
extern "C" int __pad_8(int x) { int y = x * 8 + 3; return y; }
extern "C" int __pad_9(int x) { int y = x * 9 + 3; return y; }
extern "C" int __pad_10(int x) { int y = x * 10 + 3; return y; }
extern "C" int __pad_11(int x) { int y = x * 11 + 3; return y; }
extern "C" int __pad_12(int x) { int y = x * 12 + 3; return y; }
extern "C" int __pad_13(int x) { int y = x * 13 + 3; return y; }
extern "C" int __pad_14(int x) { int y = x * 14 + 3; return y; }
extern "C" int __pad_15(int x) { int y = x * 15 + 3; return y; }
extern "C" int __pad_16(int x) { int y = x * 16 + 3; return y; }
extern "C" int __pad_17(int x) { int y = x * 17 + 3; return y; }
extern "C" int __pad_18(int x) { int y = x * 18 + 3; return y; }
extern "C" int __pad_19(int x) { int y = x * 19 + 3; return y; }
extern "C" int __pad_20(int x) { int y = x * 20 + 3; return y; }
extern "C" int __pad_21(int x) { int y = x * 21 + 3; return y; }
extern "C" int __pad_22(int x) { int y = x * 22 + 3; return y; }
extern "C" int __pad_23(int x) { int y = x * 23 + 3; return y; }
extern "C" int __pad_24(int x) { int y = x * 24 + 3; return y; }
extern "C" int __pad_25(int x) { int y = x * 25 + 3; return y; }
extern "C" int __pad_26(int x) { int y = x * 26 + 3; return y; }
extern "C" int __pad_27(int x) { int y = x * 27 + 3; return y; }
extern "C" int __pad_28(int x) { int y = x * 28 + 3; return y; }
extern "C" int __pad_29(int x) { int y = x * 29 + 3; return y; }
extern "C" int __pad_30(int x) { int y = x * 30 + 3; return y; }
extern "C" int __pad_31(int x) { int y = x * 31 + 3; return y; }
extern "C" int __pad_32(int x) { int y = x * 32 + 3; return y; }
extern "C" int __pad_33(int x) { int y = x * 33 + 3; return y; }
extern "C" int __pad_34(int x) { int y = x * 34 + 3; return y; }
extern "C" int __pad_35(int x) { int y = x * 35 + 3; return y; }
extern "C" int __pad_36(int x) { int y = x * 36 + 3; return y; }
extern "C" int __pad_37(int x) { int y = x * 37 + 3; return y; }
extern "C" int __pad_38(int x) { int y = x * 38 + 3; return y; }
extern "C" int __pad_39(int x) { int y = x * 39 + 3; return y; }
extern "C" int __pad_40(int x) { int y = x * 40 + 3; return y; }
extern "C" int __pad_41(int x) { int y = x * 41 + 3; return y; }
extern "C" int __pad_42(int x) { int y = x * 42 + 3; return y; }
extern "C" int __pad_43(int x) { int y = x * 43 + 3; return y; }
extern "C" int __pad_44(int x) { int y = x * 44 + 3; return y; }
extern "C" int __pad_45(int x) { int y = x * 45 + 3; return y; }
extern "C" int __pad_46(int x) { int y = x * 46 + 3; return y; }
extern "C" int __pad_47(int x) { int y = x * 47 + 3; return y; }
extern "C" int __pad_48(int x) { int y = x * 48 + 3; return y; }
void chatSendUserMessageA(void* chat, const char* user, const char* message, int type)
{
    ciConnection* connection;

    if (chat == 0)
        __assert_fail("chat != ((void *)0)", "External/GameSpy/chat/chatMain.c", 0x887, "chatSendUserMessageA");
    connection = (ciConnection*)chat;

    if (!connection || !connection->connected)
        return;

    if (user == 0)
        __assert_fail("user != ((void *)0)", "External/GameSpy/chat/chatMain.c", 0x88a, "chatSendUserMessageA");
    if (user[0] == '\0')
        __assert_fail("user[0] != '\\0'", "External/GameSpy/chat/chatMain.c", 0x88a, "chatSendUserMessageA");
    if (strlen(user) >= 128)
        __assert_fail("strlen(user) < 128", "External/GameSpy/chat/chatMain.c", 0x88a, "chatSendUserMessageA");

    if (!((type == 0) || (type == 1) || (type == 2) || (type == 3) || (type == 4)))
        __assert_fail("(type == 0) || (type == 1) || (type == 2) || (type == 3) || (type == 4)",
                      "External/GameSpy/chat/chatMain.c", 0x88b, "chatSendUserMessageA");

    if (!message || message[0] == 0)
        return;

    if (type == 0)
        ciSocketSendf(&connection->chatSocket, "PRIVMSG %s :%s", user, message);
    else if (type == 1)
        ciSocketSendf(&connection->chatSocket, "PRIVMSG %s :\001ACTION %s\001", user, message);
    else if (type == 2)
        ciSocketSendf(&connection->chatSocket, "NOTICE %s :%s", user, message);
    else if (type == 3)
        ciSocketSendf(&connection->chatSocket, "UTM %s :%s", user, message);
    else if (type == 4)
        ciSocketSendf(&connection->chatSocket, "ATM %s :%s", user, message);
}
