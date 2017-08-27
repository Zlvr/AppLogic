#pragma once
#include "TextManip.h"
#include <ctime>
#include <ratio>
#include <chrono>
using namespace std;
using namespace std::chrono;
#include <sstream>

class TextManip;

class App
{
private:
    bool isRun;
    TextManip *textManip;
    high_resolution_clock::time_point t1;
    high_resolution_clock::time_point t2;
    duration< double > time_span;
    string text;
    string output;
public:
    App(  );
    int Execute(  );
    void Exit(  );
};

