// Donor: a local output stream, which is what the biggest block group left
// open actually is. Three of the unknown blocks (55, 30 and 28 functions,
// all in save/format functions -- MapList::save, MaterialManager::saveCells,
// MapList::formatListForConsole) share the shape
//
//     MOV RDX,[0x50+RSP]      load a pointer off the stack
//     MOV R13D,<ADDR>         materialize an address in a register
//     MOV [0x180+RSP],<ADDR>  store an address into a stack slot
//     CMP RDX,0 / JE          and test another pointer for null
//
// The stored address is a vtable going into a LOCAL stream object, which the
// recovered corpus never contains: an accessor has no locals.
#include <ostream>
#include <sstream>
#include <string>

namespace donors {

struct Item {
    const char* name;
    int value;
};

// Declaration-only bodies again: the TEARDOWN of a local stream is what the
// corpus blocks actually show (the base vtable stored back into the stack
// frame, the rep pointer tested against the empty sentinel), and it is filed
// under the brace. Only a body whose single statement is the declaration
// hands it back under a line worth copying.
void stream_local_only()
{
    std::ostringstream oss;
}

void stream_local_only_from_string(const std::string& text)
{
    std::istringstream iss(text);
}

void stream_local_only_two()
{
    std::ostringstream first;
    std::ostringstream second;
}

void format_items(Item** items, unsigned int count, std::string* out)
{
    std::ostringstream oss;
    for (unsigned int i = 0; i < count; ++i) {
        Item* it = items[i];
        if (it == 0)
            continue;
        oss << it->name << " " << it->value << "\n";
    }
    *out = oss.str();
}

void format_one(const Item* item, std::string* out)
{
    std::ostringstream oss;
    oss << item->name;
    *out = oss.str();
}

void write_items(std::ostream& os, Item** items, unsigned int count)
{
    for (unsigned int i = 0; i < count; ++i) {
        Item* it = items[i];
        if (it == 0)
            continue;
        os << it->name << " " << it->value << "\n";
    }
}

void format_number(int value, std::string* out)
{
    std::ostringstream oss;
    oss << value;
    *out = oss.str();
}

void parse_number(const std::string& text, int* out)
{
    std::istringstream iss(text);
    iss >> *out;
}

}  // namespace donors
