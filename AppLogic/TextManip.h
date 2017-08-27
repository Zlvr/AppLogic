#pragma once
#include <string>
using std::string;
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

static class TextManip
{
public:
    static void TextOutput( string text );
    static void ClearBuffer(  );
    static void TextInput( string & text );

    TextManip();
    ~TextManip();
};
