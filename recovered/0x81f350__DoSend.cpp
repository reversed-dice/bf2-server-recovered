// FUNCTION: BF2 0x81f350
extern "C" void xcode_buf(char* buf, int len);
extern "C" long send(int fd, const void* buf, unsigned long len, int flags);
extern "C" int* __errno_location();
extern "C" char* strcpy(char* dst, const char* src);

char enc1[16] = {'\0','a','m','e','S','p','y','3','D','\0'};
char* enc = enc1;
char finalstr[10] = {'\0','f','i','n','a','l','\\','\0'};
int sock = -1;

int DoSend(char* data, int len)
{
    int sent = 0;

    enc = enc1;
    xcode_buf(data, len);
    strcpy(data + len, finalstr);

    while (sent < (len + 7))
    {
        int ret = (int)send(sock, (data + sent), (len + 7 - sent), 0);
        if (ret == -1)
        {
            int anError = *__errno_location();
            if ((anError != 11) && (anError != 110) && (anError != 115))
                return anError;
        }
        else if (ret == 0)
        {
            return -1;
        }
        else
            sent += ret;
    };

    return sent;
}
