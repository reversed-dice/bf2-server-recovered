// FUNCTION: BF2 0x7b71e0
#include <string>

namespace dice { namespace hfe { namespace io { namespace console {

float mathExprF(float a, std::string const& op, float b)
{
    if (op.compare("+") == 0 || op.compare("add") == 0) return a + b;
    if (op.compare("-") == 0 || op.compare("sub") == 0) return a - b;
    if (op.compare("*") == 0 || op.compare("mul") == 0) return a * b;
    if (op.compare("/") == 0 || op.compare("div") == 0) return a / b;
    return 0.0f;
}

} } } }
