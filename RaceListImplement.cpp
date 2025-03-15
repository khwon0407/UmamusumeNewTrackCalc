#include "RaceHeader.hpp"
#include "RaceBase.hpp"
#include "GradeInfo.hpp"
#include "PlaceInfo.hpp"
#include "StadiumInfo.hpp"
#include "RaceList.hpp"


HacodateJrS::HacodateJrS() : Race("하코다테 주니어 스테이크스", new G3, new Hacodate, new TerfShort(1200)) { JuniorWin++; }
HacodateJrS::~HacodateJrS() { JuniorWin--; }
void HacodateJrS::tempNew() { Race::tempNew(); JuniorWin++; }
void HacodateJrS::tempDelete() { Race::tempDelete(); JuniorWin--; }

ChucoJrS::ChucoJrS() : Race("츄코 주니어 스테이크스", new OP, new Chuco, new TerfMile(1600)) { JuniorWin++; }
ChucoJrS::~ChucoJrS() { JuniorWin--; }
void ChucoJrS::tempNew() { Race::tempNew(); JuniorWin++; }
void ChucoJrS::tempDelete() { Race::tempDelete(); JuniorWin--; }

Dalia::Dalia() : Race("달리아상", new OP, new Niegata, new TerfShort(1400)) {}
Dalia::~Dalia() {}
void Dalia::tempNew() { Race::tempNew(); }
void Dalia::tempDelete() { Race::tempDelete(); }

Pheonix::Pheonix() : Race("피닉스상", new OP, new Kokura, new TerfShort(1200)) {}
Pheonix::~Pheonix() {}
void Pheonix::tempNew() { Race::tempNew(); }
void Pheonix::tempDelete() { Race::tempDelete(); }

Cosmos::Cosmos() :Race("코스모스상", new OP, new Satporo, new TerfMile(1800)) {}
Cosmos::~Cosmos() {}
void Cosmos::tempNew() { Race::tempNew(); }
void Cosmos::tempDelete() { Race::tempDelete(); }

NiegataJrS::NiegataJrS() : Race("니이가타 주니어 스테이크스", new G3, new Niegata, new TerfMile(1600)) { JuniorWin++; }
NiegataJrS::~NiegataJrS() { JuniorWin--; }
void NiegataJrS::tempNew() { Race::tempNew(); JuniorWin++; }
void NiegataJrS::tempDelete() { Race::tempDelete(); JuniorWin--; }

Clover::Clover() : Race("클로버상", new OP, new Satporo, new TerfMile(1500)) {}
Clover::~Clover() {}
void Clover::tempNew() { Race::tempNew(); }
void Clover::tempDelete() { Race::tempDelete(); }

SatporoJrS::SatporoJrS() : Race("삿포로 주니어 스테이크스", new G3, new Satporo, new TerfMile(1800)) { JuniorWin++; }
SatporoJrS::~SatporoJrS() { JuniorWin--; }
void SatporoJrS::tempNew() { Race::tempNew(); JuniorWin++; }
void SatporoJrS::tempDelete() { Race::tempDelete(); JuniorWin--; }

KokuraJrS::KokuraJrS() : Race("코쿠라 주니어 스테이크스", new G3, new Kokura, new TerfShort(1200)) { JuniorWin++; }
KokuraJrS::~KokuraJrS() { JuniorWin--; }
void KokuraJrS::tempNew() { Race::tempNew(); JuniorWin++; }
void KokuraJrS::tempDelete() { Race::tempDelete(); JuniorWin--; }

Maylily::Maylily() : Race("은방울꽃상", new OP, new Satporo, new TerfShort(1200)) {}
Maylily::~Maylily() {}
void Maylily::tempNew() { Race::tempNew(); }
void Maylily::tempDelete() { Race::tempDelete(); }

DaisyS::DaisyS() : Race("들국화 스테이크스", new OP, new Hansin, new TerfMile(1800)) {}
DaisyS::~DaisyS() {}
void DaisyS::tempNew() { Race::tempNew(); }
void DaisyS::tempDelete() { Race::tempDelete(); }

NewyorkAster::NewyorkAster() : Race("우선국상", new PreOP, new Nakayama, new TerfMile(1600)) {}
NewyorkAster::~NewyorkAster() {}
void NewyorkAster::tempNew() { Race::tempNew(); }
void NewyorkAster::tempDelete() { Race::tempDelete(); }

HibiscusS::HibiscusS() : Race("부용꽃 스테이크스", new OP, new Nakayama, new TerfMiddle(2000)) {}
HibiscusS::~HibiscusS() {}
void HibiscusS::tempNew() { Race::tempNew(); }
void HibiscusS::tempDelete() { Race::tempDelete(); }

DorajiS::DorajiS() : Race("도라지 스테이크스", new OP, new Hansin, new TerfShort(1400)) {}
DorajiS::~DorajiS() {}
void DorajiS::tempNew() { Race::tempNew(); }
void DorajiS::tempDelete() { Race::tempDelete(); }

HongchoS::HongchoS() : Race("홍초 스테이크스", new OP, new Nakayama, new TerfShort(1200)) {}
HongchoS::~HongchoS() {}
void HongchoS::tempNew() { Race::tempNew(); }
void HongchoS::tempDelete() { Race::tempDelete(); }

Sapran::Sapran() : Race("사프란상", new PreOP, new Nakayama, new TerfMile(1600)) {}
Sapran::~Sapran() {}
void Sapran::tempNew() { Race::tempNew(); }
void Sapran::tempDelete() { Race::tempDelete(); }

SaudiRoyal::SaudiRoyal() : Race("사우디아라비아 로열컵", new G3, new Tokyo, new TerfMile(1600)) { SaudiWin++; }
SaudiRoyal::~SaudiRoyal() { SaudiWin--; }
void SaudiRoyal::tempNew() { Race::tempNew(); SaudiWin++; }
void SaudiRoyal::tempDelete() { Race::tempDelete(); SaudiWin--; }

MapleS::MapleS() : Race("단풍 스테이크스", new OP, new Kyoto, new TerfShort(1400)) {}
MapleS::~MapleS() {}
void MapleS::tempNew() { Race::tempNew(); }
void MapleS::tempDelete() { Race::tempDelete(); }

PurpleDaisy::PurpleDaisy() : Race("자국화상", new PreOP, new Kyoto, new TerfMiddle(2000)) {}
PurpleDaisy::~PurpleDaisy() {}
void PurpleDaisy::tempNew() { Race::tempNew(); }
void PurpleDaisy::tempDelete() { Race::tempDelete(); }

Gentian::Gentian() : Race("용담상", new PreOP, new Kyoto, new TerfShort(1400)) {}
Gentian::~Gentian() {}
void Gentian::tempNew() { Race::tempNew(); }
void Gentian::tempDelete() { Race::tempDelete(); }

Platanus::Platanus() : Race("플라타너스상", new PreOP, new Tokyo, new DirtMile(1600)) {}
Platanus::~Platanus() {}
void Platanus::tempNew() { Race::tempNew(); }
void Platanus::tempDelete() { Race::tempDelete(); }

ArtemisS::ArtemisS() : Race("아르테미스 스테이크스", new G3, new Tokyo, new TerfMile(1600)) {}
ArtemisS::~ArtemisS() {}
void ArtemisS::tempNew() { Race::tempNew(); }
void ArtemisS::tempDelete() { Race::tempDelete(); }

IvyS::IvyS() : Race("아이비 스테이크스", new OP, new Tokyo, new TerfMile(1800)) {}
IvyS::~IvyS() {}
void IvyS::tempNew() { Race::tempNew(); }
void IvyS::tempDelete() { Race::tempDelete(); }

ArtemisiaS::ArtemisiaS() : Race("사철쑥 스테이크스", new OP, new Kyoto, new TerfMile(1800)) {}
ArtemisiaS::~ArtemisiaS() {}
void ArtemisiaS::tempNew() { Race::tempNew(); }
void ArtemisiaS::tempDelete() { Race::tempDelete(); }

Gilyflower::Gilyflower() : Race("패랭이꽃상", new PreOP, new Kyoto, new DirtShort(1400)) {}
Gilyflower::~Gilyflower() {}
void Gilyflower::tempNew() { Race::tempNew(); }
void Gilyflower::tempDelete() { Race::tempDelete(); }

KeioJrS::KeioJrS() : Race("케이오배 주니어 스테이크스", new G2, new Tokyo, new TerfShort(1400)) { JuniorWin++; }
KeioJrS::~KeioJrS() { JuniorWin--; }
void KeioJrS::tempNew() { Race::tempNew(); JuniorWin++; }
void KeioJrS::tempDelete() { Race::tempDelete(); JuniorWin--; }

DailyJrS::DailyJrS() : Race("데일리배 주니어 스테이크스", new G2, new Kyoto, new TerfMile(1600)) { JuniorWin++; }
DailyJrS::~DailyJrS() { JuniorWin--; }
void DailyJrS::tempNew() { Race::tempNew(); JuniorWin++; }
void DailyJrS::tempDelete() { Race::tempDelete(); JuniorWin--; }

FantasyS::FantasyS() : Race("판타지 스테이크스", new G3, new Kyoto, new TerfShort(1400)) {}
FantasyS::~FantasyS() {}
void FantasyS::tempNew() { Race::tempNew(); }
void FantasyS::tempDelete() { Race::tempDelete(); }

HukusimaJrS::HukusimaJrS() : Race("후쿠시마 주니어 스테이크스", new OP, new Hukusima, new TerfShort(1200)) { JuniorWin++; }
HukusimaJrS::~HukusimaJrS() { JuniorWin--; }
void HukusimaJrS::tempNew() { Race::tempNew(); JuniorWin++; }
void HukusimaJrS::tempDelete() { Race::tempDelete(); JuniorWin--; }

HundredGrassSp::HundredGrassSp() : Race("백일초 특별", new PreOP, new Tokyo, new TerfMiddle(2000)) {}
HundredGrassSp::~HundredGrassSp() {}
void HundredGrassSp::tempNew() { Race::tempNew(); }
void HundredGrassSp::tempDelete() { Race::tempDelete(); }

GoldenTreeSp::GoldenTreeSp() : Race("금목서 특별", new PreOP, new Hukusima, new TerfMile(1800)) {}
GoldenTreeSp::~GoldenTreeSp() {}
void GoldenTreeSp::tempNew() { Race::tempNew(); }
void GoldenTreeSp::tempDelete() { Race::tempDelete(); }

LoveGrass::LoveGrass() : Race("사랑초상", new PreOP, new Tokyo, new DirtShort(1400)) {}
LoveGrass::~LoveGrass() {}
void LoveGrass::tempNew() { Race::tempNew(); }
void LoveGrass::tempDelete() { Race::tempDelete(); }

YellowDaisy::YellowDaisy() : Race("황국화상", new PreOP, new Kyoto, new TerfMiddle(2000)) {}
YellowDaisy::~YellowDaisy() {}
void YellowDaisy::tempNew() { Race::tempNew(); }
void YellowDaisy::tempDelete() { Race::tempDelete(); }

TokyoSportsJrS::TokyoSportsJrS() : Race("도쿄 스포츠배 주니어 스테이크스", new G3, new Tokyo, new TerfMile(1800)) { JuniorWin++; }
TokyoSportsJrS::~TokyoSportsJrS() { JuniorWin--; }
void TokyoSportsJrS::tempNew() { Race::tempNew(); JuniorWin++; }
void TokyoSportsJrS::tempDelete() { Race::tempDelete(); JuniorWin--; }

KyotoJrS::KyotoJrS() : Race("교토 주니어 스테이크스", new G3, new Kyoto, new TerfMiddle(2000)) { JuniorWin++; }
KyotoJrS::~KyotoJrS() { JuniorWin--; }
void KyotoJrS::tempNew() { Race::tempNew(); JuniorWin++; }
void KyotoJrS::tempDelete() { Race::tempDelete(); JuniorWin--; }

Ilex::Ilex() :Race("감탕나무상", new PreOP, new Kyoto, new DirtMile(1800)) {}
Ilex::~Ilex() {}
void Ilex::tempNew() { Race::tempNew(); }
void Ilex::tempDelete() { Race::tempDelete(); }

RedPine::RedPine() : Race("적송상", new PreOP, new Tokyo, new TerfMile(1600)) {}
RedPine::~RedPine() {}
void RedPine::tempNew() { Race::tempNew(); }
void RedPine::tempDelete() { Race::tempDelete(); }

WindFlower::WindFlower() : Race("추명국상", new PreOP, new Kyoto, new TerfShort(1400)) {}
WindFlower::~WindFlower() {}
void WindFlower::tempNew() { Race::tempNew(); }
void WindFlower::tempDelete() { Race::tempDelete(); }

Cattleya::Cattleya() : Race("카틀레아상", new PreOP, new Tokyo, new DirtMile(1600)) {}
Cattleya::~Cattleya() {}
void Cattleya::tempNew() { Race::tempNew(); }
void Cattleya::tempDelete() { Race::tempDelete(); }

Begonia::Begonia() : Race("베고니아상", new PreOP, new Tokyo, new TerfMile(1600)) {}
Begonia::~Begonia() {}
void Begonia::tempNew() { Race::tempNew(); }
void Begonia::tempDelete() { Race::tempDelete(); }

WhiteDaisy::WhiteDaisy() : Race("백국화상", new PreOP, new Kyoto, new TerfMile(1600)) {}
WhiteDaisy::~WhiteDaisy() {}
void WhiteDaisy::tempNew() { Race::tempNew(); }
void WhiteDaisy::tempDelete() { Race::tempDelete(); }

Cauliflower::Cauliflower() : Race("모란채상", new PreOP, new Nakayama, new TerfMiddle(2000)) {}
Cauliflower::~Cauliflower() {}
void Cauliflower::tempNew() { Race::tempNew(); }
void Cauliflower::tempDelete() { Race::tempDelete(); }

GoldPine::GoldPine() : Race("금송상", new PreOP, new Chuco, new TerfMile(1600)) {}
GoldPine::~GoldPine() {}
void GoldPine::tempNew() { Race::tempNew(); }
void GoldPine::tempDelete() { Race::tempDelete(); }

AsahiFuturityS::AsahiFuturityS() : Race("아사히배 퓨처리티 스테이크스", new G1, new Hansin, new TerfMile(1600)) {}
AsahiFuturityS::~AsahiFuturityS() {}
void AsahiFuturityS::tempNew() { Race::tempNew(); }
void AsahiFuturityS::tempDelete() { Race::tempDelete(); }

HansinJuvnileFillis::HansinJuvnileFillis() : Race("한신 쥬버나일 필리스", new G1, new Hansin, new TerfMile(1600)) { HansinJFWin++; }
HansinJuvnileFillis::~HansinJuvnileFillis() { HansinJFWin--; }
void HansinJuvnileFillis::tempNew() { Race::tempNew(); HansinJFWin++; }
void HansinJuvnileFillis::tempDelete() { Race::tempDelete(); HansinJFWin--; }

CoralAdisia::CoralAdisia() : Race("백량금상", new PreOP, new Hansin, new TerfShort(1400)) {}
CoralAdisia::~CoralAdisia() {}
void CoralAdisia::tempNew() { Race::tempNew(); }
void CoralAdisia::tempDelete() { Race::tempDelete(); }

BlackPine::BlackPine() : Race("흑송상", new PreOP, new Nakayama, new TerfShort(1200)) {}
BlackPine::~BlackPine() {}
void BlackPine::tempNew() { Race::tempNew(); }
void BlackPine::tempDelete() { Race::tempDelete(); }

Erica::Erica() : Race("에리카상", new PreOP, new Hansin, new TerfMiddle(2000)) {}
Erica::~Erica() {}
void Erica::tempNew() { Race::tempNew(); }
void Erica::tempDelete() { Race::tempDelete(); }

TeolMuwhi::TeolMuwhi() : Race("털머위상", new PreOP, new Chuco, new TerfShort(1400)) {}
TeolMuwhi::~TeolMuwhi() {}
void TeolMuwhi::tempNew() { Race::tempNew(); }
void TeolMuwhi::tempDelete() { Race::tempDelete(); }

Holly::Holly() : Race("호랑가시나무상", new PreOP, new Nakayama, new TerfMile(1600)) {}
Holly::~Holly() {}
void Holly::tempNew() { Race::tempNew(); }
void Holly::tempDelete() { Race::tempDelete(); }

Sanqua::Sanqua() : Race("산다화상", new PreOP, new Hansin, new TerfShort(1200)) {}
Sanqua::~Sanqua() {}
void Sanqua::tempNew() { Race::tempNew(); }
void Sanqua::tempDelete() { Race::tempDelete(); }

WinterCamellia::WinterCamellia() : Race("겨울동백상", new PreOP, new Chuco, new DirtShort(1400)) {}
WinterCamellia::~WinterCamellia() {}
void WinterCamellia::tempNew() { Race::tempNew(); }
void WinterCamellia::tempDelete() { Race::tempDelete(); }

HopefulS::HopefulS() : Race("호프풀 스테이크스", new G1, new Nakayama, new TerfMiddle(2000)) {}
HopefulS::~HopefulS() {}
void HopefulS::tempNew() { Race::tempNew(); }
void HopefulS::tempDelete() { Race::tempDelete(); }

ChristmasRoseS::ChristmasRoseS() : Race("크리스마스 로즈 스테이크스", new OP, new Nakayama, new TerfShort(1200)) {}
ChristmasRoseS::~ChristmasRoseS() {}
void ChristmasRoseS::tempNew() { Race::tempNew(); }
void ChristmasRoseS::tempDelete() { Race::tempDelete(); }

Sarcandra::Sarcandra() : Race("죽절초상", new PreOP, new Hansin, new TerfMile(1600)) {}
Sarcandra::~Sarcandra() {}
void Sarcandra::tempNew() { Race::tempNew(); }
void Sarcandra::tempDelete() { Race::tempDelete(); }

Keisei::Keisei() : Race("케이세이배", new G3, new Nakayama, new TerfMiddle(2000)) {}
Keisei::~Keisei() {}
void Keisei::tempNew() { Race::tempNew(); }
void Keisei::tempDelete() { Race::tempDelete(); }

SinjanAnniversary::SinjanAnniversary() : Race("신잔 기념", new G3, new Kyoto, new TerfMile(1600)) {}
SinjanAnniversary::~SinjanAnniversary() {}
void SinjanAnniversary::tempNew() { Race::tempNew(); }
void SinjanAnniversary::tempDelete() { Race::tempDelete(); }

FairyS::FairyS() : Race("페어리 스테이크스", new G3, new Nakayama, new TerfMile(1600)) {}
FairyS::~FairyS() {}
void FairyS::tempNew() { Race::tempNew(); }
void FairyS::tempDelete() { Race::tempDelete(); }

JrCup::JrCup() : Race("주니어컵", new OP, new Nakayama, new TerfMile(1600)) {}
JrCup::~JrCup() {}
void JrCup::tempNew() { Race::tempNew(); }
void JrCup::tempDelete() { Race::tempDelete(); }

RedPlum::RedPlum() : Race("홍매화 스테이크스", new OP, new Kyoto, new TerfShort(1400)) {}
RedPlum::~RedPlum() {}
void RedPlum::tempNew() { Race::tempNew(); }
void RedPlum::tempDelete() { Race::tempDelete(); }

WakagomaS::WakagomaS() : Race("와카고마 스테이크스", new OP, new Kyoto, new TerfMiddle(2000)) {}
WakagomaS::~WakagomaS() {}
void WakagomaS::tempNew() { Race::tempNew(); }
void WakagomaS::tempDelete() { Race::tempDelete(); }

CroakersS::CroakersS() : Race("크로커스 스테이크스", new OP, new Tokyo, new TerfShort(1400)) {}
CroakersS::~CroakersS() {}
void CroakersS::tempNew() { Race::tempNew(); }
void CroakersS::tempDelete() { Race::tempDelete(); }

Kisaragi::Kisaragi() : Race("키사라기상", new G3, new Kyoto, new TerfMile(1800)) {}
Kisaragi::~Kisaragi() {}
void Kisaragi::tempNew() { Race::tempNew(); }
void Kisaragi::tempDelete() { Race::tempDelete(); }

QueenCup::QueenCup() : Race("퀸컵", new G3, new Tokyo, new TerfMile(1600)) {}
QueenCup::~QueenCup() {}
void QueenCup::tempNew() { Race::tempNew(); }
void QueenCup::tempDelete() { Race::tempDelete(); }

KyodoCommunication::KyodoCommunication() : Race("쿄도통신배", new G3, new Tokyo, new TerfMile(1800)) {}
KyodoCommunication::~KyodoCommunication() {}
void KyodoCommunication::tempNew() { Race::tempNew(); }
void KyodoCommunication::tempDelete() { Race::tempDelete(); }

ElfinS::ElfinS() : Race("엘핀 스테이크스", new OP, new Kyoto, new TerfMile(1600)) {}
ElfinS::~ElfinS() {}
void ElfinS::tempNew() { Race::tempNew(); }
void ElfinS::tempDelete() { Race::tempDelete(); }

VioletS::VioletS() : Race("제비꽃 스테이크스", new OP, new Hansin, new TerfMiddle(2200)) {}
VioletS::~VioletS() {}
void VioletS::tempNew() { Race::tempNew(); }
void VioletS::tempDelete() { Race::tempDelete(); }

HyacinthS::HyacinthS() : Race("히아신스 스테이크스", new OP, new Tokyo, new DirtMile(1600)) {}
HyacinthS::~HyacinthS() {}
void HyacinthS::tempNew() { Race::tempNew(); }
void HyacinthS::tempDelete() { Race::tempDelete(); }

MagaretS::MagaretS() : Race("마가렛 스테이크스", new OP, new Hansin, new TerfShort(1200)) {}
MagaretS::~MagaretS() {}
void MagaretS::tempNew() { Race::tempNew(); }
void MagaretS::tempDelete() { Race::tempDelete(); }

Yayoi::Yayoi() : Race("야요이상", new G2, new Nakayama, new TerfMiddle(2000)) {}
Yayoi::~Yayoi() {}
void Yayoi::tempNew() { Race::tempNew(); }
void Yayoi::tempDelete() { Race::tempDelete(); }

Tulip::Tulip() : Race("튤립상", new G2, new Hansin, new TerfMile(1600)) {}
Tulip::~Tulip() {}
void Tulip::tempNew() { Race::tempNew(); }
void Tulip::tempDelete() { Race::tempDelete(); }

FillisLevue::FillisLevue() : Race("필리스 레뷰", new G2, new Hansin, new TerfShort(1400)) {}
FillisLevue::~FillisLevue() {}
void FillisLevue::tempNew() { Race::tempNew(); }
void FillisLevue::tempDelete() { Race::tempDelete(); }

AnemoneS::AnemoneS() : Race("아네모네 스테이크스", new OP, new Nakayama, new TerfMile(1600)) {}
AnemoneS::~AnemoneS() {}
void AnemoneS::tempNew() { Race::tempNew(); }
void AnemoneS::tempDelete() { Race::tempDelete(); }

UpDragonS::UpDragonS() : Race("승룡 스테이크스", new OP, new Chuco, new DirtShort(1400)) {}
UpDragonS::~UpDragonS() {}
void UpDragonS::tempNew() { Race::tempNew(); }
void UpDragonS::tempDelete() { Race::tempDelete(); }

SpringS::SpringS() : Race("스프링 스테이크스", new G2, new Nakayama, new TerfMile(1800)) {}
SpringS::~SpringS() {}
void SpringS::tempNew() { Race::tempNew(); }
void SpringS::tempDelete() { Race::tempDelete(); }

FalconS::FalconS() : Race("팔콘 스테이크스", new G3, new Chuco, new TerfShort(1400)) {}
FalconS::~FalconS() {}
void FalconS::tempNew() { Race::tempNew(); }
void FalconS::tempDelete() { Race::tempDelete(); }

FlowerCup::FlowerCup() : Race("플라워컵", new G3, new Nakayama, new TerfMile(1800)) {}
FlowerCup::~FlowerCup() {}
void FlowerCup::tempNew() { Race::tempNew(); }
void FlowerCup::tempDelete() { Race::tempDelete(); }

Mainichi::Mainichi() : Race("마이니치배", new G3, new Hansin, new TerfMile(1800)) {}
Mainichi::~Mainichi() {}
void Mainichi::tempNew() { Race::tempNew(); }
void Mainichi::tempDelete() { Race::tempDelete(); }

NewLeafS::NewLeafS() : Race("새잎 스테이크스", new OP, new Hansin, new TerfMiddle(2000)) {}
NewLeafS::~NewLeafS() {}
void NewLeafS::tempNew() { Race::tempNew(); }
void NewLeafS::tempDelete() { Race::tempDelete(); }

Satsuki::Satsuki() : Race("사츠키상", new G1, new Nakayama, new TerfMiddle(2000)) { SatsukiWin++; }
Satsuki::~Satsuki() { SatsukiWin--; }
void Satsuki::tempNew() { Race::tempNew(); SatsukiWin++; }
void Satsuki::tempDelete() { Race::tempDelete(); SatsukiWin--; }

Sakura::Sakura() : Race("벚꽃상", new G1, new Hansin, new TerfMile(1600)) { SakuraWin++; }
Sakura::~Sakura() { SakuraWin--; }
void Sakura::tempNew() { Race::tempNew(); SakuraWin++; }
void Sakura::tempDelete() { Race::tempDelete(); SakuraWin--; }

NewZealandTrophie::NewZealandTrophie() : Race("뉴질랜드 트로피", new G2, new Nakayama, new TerfMile(1600)) { NewZealandWin++; }
NewZealandTrophie::~NewZealandTrophie() { NewZealandWin--; }
void NewZealandTrophie::tempNew() { Race::tempNew(); NewZealandWin++; }
void NewZealandTrophie::tempDelete() { Race::tempDelete(); NewZealandWin--; }

AllingtonCup::AllingtonCup() : Race("알링턴컵", new G3, new Hansin, new TerfMile(1600)) {}
AllingtonCup::~AllingtonCup() {}
void AllingtonCup::tempNew() { Race::tempNew(); }
void AllingtonCup::tempDelete() { Race::tempDelete(); }

HideDragonS::HideDragonS() : Race("복룡 스테이크스", new OP, new Nakayama, new DirtMile(1800)) {}
HideDragonS::~HideDragonS() {}
void HideDragonS::tempNew() { Race::tempNew(); }
void HideDragonS::tempDelete() { Race::tempDelete(); }

ForgetMeNot::ForgetMeNot() : Race("물망초상", new OP, new Hansin, new TerfMiddle(2000)) {}
ForgetMeNot::~ForgetMeNot() {}
void ForgetMeNot::tempNew() { Race::tempNew(); }
void ForgetMeNot::tempDelete() { Race::tempDelete(); }

BlueLeaf::BlueLeaf() : Race("청엽상", new G2, new Tokyo, new TerfMiddle(2400)) {}
BlueLeaf::~BlueLeaf() {}
void BlueLeaf::tempNew() { Race::tempNew(); }
void BlueLeaf::tempDelete() { Race::tempDelete(); }

FloraS::FloraS() : Race("플로라 스테이크스", new G2, new Tokyo, new TerfMiddle(2000)) {}
FloraS::~FloraS() {}
void FloraS::tempNew() { Race::tempNew(); }
void FloraS::tempDelete() { Race::tempDelete(); }

TangerineS::TangerineS() : Race("밀감 스테이크스", new OP, new Kyoto, new TerfShort(1400)) {}
TangerineS::~TangerineS() {}
void TangerineS::tempNew() { Race::tempNew(); }
void TangerineS::tempDelete() { Race::tempDelete(); }

DanoS::DanoS() : Race("단오 스테이크스", new OP, new Kyoto, new DirtShort(1400)) {}
DanoS::~DanoS() {}
void DanoS::tempNew() { Race::tempNew(); }
void DanoS::tempDelete() { Race::tempDelete(); }

SweetpeaS::SweetpeaS() : Race("스위트피 스테이크스", new OP, new Tokyo, new TerfMile(1800)) {}
SweetpeaS::~SweetpeaS() {}
void SweetpeaS::tempNew() { Race::tempNew(); }
void SweetpeaS::tempDelete() { Race::tempDelete(); }

NHKMileCup::NHKMileCup() : Race("NHK 마일컵", new G1, new Tokyo, new TerfMile(1600)) { NHKMileCupWin++; }
NHKMileCup::~NHKMileCup() { NHKMileCupWin--; }
void NHKMileCup::tempNew() { Race::tempNew(); NHKMileCupWin++; }
void NHKMileCup::tempDelete() { Race::tempDelete(); NHKMileCupWin--; }

KyotoNewspaper::KyotoNewspaper() : Race("교토 신문배", new G2, new Kyoto, new TerfMiddle(2200)) {}
KyotoNewspaper::~KyotoNewspaper() {}
void KyotoNewspaper::tempNew() { Race::tempNew(); }
void KyotoNewspaper::tempDelete() { Race::tempDelete(); }

PrincipalS::PrincipalS() : Race("프린시팔 스테이크스", new OP, new Tokyo, new TerfMiddle(2000)) {}
PrincipalS::~PrincipalS() {}
void PrincipalS::tempNew() { Race::tempNew(); }
void PrincipalS::tempDelete() { Race::tempDelete(); }

BlueDragonS::BlueDragonS() : Race("청룡 스테이크스", new OP, new Tokyo, new DirtMile(1600)) {}
BlueDragonS::~BlueDragonS() {}
void BlueDragonS::tempNew() { Race::tempNew(); }
void BlueDragonS::tempDelete() { Race::tempDelete(); }

JapanDubby::JapanDubby() : Race("일본 더비", new G1, new Tokyo, new TerfMiddle(2400)) { JapanDubbyWin++; }
JapanDubby::~JapanDubby() { JapanDubbyWin--; }
void JapanDubby::tempNew() { Race::tempNew(); JapanDubbyWin++; }
void JapanDubby::tempDelete() { Race::tempDelete(); JapanDubbyWin--; }

Oaks::Oaks() : Race("오크스", new G1, new Tokyo, new TerfMiddle(2400)) { OaksWin++; }
Oaks::~Oaks() { OaksWin--; }
void Oaks::tempNew() { Race::tempNew(); OaksWin++; }
void Oaks::tempDelete() { Race::tempDelete(); OaksWin--; }

DishFlowerS::DishFlowerS() : Race("접시꽃 스테이크스", new G3, new Kyoto, new TerfShort(1200)) {}
DishFlowerS::~DishFlowerS() {}
void DishFlowerS::tempNew() { Race::tempNew(); }
void DishFlowerS::tempDelete() { Race::tempDelete(); }

BongchuS::BongchuS() : Race("봉추 스테이크스", new OP, new Kyoto, new DirtMile(1800)) {}
BongchuS::~BongchuS() {}
void BongchuS::tempNew() { Race::tempNew(); }
void BongchuS::tempDelete() { Race::tempDelete(); }

WhiteLilyS::WhiteLilyS() : Race("백백함 스테이크스", new OP, new Kyoto, new TerfMile(1800)) {}
WhiteLilyS::~WhiteLilyS() {}
void WhiteLilyS::tempNew() { Race::tempNew(); }
void WhiteLilyS::tempDelete() { Race::tempDelete(); }

YasudaAnniversary::YasudaAnniversary() : Race("야스다 기념", new G1, new Tokyo, new TerfMile(1600)) { YasudaWin++; }
YasudaAnniversary::~YasudaAnniversary() { YasudaWin--; }
void YasudaAnniversary::tempNew() { Race::tempNew(); YasudaWin++; }
void YasudaAnniversary::tempDelete() { Race::tempDelete(); YasudaWin--; }

MermaidS::MermaidS() : Race("머메이드 스테이크스", new G3, new Hansin, new TerfMiddle(2000)) {}
MermaidS::~MermaidS() {}
void MermaidS::tempNew() { Race::tempNew(); }
void MermaidS::tempDelete() { Race::tempDelete(); }

NaruoAnniversary::NaruoAnniversary() : Race("나루오 기념", new G3, new Hansin, new TerfMiddle(2000)) {}
NaruoAnniversary::~NaruoAnniversary() {}
void NaruoAnniversary::tempNew() { Race::tempNew(); }
void NaruoAnniversary::tempDelete() { Race::tempDelete(); }

EpsumCup::EpsumCup() : Race("엡섬컵", new G3, new Tokyo, new TerfMile(1800)) {}
EpsumCup::~EpsumCup() {}
void EpsumCup::tempNew() { Race::tempNew(); }
void EpsumCup::tempDelete() { Race::tempDelete(); }

TenposanS::TenposanS() : Race("텐포산 스테이크스", new OP, new Hansin, new DirtShort(1400)) {}
TenposanS::~TenposanS() {}
void TenposanS::tempNew() { Race::tempNew(); }
void TenposanS::tempDelete() { Race::tempDelete(); }

SleipnirS::SleipnirS() : Race("슬레이프니르 스테이크스", new OP, new Tokyo, new DirtMiddle(2100)) {}
SleipnirS::~SleipnirS() {}
void SleipnirS::tempNew() { Race::tempNew(); }
void SleipnirS::tempDelete() { Race::tempDelete(); }

TakarazukaAnniversary::TakarazukaAnniversary() : Race("타카라즈카 기념", new G1, new Hansin, new TerfMiddle(2200)) { TakarazukaWin++; }
TakarazukaAnniversary::~TakarazukaAnniversary() { TakarazukaWin--; }
void TakarazukaAnniversary::tempNew() { Race::tempNew(); TakarazukaWin++; }
void TakarazukaAnniversary::tempDelete() { Race::tempDelete(); TakarazukaWin--; }

HakodateSprintS::HakodateSprintS() : Race("하코다테 스프린트 스테이크스", new G3, new Hacodate, new TerfShort(1200)) {}
HakodateSprintS::~HakodateSprintS() {}
void HakodateSprintS::tempNew() { Race::tempNew(); }
void HakodateSprintS::tempDelete() { Race::tempDelete(); }

UnicornS::UnicornS() : Race("유니콘 스테이크스", new G3, new Tokyo, new DirtMile(1600)) { UnicornSWin++; }
UnicornS::~UnicornS() { UnicornSWin--; }
void UnicornS::tempNew() { Race::tempNew(); UnicornSWin++; }
void UnicornS::tempDelete() { Race::tempDelete(); UnicornSWin--; }

AhalTekeS::AhalTekeS() : Race("아할 테케 스테이크스", new OP, new Tokyo, new DirtMile(1600)) {}
AhalTekeS::~AhalTekeS() {}
void AhalTekeS::tempNew() { Race::tempNew(); }
void AhalTekeS::tempDelete() { Race::tempDelete(); }

YonagoS::YonagoS() : Race("요나고 스테이크스", new OP, new Hansin, new TerfMile(1600)) {}
YonagoS::~YonagoS() {}
void YonagoS::tempNew() { Race::tempNew(); }
void YonagoS::tempDelete() { Race::tempDelete(); }

OnumaS::OnumaS() : Race("오누마 스테이크스", new OP, new Hacodate, new DirtMile(1700)) {}
OnumaS::~OnumaS() {}
void OnumaS::tempNew() { Race::tempNew(); }
void OnumaS::tempDelete() { Race::tempDelete(); }

ParadiseS::ParadiseS() : Race("파라다이스 스테이크스", new OP, new Tokyo, new TerfShort(1400)) {}
ParadiseS::~ParadiseS() {}
void ParadiseS::tempNew() { Race::tempNew(); }
void ParadiseS::tempDelete() { Race::tempDelete(); }

SannomiyaS::SannomiyaS() : Race("산노미야 스테이크스", new OP, new Hansin, new DirtMile(1800)) {}
SannomiyaS::~SannomiyaS() {}
void SannomiyaS::tempNew() { Race::tempNew(); }
void SannomiyaS::tempDelete() { Race::tempDelete(); }

JapanDirtDubby::JapanDirtDubby() : Race("재팬 더트 더비", new G1, new Oi, new DirtMiddle(2000)) { JapanDirtDubbyWin++; }
JapanDirtDubby::~JapanDirtDubby() { JapanDirtDubbyWin--; }
void JapanDirtDubby::tempNew() { Race::tempNew(); JapanDirtDubbyWin++; }
void JapanDirtDubby::tempDelete() { Race::tempDelete(); JapanDirtDubbyWin--; }

CBC::CBC() : Race("CBC상", new G3, new Chuco, new TerfShort(1200)) {}
CBC::~CBC() {}
void CBC::tempNew() { Race::tempNew(); }
void CBC::tempDelete() { Race::tempDelete(); }

ProsionS::ProsionS() : Race("포이시온 스테이크스", new G3, new Chuco, new DirtShort(1400)) {}
ProsionS::~ProsionS() {}
void ProsionS::tempNew() { Race::tempNew(); }
void ProsionS::tempDelete() { Race::tempDelete(); }

RadioNIKKEI::RadioNIKKEI() : Race("라디오 NIKKEI상", new G3, new Hukusima, new TerfMile(1800)) {}
RadioNIKKEI::~RadioNIKKEI() {}
void RadioNIKKEI::tempNew() { Race::tempNew(); }
void RadioNIKKEI::tempDelete() { Race::tempDelete(); }

Tanabata::Tanabata() : Race("칠석상", new G3, new Hukusima, new TerfMiddle(2000)) {}
Tanabata::~Tanabata() {}
void Tanabata::tempNew() { Race::tempNew(); }
void Tanabata::tempDelete() { Race::tempDelete(); }

HakodateAnniversary::HakodateAnniversary() : Race("하코다테 기념", new G3, new Hacodate, new TerfMiddle(2000)) {}
HakodateAnniversary::~HakodateAnniversary() {}
void HakodateAnniversary::tempNew() { Race::tempNew(); }
void HakodateAnniversary::tempDelete() { Race::tempDelete(); }

Tomoe::Tomoe() : Race("토모에상", new OP, new Hacodate, new TerfMile(1800)) {}
Tomoe::~Tomoe() {}
void Tomoe::tempNew() { Race::tempNew(); }
void Tomoe::tempDelete() { Race::tempDelete(); }

MarineS::MarineS() : Race("마린 스테이크스", new OP, new Hacodate, new DirtMile(1700)) {}
MarineS::~MarineS() {}
void MarineS::tempNew() { Race::tempNew(); }
void MarineS::tempDelete() { Race::tempDelete(); }

NagoyaTrain::NagoyaTrain() : Race("나고야 철도배", new OP, new Chuco, new DirtMile(1800)) {}
NagoyaTrain::~NagoyaTrain() {}
void NagoyaTrain::tempNew() { Race::tempNew(); }
void NagoyaTrain::tempDelete() { Race::tempDelete(); }

ChucoAnniversary::ChucoAnniversary() : Race("츄코 기념", new G3, new Chuco, new TerfMile(1600)) {}
ChucoAnniversary::~ChucoAnniversary() {}
void ChucoAnniversary::tempNew() { Race::tempNew(); }
void ChucoAnniversary::tempDelete() { Race::tempDelete(); }

IviesSummerDash::IviesSummerDash() : Race("이비스 서머 대시", new G3, new Niegata, new TerfShort(1000)) {}
IviesSummerDash::~IviesSummerDash() {}
void IviesSummerDash::tempNew() { Race::tempNew(); }
void IviesSummerDash::tempDelete() { Race::tempDelete(); }

QueenS::QueenS() : Race("퀸 스테이크스", new G3, new Satporo, new TerfMile(1800)) {}
QueenS::~QueenS() {}
void QueenS::tempNew() { Race::tempNew(); }
void QueenS::tempDelete() { Race::tempDelete(); }

HukusimaTVOpen::HukusimaTVOpen() : Race("후쿠시마 TV 오픈", new OP, new Hukusima, new TerfShort(1200)) {}
HukusimaTVOpen::~HukusimaTVOpen() {}
void HukusimaTVOpen::tempNew() { Race::tempNew(); }
void HukusimaTVOpen::tempDelete() { Race::tempDelete(); }

SekiyaAnniversary::SekiyaAnniversary() : Race("세키야 기념", new G3, new Niegata, new TerfMile(1600)) {}
SekiyaAnniversary::~SekiyaAnniversary() {}
void SekiyaAnniversary::tempNew() { Race::tempNew(); }
void SekiyaAnniversary::tempDelete() { Race::tempDelete(); }

ElemS::ElemS() : Race("엘름 스테이크스", new G3, new Satporo, new DirtMile(1700)) {}
ElemS::~ElemS() {}
void ElemS::tempNew() { Race::tempNew(); }
void ElemS::tempDelete() { Race::tempDelete(); }

LeopardS::LeopardS() : Race("레오파드 스테이크스", new G3, new Niegata, new DirtMile(1800)) { LeopardSWin++; }
LeopardS::~LeopardS() { LeopardSWin--; }
void LeopardS::tempNew() { Race::tempNew(); LeopardSWin++; }
void LeopardS::tempDelete() { Race::tempDelete(); LeopardSWin--; }

KokuraAnniversary::KokuraAnniversary() : Race("코쿠라 기념", new G3, new Kokura, new TerfMiddle(2000)) {}
KokuraAnniversary::~KokuraAnniversary() {}
void KokuraAnniversary::tempNew() { Race::tempNew(); }
void KokuraAnniversary::tempDelete() { Race::tempDelete(); }

SatporoNikkeiOpen::SatporoNikkeiOpen() : Race("삿포로 닛케이 오픈", new OP, new Satporo, new TerfLong(2600)) {}
SatporoNikkeiOpen::~SatporoNikkeiOpen() {}
void SatporoNikkeiOpen::tempNew() { Race::tempNew(); }
void SatporoNikkeiOpen::tempDelete() { Race::tempDelete(); }

UHB::UHB() : Race("UHB상", new OP, new Satporo, new TerfShort(1200)) {}
UHB::~UHB() {}
void UHB::tempNew() { Race::tempNew(); }
void UHB::tempDelete() { Race::tempDelete(); }

AsoS::AsoS() : Race("아소 스테이크스", new OP, new Kokura, new DirtMile(1700)) {}
AsoS::~AsoS() {}
void AsoS::tempNew() { Race::tempNew(); }
void AsoS::tempDelete() { Race::tempDelete(); }

KanetsuS::KanetsuS() : Race("간에츠 스테이크스", new OP, new Niegata, new TerfMile(1800)) {}
KanetsuS::~KanetsuS() {}
void KanetsuS::tempNew() { Race::tempNew(); }
void KanetsuS::tempDelete() { Race::tempDelete(); }

SatporoAnniversary::SatporoAnniversary() : Race("삿포로 기념", new G2, new Satporo, new TerfMiddle(2000)) {}
SatporoAnniversary::~SatporoAnniversary() {}
void SatporoAnniversary::tempNew() { Race::tempNew(); }
void SatporoAnniversary::tempDelete() { Race::tempDelete(); }

KitakyushuAnniversary::KitakyushuAnniversary() : Race("키타큐슈 기념", new G3, new Kokura, new TerfShort(1200)) {}
KitakyushuAnniversary::~KitakyushuAnniversary() {}
void KitakyushuAnniversary::tempNew() { Race::tempNew(); }
void KitakyushuAnniversary::tempDelete() { Race::tempDelete(); }

KinlandCup::KinlandCup() : Race("킨랜드컵", new G3, new Satporo, new TerfShort(1200)) {}
KinlandCup::~KinlandCup() {}
void KinlandCup::tempNew() { Race::tempNew(); }
void KinlandCup::tempDelete() { Race::tempDelete(); }

NST::NST() : Race("NST상", new OP, new Niegata, new DirtShort(1200)) {}
NST::~NST() {}
void NST::tempNew() { Race::tempNew(); }
void NST::tempDelete() { Race::tempDelete(); }

BSN::BSN() : Race("BSN상", new OP, new Niegata, new DirtMile(1800)) {}
BSN::~BSN() {}
void BSN::tempNew() { Race::tempNew(); }
void BSN::tempDelete() { Race::tempDelete(); }

KokuraNikkeiOpen::KokuraNikkeiOpen() : Race("코쿠라 닛케이 오픈", new OP, new Kokura, new TerfMile(1800)) {}
KokuraNikkeiOpen::~KokuraNikkeiOpen() {}
void KokuraNikkeiOpen::tempNew() { Race::tempNew(); }
void KokuraNikkeiOpen::tempDelete() { Race::tempDelete(); }

IbisS::IbisS() : Race("따오기 스테이크스", new OP, new Niegata, new TerfShort(1400)) {}
IbisS::~IbisS() {}
void IbisS::tempNew() { Race::tempNew(); }
void IbisS::tempDelete() { Race::tempDelete(); }

RoseS::RoseS() : Race("로즈 스테이크스", new G2, new Hansin, new TerfMile(1800)) {}
RoseS::~RoseS() {}
void RoseS::tempNew() { Race::tempNew(); }
void RoseS::tempDelete() { Race::tempDelete(); }

SentoS::SentoS() : Race("센토 스테이크스", new G2, new Hansin, new TerfShort(1200)) {}
SentoS::~SentoS() {}
void SentoS::tempNew() { Race::tempNew(); }
void SentoS::tempDelete() { Race::tempDelete(); }

KeiseiAutumnHandicap::KeiseiAutumnHandicap() : Race("케이세이배 오텀 핸디캡", new G3, new Nakayama, new TerfMile(1600)) {}
KeiseiAutumnHandicap::~KeiseiAutumnHandicap() {}
void KeiseiAutumnHandicap::tempNew() { Race::tempNew(); }
void KeiseiAutumnHandicap::tempDelete() { Race::tempDelete(); }

TartarianAsterS::TartarianAsterS() : Race("개미취 스테이크스", new G3, new Nakayama, new TerfMiddle(2000)) {}
TartarianAsterS::~TartarianAsterS() {}
void TartarianAsterS::tempNew() { Race::tempNew(); }
void TartarianAsterS::tempDelete() { Race::tempDelete(); }

NiegataAnniversary::NiegataAnniversary() : Race("니이가타 기념", new G3, new Niegata, new TerfMiddle(2000)) {}
NiegataAnniversary::~NiegataAnniversary() {}
void NiegataAnniversary::tempNew() { Race::tempNew(); }
void NiegataAnniversary::tempDelete() { Race::tempDelete(); }

CraneS::CraneS() : Race("두루미 스테이크스", new OP, new Satporo, new TerfLong(2600)) {}
CraneS::~CraneS() {}
void CraneS::tempNew() { Race::tempNew(); }
void CraneS::tempDelete() { Race::tempDelete(); }

EnifS::EnifS() : Race("에니프 스테이크스", new OP, new Hansin, new DirtShort(1400)) {}
EnifS::~EnifS() {}
void EnifS::tempNew() { Race::tempNew(); }
void EnifS::tempDelete() { Race::tempDelete(); }

RadioJapan::RadioJapan() : Race("라디오 일본상", new OP, new Nakayama, new DirtMile(1800)) {}
RadioJapan::~RadioJapan() {}
void RadioJapan::tempNew() { Race::tempNew(); }
void RadioJapan::tempDelete() { Race::tempDelete(); }

SprintersS::SprintersS() : Race("스프린터즈 스테이크스", new G1, new Nakayama, new TerfShort(1200)) { SprintersSWin++; }
SprintersS::~SprintersS() { SprintersSWin--; }
void SprintersS::tempNew() { Race::tempNew(); SprintersSWin++; }
void SprintersS::tempDelete() { Race::tempDelete(); SprintersSWin--; }

SentlightAnniversary::SentlightAnniversary() : Race("센트라이트 기념", new G2, new Nakayama, new TerfMiddle(2200)) {}
SentlightAnniversary::~SentlightAnniversary() {}
void SentlightAnniversary::tempNew() { Race::tempNew(); }
void SentlightAnniversary::tempDelete() { Race::tempDelete(); }

AllCummers::AllCummers() : Race("올 커머스", new G2, new Nakayama, new TerfMiddle(2200)) {}
AllCummers::~AllCummers() {}
void AllCummers::tempNew() { Race::tempNew(); }
void AllCummers::tempDelete() { Race::tempDelete(); }

KobeNewspaper::KobeNewspaper() : Race("고베 신문배", new G2, new Hansin, new TerfMiddle(2400)) {}
KobeNewspaper::~KobeNewspaper() {}
void KobeNewspaper::tempNew() { Race::tempNew(); }
void KobeNewspaper::tempDelete() { Race::tempDelete(); }

SerioosS::SerioosS() : Race("시리우스 스테이크스", new G3, new Hansin, new DirtMiddle(2000)) {}
SerioosS::~SerioosS() {}
void SerioosS::tempNew() { Race::tempNew(); }
void SerioosS::tempDelete() { Race::tempDelete(); }

PortIslandS::PortIslandS() : Race("포트아일랜드 스테이크스", new OP, new Hansin, new TerfMile(1600)) {}
PortIslandS::~PortIslandS() {}
void PortIslandS::tempNew() { Race::tempNew(); }
void PortIslandS::tempDelete() { Race::tempDelete(); }

NakatsukiS::NakatsukiS() : Race("나카츠키 스테이크스", new OP, new Nakayama, new DirtShort(1200)) {}
NakatsukiS::~NakatsukiS() {}
void NakatsukiS::tempNew() { Race::tempNew(); }
void NakatsukiS::tempDelete() { Race::tempDelete(); }

HuchuUmamusumeS::HuchuUmamusumeS() : Race("후츄 우마무스메 스테이크스", new G2, new Tokyo, new TerfMile(1800)) { HuchuUSWin++; }
HuchuUmamusumeS::~HuchuUmamusumeS() { HuchuUSWin--; }
void HuchuUmamusumeS::tempNew() { Race::tempNew(); HuchuUSWin++; }
void HuchuUmamusumeS::tempDelete() { Race::tempDelete(); HuchuUSWin--; }

MainichiCrown::MainichiCrown() : Race("마이니치 왕관", new G2, new Tokyo, new TerfMile(1800)) {}
MainichiCrown::~MainichiCrown() {}
void MainichiCrown::tempNew() { Race::tempNew(); }
void MainichiCrown::tempDelete() { Race::tempDelete(); }

KyotoTarget::KyotoTarget() : Race("교토 대상전", new G2, new Kyoto, new TerfMiddle(2400)) {}
KyotoTarget::~KyotoTarget() {}
void KyotoTarget::tempNew() { Race::tempNew(); }
void KyotoTarget::tempDelete() { Race::tempDelete(); }

OpalS::OpalS() : Race("오팔 스테이크스", new OP, new Kyoto, new TerfShort(1200)) {}
OpalS::~OpalS() {}
void OpalS::tempNew() { Race::tempNew(); }
void OpalS::tempDelete() { Race::tempDelete(); }

GreenChannelCup::GreenChannelCup() : Race("그린 채널컵", new OP, new Tokyo, new DirtShort(1400)) {}
GreenChannelCup::~GreenChannelCup() {}
void GreenChannelCup::tempNew() { Race::tempNew(); }
void GreenChannelCup::tempDelete() { Race::tempDelete(); }

OctoberS::OctoberS() : Race("옥토버 스테이크스", new OP, new Tokyo, new TerfMiddle(2000)) {}
OctoberS::~OctoberS() {}
void OctoberS::tempNew() { Race::tempNew(); }
void OctoberS::tempDelete() { Race::tempDelete(); }

SinetsuS::SinetsuS() : Race("신에츠 스테이크스", new OP, new Niegata, new TerfShort(1400)) {}
SinetsuS::~SinetsuS() {}
void SinetsuS::tempNew() { Race::tempNew(); }
void SinetsuS::tempDelete() { Race::tempDelete(); }

UzumasaS::UzumasaS() : Race("우즈마사 스테이크스", new OP, new Kyoto, new DirtMile(1800)) {}
UzumasaS::~UzumasaS() {}
void UzumasaS::tempNew() { Race::tempNew(); }
void UzumasaS::tempDelete() { Race::tempDelete(); }

Kitka::Kitka() : Race("국화상", new G1, new Kyoto, new TerfLong(3000)) { KitkaWin++; }
Kitka::~Kitka() { KitkaWin--; }
void Kitka::tempNew() { Race::tempNew(); KitkaWin++; }
void Kitka::tempDelete() { Race::tempDelete(); KitkaWin--; }

Shuka::Shuka() : Race("추화상", new G1, new Tokyo, new TerfMiddle(2000)) { ShukaWin++; }
Shuka::~Shuka() { ShukaWin--; }
void Shuka::tempNew() { Race::tempNew(); ShukaWin++; }
void Shuka::tempDelete() { Race::tempDelete(); ShukaWin--; }

ArkiTen::ArkiTen() : Race("텐노상 가을", new G1, new Tokyo, new TerfMiddle(2000)) { ArkiTenWin++; }
ArkiTen::~ArkiTen() { ArkiTenWin--; }
void ArkiTen::tempNew() { Race::tempNew(); ArkiTenWin++; }
void ArkiTen::tempDelete() { Race::tempDelete(); ArkiTenWin--; }

SwanS::SwanS() : Race("스완 스테이크스", new G2, new Kyoto, new TerfShort(1400)) {}
SwanS::~SwanS() {}
void SwanS::tempNew() { Race::tempNew(); }
void SwanS::tempDelete() { Race::tempDelete(); }

HujiS::HujiS() : Race("후지 스테이크스", new G2, new Tokyo, new TerfMile(1600)) {}
HujiS::~HujiS() {}
void HujiS::tempNew() { Race::tempNew(); }
void HujiS::tempDelete() { Race::tempDelete(); }

MuromachiS::MuromachiS() : Race("무로마치 스테이크스", new OP, new Kyoto, new DirtShort(1200)) {}
MuromachiS::~MuromachiS() {}
void MuromachiS::tempNew() { Race::tempNew(); }
void MuromachiS::tempDelete() { Race::tempDelete(); }

BrazilCup::BrazilCup() : Race("브라질컵", new OP, new Tokyo, new DirtMiddle(2100)) { BrazilCupWin++; }
BrazilCup::~BrazilCup() { BrazilCupWin--; }
void BrazilCup::tempNew() { Race::tempNew(); BrazilCupWin++; }
void BrazilCup::tempDelete() { Race::tempDelete(); BrazilCupWin--; }

CasiopeiaS::CasiopeiaS() : Race("카시오페이아 스테이크스", new OP, new Kyoto, new TerfMile(1800)) {}
CasiopeiaS::~CasiopeiaS() {}
void CasiopeiaS::tempNew() { Race::tempNew(); }
void CasiopeiaS::tempDelete() { Race::tempDelete(); }

LumierAutumnDash::LumierAutumnDash() : Race("루미에르 오텀 대시", new OP, new Niegata, new TerfShort(1000)) {}
LumierAutumnDash::~LumierAutumnDash() {}
void LumierAutumnDash::tempNew() { Race::tempNew(); }
void LumierAutumnDash::tempDelete() { Race::tempDelete(); }

ElizabethQueen::ElizabethQueen() : Race("엘리자베스 여왕배", new G1, new Kyoto, new TerfMiddle(2200)) { ElizabethWin++; }
ElizabethQueen::~ElizabethQueen() { ElizabethWin--; }
void ElizabethQueen::tempNew() { Race::tempNew(); ElizabethWin++; }
void ElizabethQueen::tempDelete() { Race::tempDelete(); ElizabethWin--; }

ClassicElizabethQueen::ClassicElizabethQueen() : ElizabethQueen() { ClassicElizabethWin++; }
ClassicElizabethQueen::~ClassicElizabethQueen() { ClassicElizabethWin--; }
void ClassicElizabethQueen::tempNew() { ElizabethQueen::tempNew(); ClassicElizabethWin++; }
void ClassicElizabethQueen::tempDelete() { ElizabethQueen::tempDelete(); ClassicElizabethWin--; }

JBCLadiesClassic::JBCLadiesClassic() : Race("JBC 레이디스 클래식", new G1, new Oi, new DirtMile(1800)) {}
JBCLadiesClassic::~JBCLadiesClassic() {}
void JBCLadiesClassic::tempNew() { Race::tempNew(); }
void JBCLadiesClassic::tempDelete() { Race::tempDelete(); }

JBCSprint::JBCSprint() : Race("JBC 스프린트", new G1, new Oi, new DirtShort(1200)) { JBCSprinterWin++; }
JBCSprint::~JBCSprint() { JBCSprinterWin--; }
void JBCSprint::tempNew() { Race::tempNew(); JBCSprinterWin++; }
void JBCSprint::tempDelete() { Race::tempDelete(); JBCSprinterWin--; }

JBCClassic::JBCClassic() : Race("JBC 클래식", new G1, new Oi, new DirtMiddle(2000)) {}
JBCClassic::~JBCClassic() {}
void JBCClassic::tempNew() { Race::tempNew(); }
void JBCClassic::tempDelete() { Race::tempDelete(); }

ArgentinaRepublic::ArgentinaRepublic() : Race("아르헨티나 공화국배", new G2, new Tokyo, new TerfLong(2500)) { ArgentinaWin++; }
ArgentinaRepublic::~ArgentinaRepublic() { ArgentinaWin--; }
void ArgentinaRepublic::tempNew() { Race::tempNew(); ArgentinaWin++; }
void ArgentinaRepublic::tempDelete() { Race::tempDelete(); ArgentinaWin--; }

MiyakoS::MiyakoS() : Race("미야코 스테이크스", new G3, new Kyoto, new DirtMile(1800)) {}
MiyakoS::~MiyakoS() {}
void MiyakoS::tempNew() { Race::tempNew(); }
void MiyakoS::tempDelete() { Race::tempDelete(); }

MusasinoS::MusasinoS() : Race("무사시노 스테이크스", new G3, new Tokyo, new DirtMile(1600)) {}
MusasinoS::~MusasinoS() {}
void MusasinoS::tempNew() { Race::tempNew(); }
void MusasinoS::tempDelete() { Race::tempDelete(); }

HukusimaAnniversary::HukusimaAnniversary() : Race("후쿠시마 기념", new G3, new Hukusima, new TerfMiddle(2000)) {}
HukusimaAnniversary::~HukusimaAnniversary() {}
void HukusimaAnniversary::tempNew() { Race::tempNew(); }
void HukusimaAnniversary::tempDelete() { Race::tempDelete(); }

OROCup::OROCup() : Race("ORO컵", new OP, new Tokyo, new TerfShort(1400)) {}
OROCup::~OROCup() {}
void OROCup::tempNew() { Race::tempNew(); }
void OROCup::tempDelete() { Race::tempDelete(); }

MileChampionship::MileChampionship() : Race("마일 챔피언십", new G1, new Kyoto, new TerfMile(1600)) { MileChampionshipWin++; }
MileChampionship::~MileChampionship() { MileChampionshipWin--; }
void MileChampionship::tempNew() { Race::tempNew(); MileChampionshipWin++; }
void MileChampionship::tempDelete() { Race::tempDelete(); MileChampionshipWin--; }

JapanCup::JapanCup() : Race("재팬컵", new G1, new Tokyo, new TerfMiddle(2400)) { JapanCupWin++; }
JapanCup::~JapanCup() { JapanCupWin--; }
void JapanCup::tempNew() { Race::tempNew(); JapanCupWin++; }
void JapanCup::tempDelete() { Race::tempDelete(); JapanCupWin--; }

ClassicJapanCup::ClassicJapanCup() : JapanCup() { ClassicJapanCupORArimaWin++; }
ClassicJapanCup::~ClassicJapanCup() { ClassicJapanCupORArimaWin--; }
void ClassicJapanCup::tempNew() { JapanCup::tempNew(); ClassicJapanCupORArimaWin++; }
void ClassicJapanCup::tempDelete() { JapanCup::tempDelete(); ClassicJapanCupORArimaWin--; }

Keihan::Keihan() : Race("케이한배", new G3, new Kyoto, new TerfShort(1200)) {}
Keihan::~Keihan() {}
void Keihan::tempNew() { Race::tempNew(); }
void Keihan::tempDelete() { Race::tempDelete(); }

AndromedaS::AndromedaS() : Race("안드로메다 스테이크스", new OP, new Kyoto, new TerfMiddle(2000)) {}
AndromedaS::~AndromedaS() {}
void AndromedaS::tempNew() { Race::tempNew(); }
void AndromedaS::tempDelete() { Race::tempDelete(); }

SolsticeMonthS::SolsticeMonthS() : Race("동짓달 스테이크스", new OP, new Tokyo, new DirtShort(1400)) {}
SolsticeMonthS::~SolsticeMonthS() {}
void SolsticeMonthS::tempNew() { Race::tempNew(); }
void SolsticeMonthS::tempDelete() { Race::tempDelete(); }

HukusimaMinooCup::HukusimaMinooCup() : Race("후쿠시마 민우컵", new OP, new Hukusima, new DirtMile(1700)) {}
HukusimaMinooCup::~HukusimaMinooCup() {}
void HukusimaMinooCup::tempNew() { Race::tempNew(); }
void HukusimaMinooCup::tempDelete() { Race::tempDelete(); }

CapitalS::CapitalS() : Race("캐피탈 스테이크스", new OP, new Tokyo, new TerfMile(1600)) {}
CapitalS::~CapitalS() {}
void CapitalS::tempNew() { Race::tempNew(); }
void CapitalS::tempDelete() { Race::tempDelete(); }

AutumnLeafS::AutumnLeafS() : Race("오텀 리프 스테이크스", new OP, new Kyoto, new DirtShort(1200)) {}
AutumnLeafS::~AutumnLeafS() {}
void AutumnLeafS::tempNew() { Race::tempNew(); }
void AutumnLeafS::tempDelete() { Race::tempDelete(); }

ChampionsCup::ChampionsCup() : Race("챔피언스컵", new G1, new Chuco, new DirtMile(1800)) {}
ChampionsCup::~ChampionsCup() {}
void ChampionsCup::tempNew() { Race::tempNew(); }
void ChampionsCup::tempDelete() { Race::tempDelete(); }

StayersS::StayersS() : Race("스테이어즈 스테이크스", new G2, new Nakayama, new TerfLong(3600)) {}
StayersS::~StayersS() {}
void StayersS::tempNew() { Race::tempNew(); }
void StayersS::tempDelete() { Race::tempDelete(); }

TurkeyStoneS::TurkeyStoneS() : Race("터키석 스테이크스", new G3, new Nakayama, new TerfMile(1600)) {}
TurkeyStoneS::~TurkeyStoneS() {}
void TurkeyStoneS::tempNew() { Race::tempNew(); }
void TurkeyStoneS::tempDelete() { Race::tempDelete(); }

CapellaS::CapellaS() : Race("카펠라 스테이크스", new G3, new Nakayama, new DirtShort(1200)) {}
CapellaS::~CapellaS() {}
void CapellaS::tempNew() { Race::tempNew(); }
void CapellaS::tempDelete() { Race::tempDelete(); }

ChallengeCup::ChallengeCup() : Race("챌린지컵", new G3, new Hansin, new TerfMiddle(2000)) {}
ChallengeCup::~ChallengeCup() {}
void ChallengeCup::tempNew() { Race::tempNew(); }
void ChallengeCup::tempDelete() { Race::tempDelete(); }

ChunichiNewpaper::ChunichiNewpaper() : Race("츄니치 신문배", new G3, new Chuco, new TerfMiddle(2000)) {}
ChunichiNewpaper::~ChunichiNewpaper() {}
void ChunichiNewpaper::tempNew() { Race::tempNew(); }
void ChunichiNewpaper::tempDelete() { Race::tempDelete(); }

LapisLazuliS::LapisLazuliS() : Race("라피스 라줄리 스테이크스", new OP, new Nakayama, new TerfShort(1200)) {}
LapisLazuliS::~LapisLazuliS() {}
void LapisLazuliS::tempNew() { Race::tempNew(); }
void LapisLazuliS::tempDelete() { Race::tempDelete(); }

NewYearMonthS::NewYearMonthS() : Race("섣달 스테이크스", new OP, new Nakayama, new DirtMile(1600)) {}
NewYearMonthS::~NewYearMonthS() {}
void NewYearMonthS::tempNew() { Race::tempNew(); }
void NewYearMonthS::tempDelete() { Race::tempDelete(); }

LigelS::LigelS() : Race("리겔 스테이크스", new OP, new Hansin, new TerfMile(1600)) {}
LigelS::~LigelS() {}
void LigelS::tempNew() { Race::tempNew(); }
void LigelS::tempDelete() { Race::tempDelete(); }

TanzanightS::TanzanightS() : Race("탄자나이트 스테이크스", new OP, new Hansin, new TerfShort(1200)) {}
TanzanightS::~TanzanightS() {}
void TanzanightS::tempNew() { Race::tempNew(); }
void TanzanightS::tempDelete() { Race::tempDelete(); }

DecemberS::DecemberS() : Race("디셈버 스테이크스", new OP, new Nakayama, new TerfMile(1800)) {}
DecemberS::~DecemberS() {}
void DecemberS::tempNew() { Race::tempNew(); }
void DecemberS::tempDelete() { Race::tempDelete(); }

ArimaAnniversary::ArimaAnniversary() : Race("아리마 기념", new G1, new Nakayama, new TerfLong(2500)) { ArimaWin++; }
ArimaAnniversary::~ArimaAnniversary() { ArimaWin--; }
void ArimaAnniversary::tempNew() { Race::tempNew(); ArimaWin++; }
void ArimaAnniversary::tempDelete() { Race::tempDelete(); ArimaWin--; }

ClassicArimaAnniversary::ClassicArimaAnniversary() : ArimaAnniversary() { ClassicJapanCupORArimaWin++; }
ClassicArimaAnniversary::~ClassicArimaAnniversary() { ClassicJapanCupORArimaWin--; }
void ClassicArimaAnniversary::tempNew() { ArimaAnniversary::tempNew(); ClassicJapanCupORArimaWin++; }
void ClassicArimaAnniversary::tempDelete() { ArimaAnniversary::tempDelete(); ClassicJapanCupORArimaWin--; }

TokyoTarget::TokyoTarget() : Race("도쿄대상전", new G1, new Oi, new DirtMiddle(2000)) {}
TokyoTarget::~TokyoTarget() {}
void TokyoTarget::tempNew() { Race::tempNew(); }
void TokyoTarget::tempDelete() { Race::tempDelete(); }

HansinCup::HansinCup() : Race("한신컵", new G2, new Hansin, new TerfShort(1400)) {}
HansinCup::~HansinCup() {}
void HansinCup::tempNew() { Race::tempNew(); }
void HansinCup::tempDelete() { Race::tempDelete(); }

GalaxyS::GalaxyS() : Race("갤럭시 스테이크스", new OP, new Hansin, new DirtShort(1400)) {}
GalaxyS::~GalaxyS() {}
void GalaxyS::tempNew() { Race::tempNew(); }
void GalaxyS::tempDelete() { Race::tempDelete(); }

BetelgiusS::BetelgiusS() : Race("베텔게우스 스테이크스", new OP, new Hansin, new DirtMile(1800)) {}
BetelgiusS::~BetelgiusS() {}
void BetelgiusS::tempNew() { Race::tempNew(); }
void BetelgiusS::tempDelete() { Race::tempDelete(); }

NikkeiNewYear::NikkeiNewYear() : Race("닛케이 신춘배", new G2, new Kyoto, new TerfMiddle(2400)) {}
NikkeiNewYear::~NikkeiNewYear() {}
void NikkeiNewYear::tempNew() { Race::tempNew(); }
void NikkeiNewYear::tempDelete() { Race::tempDelete(); }

Ichi::Ichi() : Race("아이치배", new G3, new Chuco, new TerfMiddle(2000)) {}
Ichi::~Ichi() {}
void Ichi::tempNew() { Race::tempNew(); }
void Ichi::tempDelete() { Race::tempDelete(); }

KyotoGold::KyotoGold() : Race("교토 금배", new G3, new Kyoto, new TerfMile(1600)) {}
KyotoGold::~KyotoGold() {}
void KyotoGold::tempNew() { Race::tempNew(); }
void KyotoGold::tempDelete() { Race::tempDelete(); }

NakayamaGold::NakayamaGold() : Race("나카야마 금배", new G3, new Nakayama, new TerfMiddle(2000)) {}
NakayamaGold::~NakayamaGold() {}
void NakayamaGold::tempNew() { Race::tempNew(); }
void NakayamaGold::tempDelete() { Race::tempDelete(); }

ManyoS::ManyoS() : Race("만엽 스테이크스", new OP, new Kyoto, new TerfLong(3000)) {}
ManyoS::~ManyoS() {}
void ManyoS::tempNew() { Race::tempNew(); }
void ManyoS::tempDelete() { Race::tempDelete(); }

UrethraShortS::UrethraShortS() : Race("요도 단거리 스테이크스", new OP, new Kyoto, new TerfShort(1200)) {}
UrethraShortS::~UrethraShortS() {}
void UrethraShortS::tempNew() { Race::tempNew(); }
void UrethraShortS::tempDelete() { Race::tempDelete(); }

PolluxS::PolluxS() : Race("폴룩스 스테이크스", new OP, new Nakayama, new DirtMile(1800)) {}
PolluxS::~PolluxS() {}
void PolluxS::tempNew() { Race::tempNew(); }
void PolluxS::tempDelete() { Race::tempDelete(); }

JanuaryS::JanuaryS() : Race("재뉴어리 스테이크스", new OP, new Nakayama, new DirtShort(1200)) {}
JanuaryS::~JanuaryS() {}
void JanuaryS::tempNew() { Race::tempNew(); }
void JanuaryS::tempDelete() { Race::tempDelete(); }

NewYearS::NewYearS() : Race("뉴 이어 스테이크스", new OP, new Nakayama, new TerfMile(1600)) {}
NewYearS::~NewYearS() {}
void NewYearS::tempNew() { Race::tempNew(); }
void NewYearS::tempDelete() { Race::tempDelete(); }

CarbunkleS::CarbunkleS() : Race("카벙클 스테이크스", new OP, new Nakayama, new TerfShort(1200)) {}
CarbunkleS::~CarbunkleS() {}
void CarbunkleS::tempNew() { Race::tempNew(); }
void CarbunkleS::tempDelete() { Race::tempDelete(); }

AmericaJCC::AmericaJCC() : Race("아메리카 JCC", new G2, new Nakayama, new TerfMiddle(2200)) { AmericaWin++; }
AmericaJCC::~AmericaJCC() { AmericaWin--; }
void AmericaJCC::tempNew() { Race::tempNew(); AmericaWin++; }
void AmericaJCC::tempDelete() { Race::tempDelete(); AmericaWin--; }

TokaiS::TokaiS() : Race("토카이 스테이크스", new G2, new Chuco, new DirtMile(1800)) {}
TokaiS::~TokaiS() {}
void TokaiS::tempNew() { Race::tempNew(); }
void TokaiS::tempDelete() { Race::tempDelete(); }

SilkroadS::SilkroadS() : Race("실크로드 스테이크스", new G3, new Kyoto, new TerfShort(1200)) {}
SilkroadS::~SilkroadS() {}
void SilkroadS::tempNew() { Race::tempNew(); }
void SilkroadS::tempDelete() { Race::tempDelete(); }

NegisiS::NegisiS() : Race("네기시 스테이크스", new G3, new Tokyo, new DirtShort(1400)) {}
NegisiS::~NegisiS() {}
void NegisiS::tempNew() { Race::tempNew(); }
void NegisiS::tempDelete() { Race::tempDelete(); }

PleiadesS::PleiadesS() : Race("플레이아데스 스테이크스", new OP, new Kyoto, new DirtShort(1400)) {}
PleiadesS::~PleiadesS() {}
void PleiadesS::tempNew() { Race::tempNew(); }
void PleiadesS::tempDelete() { Race::tempDelete(); }

SirahujiS::SirahujiS() : Race("시라후지 스테이크스", new OP, new Tokyo, new TerfMiddle(2000)) {}
SirahujiS::~SirahujiS() {}
void SirahujiS::tempNew() { Race::tempNew(); }
void SirahujiS::tempDelete() { Race::tempDelete(); }

KyotoAnniversary::KyotoAnniversary() : Race("교토 기념", new G2, new Kyoto, new TerfMiddle(2200)) {}
KyotoAnniversary::~KyotoAnniversary() {}
void KyotoAnniversary::tempNew() { Race::tempNew(); }
void KyotoAnniversary::tempDelete() { Race::tempDelete(); }

TokyoNewpaper::TokyoNewpaper() : Race("도쿄 신문배", new G3, new Tokyo, new TerfMile(1600)) {}
TokyoNewpaper::~TokyoNewpaper() {}
void TokyoNewpaper::tempNew() { Race::tempNew(); }
void TokyoNewpaper::tempDelete() { Race::tempDelete(); }

YamatoS::YamatoS() : Race("야마토 스테이크스", new OP, new Kyoto, new DirtShort(1200)) {}
YamatoS::~YamatoS() {}
void YamatoS::tempNew() { Race::tempNew(); }
void YamatoS::tempDelete() { Race::tempDelete(); }

LakuyoS::LakuyoS() : Race("라쿠요 스테이크스", new OP, new Kyoto, new TerfMile(1600)) {}
LakuyoS::~LakuyoS() {}
void LakuyoS::tempNew() { Race::tempNew(); }
void LakuyoS::tempDelete() { Race::tempDelete(); }

AlthebaranS::AlthebaranS() : Race("알데바란 스테이크스", new OP, new Kyoto, new DirtMiddle(1900)) {}
AlthebaranS::~AlthebaranS() {}
void AlthebaranS::tempNew() { Race::tempNew(); }
void AlthebaranS::tempDelete() { Race::tempDelete(); }

ValentineS::ValentineS() : Race("밸런타인 스테이크스", new OP, new Tokyo, new DirtShort(1400)) {}
ValentineS::~ValentineS() {}
void ValentineS::tempNew() { Race::tempNew(); }
void ValentineS::tempDelete() { Race::tempDelete(); }

FebruaryS::FebruaryS() : Race("페브러리 스테이크스", new G1, new Tokyo, new DirtMile(1600)) {}
FebruaryS::~FebruaryS() {}
void FebruaryS::tempNew() { Race::tempNew(); }
void FebruaryS::tempDelete() { Race::tempDelete(); }

NakayamaAnniversary::NakayamaAnniversary() : Race("나카야마 기념", new G2, new Nakayama, new TerfMile(1800)) {}
NakayamaAnniversary::~NakayamaAnniversary() {}
void NakayamaAnniversary::tempNew() { Race::tempNew(); }
void NakayamaAnniversary::tempDelete() { Race::tempDelete(); }

KyotoUmamusumeS::KyotoUmamusumeS() : Race("교토 우마무스메 스테이크스", new G3, new Kyoto, new TerfShort(1400)) { KyotoUSWin++; }
KyotoUmamusumeS::~KyotoUmamusumeS() { KyotoUSWin--; }
void KyotoUmamusumeS::tempNew() { Race::tempNew(); KyotoUSWin++; }
void KyotoUmamusumeS::tempDelete() { Race::tempDelete(); KyotoUSWin--; }

DiamondS::DiamondS() : Race("다이아몬드 스테이크스", new G3, new Tokyo, new TerfLong(3400)) {}
DiamondS::~DiamondS() {}
void DiamondS::tempNew() { Race::tempNew(); }
void DiamondS::tempDelete() { Race::tempDelete(); }

KokuraTarget::KokuraTarget() : Race("코쿠라 대상전", new G3, new Kokura, new TerfMile(1800)) {}
KokuraTarget::~KokuraTarget() {}
void KokuraTarget::tempNew() { Race::tempNew(); }
void KokuraTarget::tempDelete() { Race::tempDelete(); }

Hanque::Hanque() : Race("한큐배", new G3, new Hansin, new TerfShort(1400)) {}
Hanque::~Hanque() {}
void Hanque::tempNew() { Race::tempNew(); }
void Hanque::tempDelete() { Race::tempDelete(); }

SobuS::SobuS() : Race("소부 스테이크스", new OP, new Nakayama, new DirtMile(1800)) {}
SobuS::~SobuS() {}
void SobuS::tempNew() { Race::tempNew(); }
void SobuS::tempDelete() { Race::tempDelete(); }

KitakushuShortS::KitakushuShortS() : Race("키타큐슈 단거리 스테이크스", new OP, new Kokura, new TerfShort(1200)) {}
KitakushuShortS::~KitakushuShortS() {}
void KitakushuShortS::tempNew() { Race::tempNew(); }
void KitakushuShortS::tempDelete() { Race::tempDelete(); }

Kinko::Kinko() : Race("킨코상", new G2, new Chuco, new TerfMiddle(2000)) {}
Kinko::~Kinko() {}
void Kinko::tempNew() { Race::tempNew(); }
void Kinko::tempDelete() { Race::tempDelete(); }

NakayamaUmamusumeS::NakayamaUmamusumeS() : Race("나카야마 우마무스메 스테이크스", new G3, new Nakayama, new TerfMile(1800)) { NakayamaUSWin++; }
NakayamaUmamusumeS::~NakayamaUmamusumeS() { NakayamaUSWin--; }
void NakayamaUmamusumeS::tempNew() { Race::tempNew(); NakayamaUSWin++; }
void NakayamaUmamusumeS::tempDelete() { Race::tempDelete(); NakayamaUSWin--; }

OceanS::OceanS() : Race("오션 스테이크스", new G3, new Nakayama, new TerfShort(1200)) {}
OceanS::~OceanS() {}
void OceanS::tempNew() { Race::tempNew(); }
void OceanS::tempDelete() { Race::tempDelete(); }

OsacaCastleS::OsacaCastleS() : Race("오사카성 스테이크스", new OP, new Hansin, new TerfMile(1800)) {}
OsacaCastleS::~OsacaCastleS() {}
void OsacaCastleS::tempNew() { Race::tempNew(); }
void OsacaCastleS::tempDelete() { Race::tempDelete(); }

PolarisS::PolarisS() : Race("폴라리스 스테이크스", new OP, new Hansin, new DirtShort(1400)) {}
PolarisS::~PolarisS() {}
void PolarisS::tempNew() { Race::tempNew(); }
void PolarisS::tempDelete() { Race::tempDelete(); }

NigawaS::NigawaS() : Race("니가와 스테이크스", new OP, new Hansin, new DirtMiddle(2000)) {}
NigawaS::~NigawaS() {}
void NigawaS::tempNew() { Race::tempNew(); }
void NigawaS::tempDelete() { Race::tempDelete(); }

EastWindS::EastWindS() : Race("동풍 스테이크스", new OP, new Nakayama, new TerfMile(1600)) {}
EastWindS::~EastWindS() {}
void EastWindS::tempNew() { Race::tempNew(); }
void EastWindS::tempDelete() { Race::tempDelete(); }

Osaka::Osaka() : Race("오사카배", new G1, new Hansin, new TerfMiddle(2000)) { OsakaWin++; }
Osaka::~Osaka() { OsakaWin--; }
void Osaka::tempNew() { Race::tempNew(); OsakaWin++; }
void Osaka::tempDelete() { Race::tempDelete(); OsakaWin--; }

Takamatsunomiya::Takamatsunomiya() : Race("타카마츠노미야 기념", new G1, new Chuco, new TerfShort(1200)) { TakamatsunomiyaWin++; }
Takamatsunomiya::~Takamatsunomiya() { TakamatsunomiyaWin--; }
void Takamatsunomiya::tempNew() { Race::tempNew(); TakamatsunomiyaWin++; }
void Takamatsunomiya::tempDelete() { Race::tempDelete(); TakamatsunomiyaWin--; }

HansinTarget::HansinTarget() : Race("한신 대상전", new G2, new Hansin, new TerfLong(3000)) {}
HansinTarget::~HansinTarget() {}
void HansinTarget::tempNew() { Race::tempNew(); }
void HansinTarget::tempDelete() { Race::tempDelete(); }

Nikkei::Nikkei() : Race("닛케이상", new G2, new Nakayama, new TerfLong(2500)) {}
Nikkei::~Nikkei() {}
void Nikkei::tempNew() { Race::tempNew(); }
void Nikkei::tempDelete() { Race::tempDelete(); }

MarchS::MarchS() : Race("마치 스테이크스", new G3, new Nakayama, new DirtMile(1800)) {}
MarchS::~MarchS() {}
void MarchS::tempNew() { Race::tempNew(); }
void MarchS::tempDelete() { Race::tempDelete(); }

ChibaS::ChibaS() : Race("치바 스테이크스", new OP, new Nakayama, new DirtShort(1200)) {}
ChibaS::~ChibaS() {}
void ChibaS::tempNew() { Race::tempNew(); }
void ChibaS::tempDelete() { Race::tempDelete(); }

RotcoS::RotcoS() : Race("롯코 스테이크스", new OP, new Hansin, new TerfMile(1600)) {}
RotcoS::~RotcoS() {}
void RotcoS::tempNew() { Race::tempNew(); }
void RotcoS::tempDelete() { Race::tempDelete(); }

HansinUmamusumeS::HansinUmamusumeS() : Race("한신 우마무스메 스테이크스", new G2, new Hansin, new TerfMile(1600)) { HansinUSWin++; }
HansinUmamusumeS::~HansinUmamusumeS() { HansinUSWin--; }
void HansinUmamusumeS::tempNew() { Race::tempNew(); HansinUSWin++; }
void HansinUmamusumeS::tempDelete() { Race::tempDelete(); HansinUSWin--; }

DubbyChallengeTrophie::DubbyChallengeTrophie() : Race("더비 경 챌린지 트로피", new G3, new Nakayama, new TerfMile(1600)) {}
DubbyChallengeTrophie::~DubbyChallengeTrophie() {}
void DubbyChallengeTrophie::tempNew() { Race::tempNew(); }
void DubbyChallengeTrophie::tempDelete() { Race::tempDelete(); }

AntaresS::AntaresS() : Race("안타레스 스테이크스", new G3, new Hansin, new DirtMile(1800)) {}
AntaresS::~AntaresS() {}
void AntaresS::tempNew() { Race::tempNew(); }
void AntaresS::tempDelete() { Race::tempDelete(); }

CoralS::CoralS() : Race("코랄 스테이크스", new OP, new Hansin, new DirtShort(1400)) {}
CoralS::~CoralS() {}
void CoralS::tempNew() { Race::tempNew(); }
void CoralS::tempDelete() { Race::tempDelete(); }

KeiyoS::KeiyoS() : Race("케이요 스테이크스", new OP, new Nakayama, new DirtShort(1200)) {}
KeiyoS::~KeiyoS() {}
void KeiyoS::tempNew() { Race::tempNew(); }
void KeiyoS::tempDelete() { Race::tempDelete(); }

SpringThunderS::SpringThunderS() : Race("춘뢰 스테이크스", new OP, new Nakayama, new TerfShort(!200)) {}
SpringThunderS::~SpringThunderS() {}
void SpringThunderS::tempNew() { Race::tempNew(); }
void SpringThunderS::tempDelete() { Race::tempDelete(); }

HukusimaMinbo::HukusimaMinbo() : Race("후쿠시마 민보배", new OP, new Hukusima, new TerfMiddle(2000)) {}
HukusimaMinbo::~HukusimaMinbo() {}
void HukusimaMinbo::tempNew() { Race::tempNew(); }
void HukusimaMinbo::tempDelete() { Race::tempDelete(); }

AzumacohujiS::AzumacohujiS() : Race("아즈마코후지 스테이크스", new OP, new Hukusima, new DirtMile(1700)) {}
AzumacohujiS::~AzumacohujiS() {}
void AzumacohujiS::tempNew() { Race::tempNew(); }
void AzumacohujiS::tempDelete() { Race::tempDelete(); }

HaruTen::HaruTen() : Race("텐노상 봄", new G1, new Kyoto, new TerfLong(3200)) { HaruTenWin++; }
HaruTen::~HaruTen() { HaruTenWin--; }
void HaruTen::tempNew() { Race::tempNew(); HaruTenWin++; }
void HaruTen::tempDelete() { Race::tempDelete(); HaruTenWin--; }

MilelusCup::MilelusCup() : Race("마일러스컵", new G2, new Kyoto, new TerfMile(1600)) {}
MilelusCup::~MilelusCup() {}
void MilelusCup::tempNew() { Race::tempNew(); }
void MilelusCup::tempDelete() { Race::tempDelete(); }

HukusimaUmamusumeS::HukusimaUmamusumeS() : Race("후쿠시마 우마무스메 스테이크스", new G3, new Hukusima, new TerfMile(1800)) { HukusimaUSWin++; }
HukusimaUmamusumeS::~HukusimaUmamusumeS() { HukusimaUSWin--; }
void HukusimaUmamusumeS::tempNew() { Race::tempNew(); HukusimaUSWin++; }
void HukusimaUmamusumeS::tempDelete() { Race::tempDelete(); HukusimaUSWin--; }

OasisS::OasisS() : Race("오아시스 스테이크스", new OP, new Tokyo, new DirtMile(1600)) {}
OasisS::~OasisS() {}
void OasisS::tempNew() { Race::tempNew(); }
void OasisS::tempDelete() { Race::tempDelete(); }

TennoMountainS::TennoMountainS() : Race("텐노산 스테이크스", new OP, new Kyoto, new DirtShort(1200)) {}
TennoMountainS::~TennoMountainS() {}
void TennoMountainS::tempNew() { Race::tempNew(); }
void TennoMountainS::tempDelete() { Race::tempDelete(); }

VictoriaMile::VictoriaMile() : Race("빅토리아 마일", new G1, new Tokyo, new TerfMile(1600)) { VictoriaMileWin++; }
VictoriaMile::~VictoriaMile() { VictoriaMileWin--; }
void VictoriaMile::tempNew() { Race::tempNew(); VictoriaMileWin++; }
void VictoriaMile::tempDelete() { Race::tempDelete(); VictoriaMileWin--; }

KeioSpringCup::KeioSpringCup() : Race("케이오배 스프링컵", new G2, new Tokyo, new TerfShort(1400)) {}
KeioSpringCup::~KeioSpringCup() {}
void KeioSpringCup::tempNew() { Race::tempNew(); }
void KeioSpringCup::tempDelete() { Race::tempDelete(); }

NiegataTarget::NiegataTarget() : Race("니이가타 대상전", new G3, new Niegata, new TerfMiddle(2000)) {}
NiegataTarget::~NiegataTarget() {}
void NiegataTarget::tempNew() { Race::tempNew(); }
void NiegataTarget::tempDelete() { Race::tempDelete(); }

TanigawadakeS::TanigawadakeS() : Race("타니가와다케 스테이크스", new OP, new Niegata, new TerfMile(1600)) {}
TanigawadakeS::~TanigawadakeS() {}
void TanigawadakeS::tempNew() { Race::tempNew(); }
void TanigawadakeS::tempDelete() { Race::tempDelete(); }

MetropolitanS::MetropolitanS() : Race("메트로폴리탄 스테이크스", new OP, new Tokyo, new TerfMiddle(2400)) {}
MetropolitanS::~MetropolitanS() {}
void MetropolitanS::tempNew() { Race::tempNew(); }
void MetropolitanS::tempDelete() { Race::tempDelete(); }

KuramaS::KuramaS() : Race("쿠라마 스테이크스", new OP, new Kyoto, new TerfShort(1200)) {}
KuramaS::~KuramaS() {}
void KuramaS::tempNew() { Race::tempNew(); }
void KuramaS::tempDelete() { Race::tempDelete(); }

BrilliantS::BrilliantS() : Race("브릴리언트 스테이크스", new OP, new Tokyo, new DirtMiddle(2100)) {}
BrilliantS::~BrilliantS() {}
void BrilliantS::tempNew() { Race::tempNew(); }
void BrilliantS::tempDelete() { Race::tempDelete(); }

MiyakoBackcountryS::MiyakoBackcountryS() : Race("미야코 오지 스테이크스", new OP, new Kyoto, new TerfMile(1800)) {}
MiyakoBackcountryS::~MiyakoBackcountryS() {}
void MiyakoBackcountryS::tempNew() { Race::tempNew(); }
void MiyakoBackcountryS::tempDelete() { Race::tempDelete(); }

RittoS::RittoS() : Race("릿토 스테이크스", new OP, new Kyoto, new DirtShort(1400)) {}
RittoS::~RittoS() {}
void RittoS::tempNew() { Race::tempNew(); }
void RittoS::tempDelete() { Race::tempDelete(); }

MeguroAnniversary::MeguroAnniversary() : Race("메구로 기념", new G2, new Tokyo, new TerfLong(2500)) {}
MeguroAnniversary::~MeguroAnniversary() {}
void MeguroAnniversary::tempNew() { Race::tempNew(); }
void MeguroAnniversary::tempDelete() { Race::tempDelete(); }

HeianS::HeianS() : Race("헤이안 스테이크스", new G3, new Kyoto, new DirtMiddle(1900)) {}
HeianS::~HeianS() {}
void HeianS::tempNew() { Race::tempNew(); }
void HeianS::tempDelete() { Race::tempDelete(); }

MayS::MayS() : Race("메이 스테이크스", new OP, new Tokyo, new TerfMile(1800)) {}
MayS::~MayS() {}
void MayS::tempNew() { Race::tempNew(); }
void MayS::tempDelete() { Race::tempDelete(); }

WitacheonS::WitacheonS() : Race("위타천 스테이크스", new OP, new Niegata, new TerfShort(1000)) {}
WitacheonS::~WitacheonS() {}
void WitacheonS::tempNew() { Race::tempNew(); }
void WitacheonS::tempDelete() { Race::tempDelete(); }

ZelcovaS::ZelcovaS() : Race("느티나무 스테이크스", new OP, new Tokyo, new DirtShort(1400)) {}
ZelcovaS::~ZelcovaS() {}
void ZelcovaS::tempNew() { Race::tempNew(); }
void ZelcovaS::tempDelete() { Race::tempDelete(); }

AzchiCastleS::AzchiCastleS() : Race("아즈치성 스테이크스", new OP, new Kyoto, new TerfShort(1400)) {}
AzchiCastleS::~AzchiCastleS() {}
void AzchiCastleS::tempNew() { Race::tempNew(); }
void AzchiCastleS::tempDelete() { Race::tempDelete(); }

Lord::Lord() : Race("제왕상", new G1, new Oi, new DirtMiddle(2000)) {}
Lord::~Lord() {}
void Lord::tempNew() { Race::tempNew(); }
void Lord::tempDelete() { Race::tempDelete(); }