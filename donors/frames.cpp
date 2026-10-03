// Donor: function frames, i.e. the prologue and epilogue themselves.
//
// Second and sixth of the unknown blocks ranked on 2026-08-28 are not idioms
// at all, they are epilogues:
//
//     ADD RSP,0X18 / POP RBX / POP R12 / RET            108 remaining functions
//     MOV RBX,[0X1A8+RSP] ... ADD RSP,0X1C8 / ...        48 remaining functions
//
// The corpus cannot teach them for a structural reason rather than a rare one.
// `objdump -dl` files a prologue under the SIGNATURE line and an epilogue under
// a BRACE, the corpus miner drops brace lines, and a signature line is refused
// as source text on purpose (it puts a declaration where the reader expects a
// statement). So every recovered function contains these blocks and none of
// them is indexed.
//
// A donor closes them because `resolve_line_text` attaches a closing brace to
// the declaration before it, so the run gets a line of real source. What varies
// across the family is only how many callee-saved registers are live and how
// big the frame is, so the file sweeps both: 1 to 5 saved registers, frames
// from a few words to several hundred bytes.
//
// The exact byte counts are not chosen here and could not be -- they follow
// from what the allocator does with this many live values. The point is to
// cover the spread, and the flag sets are swept on top.
namespace donors {

int frame_one_saved(int (*sink)(int), int a)
{
    int acc = sink(a);
    return acc + a;
}

int frame_two_saved(int (*sink)(int), int a, int b)
{
    int x = sink(a);
    int y = sink(b);
    return x + y;
}

int frame_three_saved(int (*sink)(int), int a, int b, int c)
{
    int x = sink(a);
    int y = sink(b);
    int z = sink(c);
    return x + y + z;
}

int frame_four_saved(int (*sink)(int), int a, int b, int c, int d)
{
    int w = sink(a);
    int x = sink(b);
    int y = sink(c);
    int z = sink(d);
    return w + x + y + z;
}

int frame_five_saved(int (*sink)(int), int a, int b, int c, int d, int e)
{
    int v = sink(a);
    int w = sink(b);
    int x = sink(c);
    int y = sink(d);
    int z = sink(e);
    return v + w + x + y + z;
}

// Frames sized by a local array rather than by register pressure: this is where
// the large `ADD RSP,0x1c8` shapes come from.
int frame_small_buffer(int (*sink)(const char*), int n)
{
    char buf[24];
    for (int i = 0; i < 24; ++i)
        buf[i] = (char)(n + i);
    return sink(buf);
}

int frame_medium_buffer(int (*sink)(const char*), int n)
{
    char buf[128];
    for (int i = 0; i < 128; ++i)
        buf[i] = (char)(n + i);
    return sink(buf);
}

int frame_large_buffer(int (*sink)(const char*), int n)
{
    char buf[256];
    for (int i = 0; i < 256; ++i)
        buf[i] = (char)(n + i);
    return sink(buf);
}

int frame_buffer_and_saved(int (*sink)(const char*), int (*other)(int),
                           int a, int b, int c)
{
    char buf[192];
    for (int i = 0; i < 192; ++i)
        buf[i] = (char)(a + i);
    int x = other(a);
    int y = other(b);
    int z = other(c);
    return sink(buf) + x + y + z;
}

// A tail with nothing to restore: the RET-only epilogue, so the table can tell
// it apart from the ones above instead of guessing.
int frame_leaf(int a, int b)
{
    return a * b + a;
}

}  // namespace donors
