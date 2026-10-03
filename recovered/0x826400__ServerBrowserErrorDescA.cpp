// FUNCTION: BF2 0x826400
namespace dice { namespace hfe {
const char* ServerBrowserErrorDescA_0x826400(void* self, int code) {
    switch (code) {
    case 0: return "None";
    case 1: return "Socket creation error";
    case 2: return "DNS lookup error";
    case 3: return "Connection failed";
    case 4: return "Data stream error";
    case 5: return "Memory allocation error";
    case 6: return "Function parameter error";
    case 7: return "Duplicate update request error";
    }
    return "";
}
} }
