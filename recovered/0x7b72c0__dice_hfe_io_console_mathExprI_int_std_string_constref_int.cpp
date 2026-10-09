// FUNCTION: BF2 0x7b72c0
#include <string>

namespace dice { namespace hfe { namespace io { namespace console {

int mathExprI(int a, std::string const& op, int b)
{
    if (op.compare("+") == 0 || op.compare("add") == 0) return a + b;
    if (op.compare("-") == 0 || op.compare("sub") == 0) return a - b;
    if (op.compare("*") == 0 || op.compare("mul") == 0) return a * b;
    if (op.compare("/") == 0 || op.compare("div") == 0) return a / b;
    return 0;
}

} } } }
