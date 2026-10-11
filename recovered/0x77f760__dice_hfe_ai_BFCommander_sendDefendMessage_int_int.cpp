// FUNCTION: BF2 0x77f760
#include <string>

extern "C" void* getVoiceMessages_4756e0(void* gameLogic);
extern "C" char namesToIds_4c6d30(void* vm, int* a, int* b, int* c,
                                  const std::string& s1, const std::string& s2,
                                  const std::string& s3);
extern "C" void playRadioMessage_4c6690(void* vm, int player, int a, int b, int c);

extern "C" void f_77f760(void* self, int player, int arg3) {
    int i1 = 0, i2 = 0, i3 = 0;
    char ok = namesToIds_4c6d30(getVoiceMessages_4756e0(*(void**)0x010b8c08),
                                &i1, &i2, &i3,
                                std::string("defend"),
                                std::string("commander"),
                                std::string(""));
    if (ok) {
        playRadioMessage_4c6690(getVoiceMessages_4756e0(*(void**)0x010b8c08),
                                player, i1, i2, i3);
    }
}
