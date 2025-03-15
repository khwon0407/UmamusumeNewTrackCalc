#include <iostream>
#include <cstring>
#include "RaceHeader.hpp"
#include "GroundInfo.hpp"

GroundInfo::GroundInfo(string ground) : ground(ground) {}
GroundInfo::~GroundInfo() {}
void GroundInfo::print() { cout << " " << ground; }

Terf::Terf() : GroundInfo("�ܵ�") { tempNew(); }
Terf::~Terf() { tempDelete(); }
bool Terf::isTerf() const { return true; }
bool Terf::isDirt() const { return false; }
void Terf::tempNew() {}
void Terf::tempDelete() {}

Dirt::Dirt() : GroundInfo("��Ʈ") { tempNew(); }
Dirt::~Dirt() { tempDelete(); }
bool Dirt::isTerf() const { return false; }
bool Dirt::isDirt() const { return true; }
void Dirt::tempNew() { DirtWin++; }
void Dirt::tempDelete() { DirtWin--; }