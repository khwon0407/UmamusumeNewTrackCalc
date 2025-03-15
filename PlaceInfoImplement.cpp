#include <iostream>
#include <cstring>
#include "RaceHeader.hpp"
#include "PlaceInfo.hpp"

using namespace std;

PlaceInfo::PlaceInfo(string place) : place(place) {}
PlaceInfo::~PlaceInfo() {}
void PlaceInfo::print() {
	cout << " " << place;
}

Oguri::Oguri(string place) : PlaceInfo(place) {}
Oguri::~Oguri() {}
void Oguri::updatePlus() { OguriWin++; }
void Oguri::updateMinus() { OguriWin--; }

Dohoku::Dohoku(string place) : PlaceInfo(place) {}
Dohoku::~Dohoku() {}
void Dohoku::updatePlus() { DohokuWin++; }
void Dohoku::updateMinus() { DohokuWin--; }

Kanto::Kanto(string place) : PlaceInfo(place) {}
Kanto::~Kanto() {}
void Kanto::updatePlus() { KantoWin++; }
void Kanto::updateMinus() { KantoWin--; }

Hotkaido::Hotkaido(string place) : PlaceInfo(place) {}
Hotkaido::~Hotkaido() {}
void Hotkaido::updatePlus() { HotkaidoWin++; }
void Hotkaido::updateMinus() { HotkaidoWin--; }

Kansai::Kansai(string place) : PlaceInfo(place) {}
Kansai::~Kansai() {}
void Kansai::updatePlus() { KansaiWin++; }
void Kansai::updateMinus() { KansaiWin--; }


Kokura::Kokura() : Oguri("코쿠라") {}
Kokura::~Kokura() {}
void Kokura::updatePlus() { Oguri::updatePlus(); }
void Kokura::updateMinus() { Oguri::updateMinus(); }

Hukusima::Hukusima() : Dohoku("후쿠시마") {}
Hukusima::~Hukusima() {}
void Hukusima::updatePlus() { Dohoku::updatePlus(); }
void Hukusima::updateMinus() { Dohoku::updateMinus(); }

Niegata::Niegata() : Dohoku("니이가타") {}
Niegata::~Niegata() {}
void Niegata::updatePlus() { Dohoku::updatePlus(); }
void Niegata::updateMinus() { Dohoku::updateMinus(); }

Tokyo::Tokyo() : Kanto("도쿄") {}
Tokyo::~Tokyo() {}
void Tokyo::updatePlus() { Kanto::updatePlus(); }
void Tokyo::updateMinus() { Kanto::updateMinus(); }

Nakayama::Nakayama() : Kanto("나카야마") {}
Nakayama::~Nakayama() {}
void Nakayama::updatePlus() { Kanto::updatePlus(); }
void Nakayama::updateMinus() { Kanto::updateMinus(); }

Oi::Oi() : Kanto("오이") {}
Oi::~Oi() {}
void Oi::updatePlus() { Kanto::updatePlus(); }
void Oi::updateMinus() { Kanto::updateMinus(); }

Satporo::Satporo() : Hotkaido("삿포로") {}
Satporo::~Satporo() {}
void Satporo::updatePlus() { Hotkaido::updatePlus(); }
void Satporo::updateMinus() { Hotkaido::updateMinus(); }

Hacodate::Hacodate() : Hotkaido("하코다테") {}
Hacodate::~Hacodate() {}
void Hacodate::updatePlus() { Hotkaido::updatePlus(); }
void Hacodate::updateMinus() { Hotkaido::updateMinus(); }

Chuco::Chuco() : Kansai("츄코") {}
Chuco::~Chuco() {}
void Chuco::updatePlus() { Kansai::updatePlus(); }
void Chuco::updateMinus() { Kansai::updateMinus(); }

Hansin::Hansin() : Kansai("한신") {}
Hansin::~Hansin() {}
void Hansin::updatePlus() { Kansai::updatePlus(); }
void Hansin::updateMinus() { Kansai::updateMinus(); }

Kyoto::Kyoto() : Kansai("교토") {}
Kyoto::~Kyoto() {}
void Kyoto::updatePlus() { Kansai::updatePlus(); }
void Kyoto::updateMinus() { Kansai::updateMinus(); }