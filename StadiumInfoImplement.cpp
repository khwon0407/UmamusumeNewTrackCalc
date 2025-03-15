#include <iostream>
#include <cstring>
#include "RaceHeader.hpp"
#include "GroundInfo.hpp"
#include "DistInfo.hpp"
#include "StadiumInfo.hpp"


using namespace std;

StadiumInfo::StadiumInfo(GroundInfo* ground, DistInfo* dist) : ground(ground), dist(dist) {}
StadiumInfo::~StadiumInfo() { delete ground; delete dist; }
void StadiumInfo::print() { ground->print(); dist->print(); }
bool StadiumInfo::isTerf() const { return ground->isTerf(); }
bool StadiumInfo::isDirt() const { return ground->isDirt(); }


TerfShort::TerfShort(int dist) : StadiumInfo(new Terf, new Short(dist)) { tempNew(); }
TerfShort::~TerfShort() { tempDelete(); }
void TerfShort::tempNew() { TerfShortWin++; }
void TerfShort::tempDelete() { TerfShortWin--; }

TerfMile::TerfMile(int dist) : StadiumInfo(new Terf, new Mile(dist)) { tempNew(); }
TerfMile::~TerfMile() { tempDelete(); }
void TerfMile::tempNew() { TerfMileWin++; }
void TerfMile::tempDelete() { TerfMileWin--; }

TerfMiddle::TerfMiddle(int dist) : StadiumInfo(new Terf, new Middle(dist)) { tempNew(); }
TerfMiddle::~TerfMiddle() { tempDelete(); }
void TerfMiddle::tempNew() { TerfMiddleWin++; }
void TerfMiddle::tempDelete() { TerfMiddleWin--; }

TerfLong::TerfLong(int dist) : StadiumInfo(new Terf, new Long(dist)) { tempNew(); }
TerfLong::~TerfLong() { tempDelete(); }
void TerfLong::tempNew() { TerfShortWin++; }
void TerfLong::tempDelete() { TerfShortWin--; }


DirtShort::DirtShort(int dist) : StadiumInfo(new Dirt, new Short(dist)) { tempNew();; }
DirtShort::~DirtShort() { tempDelete(); }
void DirtShort::tempNew() { DirtShortWin++; }
void DirtShort::tempDelete() { DirtShortWin--; }

DirtMile::DirtMile(int dist) : StadiumInfo(new Dirt, new Mile(dist)) { tempNew(); }
DirtMile::~DirtMile() { tempDelete(); }
void DirtMile::tempNew() { DirtMileWin++; }
void DirtMile::tempDelete() { DirtMileWin--; }

DirtMiddle::DirtMiddle(int dist) : StadiumInfo(new Dirt, new Middle(dist)) { tempNew(); }
DirtMiddle::~DirtMiddle() { tempDelete(); }
void DirtMiddle::tempNew() { DirtMiddleWin++; }
void DirtMiddle::tempDelete() { DirtMiddleWin--; }