// FUNCTION: BF2 0x743210
namespace std { class string; }
namespace dice { namespace hfe { namespace world {

class Profiler {
public:
    bool reportFile(std::string const&, float, unsigned int, bool);
    bool reportToFile(std::string const& s);
};

bool Profiler::reportFile(std::string const&, float, unsigned int, bool)
{
    return false;
}

bool Profiler::reportToFile(std::string const& s) {
    return reportFile(s, 0.0f, 0x20, true);
}

} } }
