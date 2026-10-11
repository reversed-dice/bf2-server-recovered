// FUNCTION: BF2 0x812290
// ciRandomCookie
extern int sprintf(char*, const char*, ...);

long cookie_buf;
int next_cookie = 0;

long ciRandomCookie() {
    sprintf((char*)&cookie_buf, "%03d", next_cookie++);
    next_cookie = next_cookie % 1000;
    return (long)&cookie_buf;
}
