// FUNCTION: BF2 0x79c6d0
// Target: 0x79c6d0 dice::hfe::ai::DebugRenderer::draw3dText(dice::hfe::Vec3 const&, std::vector<std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > > const&, int, unsigned int, dice::hfe::ai::AITextAlignmentX, dice::hfe::ai::AITextAlignmentY) const
// Compiler: gcc-3.4
// Flags: -O2

#include <vector>
#include <string>

namespace dice { namespace hfe {
struct Vec2 {
    float x, y;
};
struct Vec3 {
    float x, y, z;
};
} }

namespace dice { namespace hfe { namespace ai {

enum AITextAlignmentX {
    ALIGN_X_0 = 0,
    ALIGN_X_1 = 1
};

enum AITextAlignmentY {
    ALIGN_Y_0 = 0,
    ALIGN_Y_1 = 1
};

class IBFDebugTextWriter {
public:
    virtual ~IBFDebugTextWriter();
    virtual void dummy1();
    virtual void dummy2();
    virtual void dummy3();
    virtual void dummy4();
    virtual void dummy5();
    virtual void dummy6();
    virtual void dummy7();
    virtual void dummy8();
    virtual void dummy9();
    virtual void dummy10();
    virtual void dummy11();
    virtual void dummy12();
    virtual void drawScreenText(int x, int y, unsigned int color, std::vector<std::string> const& lines, int font, bool alignX, bool alignY);
    virtual void dummy14();
    virtual void draw3dText(dice::hfe::Vec3 const& pos, unsigned int color, std::vector<std::string> const& lines, int font, bool alignX, bool alignY);
};

struct RenderSingletonServer {
    static IBFDebugTextWriter* m_BFDebugTextWriter;
};

class DebugRenderer {
public:
    virtual ~DebugRenderer();
    virtual void drawAll();
    virtual void reset();
    virtual void dummy4();
    virtual void dummy5();
    virtual void drawScreenText(dice::hfe::Vec2 const& pos, std::vector<std::string> const& lines, int font, unsigned int color, AITextAlignmentX alignX, AITextAlignmentY alignY) const;
    virtual void draw3dText(dice::hfe::Vec3 const& pos, std::vector<std::string> const& lines, int font, unsigned int color, AITextAlignmentX alignX, AITextAlignmentY alignY) const;
};

void DebugRenderer::draw3dText(dice::hfe::Vec3 const& pos, std::vector<std::string> const& lines, int font, unsigned int color, AITextAlignmentX alignX, AITextAlignmentY alignY) const {
    RenderSingletonServer::m_BFDebugTextWriter->draw3dText(pos, color, lines, font, alignX == 1, alignY != 0);
}

} } }
