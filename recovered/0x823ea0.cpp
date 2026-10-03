// GOAHashInit - matches 0x823ea0
extern "C" void GOAHashInit(char* self) {
    self[0x100] = 1;
    self[0x101] = 3;
    self[0x102] = 5;
    self[0x103] = 7;
    self[0x104] = 0xb;
    
    int i = 0xff;
    do {
        *self = (char)i;
        i--;
        self++;
    } while (i != -1);
}
