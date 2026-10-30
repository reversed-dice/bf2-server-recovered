// FUNCTION: BF2 0x4e3c30
// BF2_FLAGS: -fcrossjumping -fno-strict-aliasing
#include <cstdlib>
#include <set>
#include <sstream>
#include <string>

namespace dice { namespace hfe {

enum DebugType { DT_Debug, DT_Info, DT_Warning, DT_Assert, DT_4, DT_DxAssert, DT_Error, DT_7, DT_Log };

class BuildNrUtil {
public:
    static const char* getBuildNrString();
};

namespace io {
class IConsole {
public:
    virtual void a0();
    virtual void a1();
    virtual void a2();
    virtual void a3();
    virtual void a4();
    virtual void print(std::string const& s);
    virtual void a6(); virtual void a7(); virtual void a8(); virtual void a9();
    virtual void a10(); virtual void a11(); virtual void a12(); virtual void a13();
    virtual void a14(); virtual void a15(); virtual void a16(); virtual void a17();
    virtual void a18(); virtual void a19(); virtual void a20(); virtual void a21();
    virtual void a22(); virtual void a23(); virtual void a24(); virtual void a25();
    virtual void a26(); virtual void a27(); virtual void a28(); virtual void a29();
    virtual void a30(); virtual void a31(); virtual void a32(); virtual void a33();
    virtual void a34(); virtual void a35();
    virtual std::string const& getCurrentConfile();
};
extern IConsole* mainConsole;
}

class BF2Log {
public:
    bool getDebugCallbackDisabled() const;
    bool getDoNotDisplayErrorWindow() const;
    bool getExitInsteadOfErrorWindow() const;
    void addPureLogEntry(std::string const& s);
    void addLogEntry(DebugType type, std::string const& s);
    void displayErrorWindow(std::string const& msg, DebugType type);
    static void debugCallback(DebugType type, std::string const& module, std::string const& category,
                              int line, std::string const& expr, std::string const& text,
                              std::string const& file, void* data);
};

} }

namespace {
bool g_supressCurrent;
std::set<std::string> g_supressions;
}

namespace dice { namespace hfe {

void BF2Log::debugCallback(DebugType type, std::string const& module, std::string const& category,
                           int line, std::string const& expr, std::string const& text,
                           std::string const& file, void* data)
{
    BF2Log* log = 0;
    if (data) {
        log = (BF2Log*)data;
        if (log->getDebugCallbackDisabled() && ((unsigned)type <= 2 || type == 8))
            return;
    }

    std::string typeName;
    switch (type) {
    case 0: typeName = "Debug"; break;
    case 1: typeName = "Info"; break;
    case 2: typeName = "Warning"; break;
    case 3: typeName = "Assert"; break;
    case 5: typeName = "DxAssert"; break;
    case 6: typeName = "Error"; break;
    case 8: typeName = "Log"; break;
    default: break;
    }

    std::ostringstream ss;
    ss << file << '(' << line << "): " << typeName << ": " << module << ": ";
    if (type == 3)
        ss << "(" << expr << ") ";
    ss << text << std::endl;

    if (log) {
        if (type == 8) {
            log->addPureLogEntry(text + '\n');
            goto done;
        }
        log->addLogEntry(type, ss.str());
    }

    switch (type) {
    case 1:
        if (io::mainConsole)
            io::mainConsole->print(text + '\n');
        break;
    case 2: {
        std::ostringstream ws;
        ws << typeName << '[' << module << "] : " << text << std::endl;
        if (io::mainConsole)
            io::mainConsole->print(ws.str());
        break;
    }
    case 3:
    case 6: {
        std::ostringstream key;
        std::ostringstream os;
        os << "Debug assertion failed!" << std::endl << std::endl;
        std::string date("implement unix date here");
        os << "Version: " << std::string(BuildNrUtil::getBuildNrString()) << " Build date:" << date << std::endl;
        os << "Module: " << module << std::endl;
        os << "File: " << file << std::endl;
        os << "Line: " << line << std::endl;
        os << std::endl;
        if (!expr.empty())
            os << "Expression: " << expr << std::endl;
        if (!text.empty())
            os << "Text: " << text << std::endl;
        os << std::endl;
        os << "Current confile:" << io::mainConsole->getCurrentConfile();
        os << std::endl;
        if (log) {
            log->addPureLogEntry(os.str());
            if (!log->getDoNotDisplayErrorWindow())
                log->displayErrorWindow(os.str(), type);
            else if (log->getExitInsteadOfErrorWindow())
                exit(0);
            if (g_supressCurrent) {
                g_supressions.insert(key.str());
                g_supressCurrent = false;
            }
        }
        break;
    }
    case 5: {
        std::ostringstream os;
        os << "Debug assertion failed!" << std::endl << std::endl;
        os << "Module: " << module << std::endl;
        os << "File: " << file << std::endl;
        os << "Line: " << line << std::endl;
        os << std::endl;
        if (!text.empty())
            os << "Text: " << text << std::endl;
        if (!expr.empty())
            os << "Hres: " << expr.substr(0, expr.find('\n')) << std::endl;
        if (!expr.empty())
            os << "ErrorString: " << expr.substr(expr.find('\n') + 1);
        os << std::endl;
        if (log) {
            log->addPureLogEntry(os.str());
            if (!log->getDoNotDisplayErrorWindow())
                log->displayErrorWindow(os.str(), (DebugType)3);
            else if (log->getExitInsteadOfErrorWindow())
                exit(0);
        }
        break;
    }
    default:
        break;
    }
done:
    ;
}

} }
