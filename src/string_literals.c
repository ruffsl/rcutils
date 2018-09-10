#include <unicode/uchar.h>
void func()
{
    const char * l1 = "plain";
    (void) l1;
    const char * l2 = u8"utf-8";
    (void) l2;
    const char16_t * l3 = u"utf-16";
    (void) l3;
    const char32_t * l4 = U"uft-32";
    (void) l4;
}
