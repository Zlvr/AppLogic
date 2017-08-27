#include "App.h"

App::App()
{
    isRun = true;
}

int App::Execute()
{
    textManip = new TextManip(  );
    while ( isRun )
    {
        t1 = high_resolution_clock::now();
        textManip->TextInput( text );
        textManip->TextOutput( text );
        if ( text.c_str(  ) == "exit" )
            Exit(  );
        t2 = high_resolution_clock::now();
        duration< double > time_span = duration_cast< duration< double > >( t2 - t1 );
        stringstream ss;
        ss << time_span.count();
        output = "T - Time of Cycle = " + ss.str(  ) + "\nE - End of Cycle.\n";
        textManip->TextOutput( output );
    }
    return 0;
}

void App::Exit()
{
    cout << "\n";
    system( "pause" );
}

