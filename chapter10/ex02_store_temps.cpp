#include "../text_lib/std_lib_facilities.h"

int main()
try {
    string fname = "raw_temps.txt";
    ofstream ofs { fname };
    if (!ofs) error("Could not write to file ", fname);

    ofs << 23 << ' ' << 48.2 << ' ' << 'f' << '\n'
        << 0  << ' ' << 47.7 << ' ' << 'f' << '\n'
        << 1  << ' ' << 47.1 << ' ' << 'f' << '\n'
        << 2  << ' ' << 46.5 << ' ' << 'f' << '\n'
        << 3  << ' ' << 45.6 << ' ' << 'f' << '\n'
        << 4  << ' ' << 44.8 << ' ' << 'f' << '\n'
        << 5  << ' ' << 43.9 << ' ' << 'f' << '\n'
        << 6  << ' ' << 43.2 << ' ' << 'f' << '\n'
        << 7  << ' ' << 42.9 << ' ' << 'f' << '\n'
        << 8  << ' ' << 43.0 << ' ' << 'f' << '\n'
        << 9  << ' ' << 44.1 << ' ' << 'f' << '\n'
        << 10 << ' ' << 46.2 << ' ' << 'f' << '\n'
        << 11 << ' ' << 47.5 << ' ' << 'f' << '\n'
        << 12 << ' ' << 49.2 << ' ' << 'f' << '\n'
        << 13 << ' ' << 53.4 << ' ' << 'f' << '\n'
        << 14 << ' ' << 57.1 << ' ' << 'f' << '\n'
        << 15 << ' ' << 60.3 << ' ' << 'f' << '\n'
        << 16 << ' ' << 63.8 << ' ' << 'f' << '\n'
        << 17 << ' ' << 64.4 << ' ' << 'f' << '\n'
        << 18 << ' ' << 63.8 << ' ' << 'f' << '\n'
        << 19 << ' ' << 62.2 << ' ' << 'f' << '\n'
        << 20 << ' ' << 60.7 << ' ' << 'f' << '\n'
        << 21 << ' ' << 58.9 << ' ' << 'f' << '\n'
        << 22 << ' ' << 55.6 << ' ' << 'f' << '\n'
        << 23 << ' ' << 52.2 << ' ' << 'f' << '\n'
        << 0  << ' ' << 47.7 << ' ' << 'f' << '\n'
        << 1  << ' ' << 47.1 << ' ' << 'f' << '\n'
        << 2  << ' ' << 46.5 << ' ' << 'f' << '\n'
        << 3  << ' ' << 45.6 << ' ' << 'f' << '\n'
        << 4  << ' ' << 44.8 << ' ' << 'f' << '\n'
        << 5  << ' ' << 43.9 << ' ' << 'f' << '\n'
        << 6  << ' ' << 43.2 << ' ' << 'f' << '\n'
        << 7  << ' ' << 42.9 << ' ' << 'f' << '\n'
        << 8  << ' ' << 43.0 << ' ' << 'f' << '\n'
        << 9  << ' ' << 44.1 << ' ' << 'f' << '\n'
        << 10 << ' ' << 46.2 << ' ' << 'f' << '\n'
        << 11 << ' ' << 47.5 << ' ' << 'f' << '\n'
        << 12 << ' ' << 49.2 << ' ' << 'f' << '\n'
        << 13 << ' ' << 53.4 << ' ' << 'f' << '\n'
        << 14 << ' ' << 57.1 << ' ' << 'f' << '\n'
        << 15 << ' ' << 60.3 << ' ' << 'f' << '\n'
        << 16 << ' ' << 63.8 << ' ' << 'f' << '\n'
        << 17 << ' ' << 64.4 << ' ' << 'f' << '\n'
        << 18 << ' ' << 63.8 << ' ' << 'f' << '\n'
        << 19 << ' ' << 62.2 << ' ' << 'f' << '\n'
        << 20 << ' ' << 60.7 << ' ' << 'f' << '\n'
        << 21 << ' ' << 58.9 << ' ' << 'f' << '\n'
        << 22 << ' ' << 55.6 << ' ' << 'f' << '\n'
        << 23 << ' ' << 52.2 << ' ' << 'f' << '\n'
        << 0  << ' ' << 8 << ' ' << 'c' << '\n'
        << 1  << ' ' << 7 << ' ' << 'c' << '\n'
        << 2  << ' ' << 6 << ' ' << 'c' << '\n'
        << 3  << ' ' << 5 << ' ' << 'c' << '\n'
        << 4  << ' ' << 5 << ' ' << 'c' << '\n'
        << 5  << ' ' << 5 << ' ' << 'c' << '\n'
        << 6  << ' ' << 6 << ' ' << 'c' << '\n'
        << 7  << ' ' << 7 << ' ' << 'c' << '\n'
        << 8  << ' ' << 7 << ' ' << 'c' << '\n'
        << 9  << ' ' << 7 << ' ' << 'c' << '\n'
        << 10 << ' ' << 8 << ' ' << 'c' << '\n'
        << 11 << ' ' << 8 << ' ' << 'c' << '\n'
        << 12 << ' ' << 10 << ' ' << 'c' << '\n'
        << 13 << ' ' << 11 << ' ' << 'c' << '\n'
        << 14 << ' ' << 12 << ' ' << 'c' << '\n'
        << 15 << ' ' << 13 << ' ' << 'c' << '\n'
        << 16 << ' ' << 13 << ' ' << 'c' << '\n'
        << 17 << ' ' << 13 << ' ' << 'c' << '\n'
        << 18 << ' ' << 12 << ' ' << 'c' << '\n'
        << 19 << ' ' << 11 << ' ' << 'c' << '\n'
        << 20 << ' ' << 10 << ' ' << 'c' << '\n'
        << 21 << ' ' << 9 << ' ' << 'c' << '\n'
        << 22 << ' ' << 8 << ' ' << 'c' << '\n'
        << 23 << ' ' << 8 << ' ' << 'c' << '\n';

    ofs.close();
}
catch(exception& e) {
    cerr << "Error: " << e.what() << '\n';
    return 1;
}
catch(...) {
    cerr << "Something went horribly wrong..\n";
    return 2;
}
