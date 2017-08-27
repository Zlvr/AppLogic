#include "TextManip.h"

void TextManip::TextOutput( string text )
{
    cout << "String output: " << text << '\n';
}

void TextManip::ClearBuffer()
{
    cout << endl << "Buffer cleared with 'endl'\n";
}

void TextManip::TextInput( string & text )
{
    string textInp;
    cout << "String input: ";
    cin >> textInp;
    cout << '\n';
    text = textInp;
}

TextManip::TextManip()
{
    cout << "C - Create new class exemplar with type 'TextManip'\n";
    ClearBuffer(  );
}


TextManip::~TextManip()
{
    cout << "D - Destroy class exemplar with type 'TextManip'\n";
    ClearBuffer(  );
}
