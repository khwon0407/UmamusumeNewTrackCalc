#include "RaceHeader.hpp"
#include "RaceBase.hpp"
#include "GradeInfo.hpp"
#include "PlaceInfo.hpp"
#include "StadiumInfo.hpp"
#include "RaceList.hpp"


HacodateJrS::HacodateJrS() : Race("���ڴ��� �ִϾ� ������ũ��", new G3, new Hacodate, new TerfShort(1200)) { JuniorWin++; }
HacodateJrS::~HacodateJrS() { JuniorWin--; }
void HacodateJrS::tempNew() { Race::tempNew(); JuniorWin++; }
void HacodateJrS::tempDelete() { Race::tempDelete(); JuniorWin--; }

ChucoJrS::ChucoJrS() : Race("���� �ִϾ� ������ũ��", new OP, new Chuco, new TerfMile(1600)) { JuniorWin++; }
ChucoJrS::~ChucoJrS() { JuniorWin--; }
void ChucoJrS::tempNew() { Race::tempNew(); JuniorWin++; }
void ChucoJrS::tempDelete() { Race::tempDelete(); JuniorWin--; }

Dalia::Dalia() : Race("�޸��ƻ�", new OP, new Niegata, new TerfShort(1400)) {}
Dalia::~Dalia() {}
void Dalia::tempNew() { Race::tempNew(); }
void Dalia::tempDelete() { Race::tempDelete(); }

Pheonix::Pheonix() : Race("�Ǵн���", new OP, new Kokura, new TerfShort(1200)) {}
Pheonix::~Pheonix() {}
void Pheonix::tempNew() { Race::tempNew(); }
void Pheonix::tempDelete() { Race::tempDelete(); }

Cosmos::Cosmos() :Race("�ڽ��𽺻�", new OP, new Satporo, new TerfMile(1800)) {}
Cosmos::~Cosmos() {}
void Cosmos::tempNew() { Race::tempNew(); }
void Cosmos::tempDelete() { Race::tempDelete(); }

NiegataJrS::NiegataJrS() : Race("���̰�Ÿ �ִϾ� ������ũ��", new G3, new Niegata, new TerfMile(1600)) { JuniorWin++; }
NiegataJrS::~NiegataJrS() { JuniorWin--; }
void NiegataJrS::tempNew() { Race::tempNew(); JuniorWin++; }
void NiegataJrS::tempDelete() { Race::tempDelete(); JuniorWin--; }

Clover::Clover() : Race("Ŭ�ι���", new OP, new Satporo, new TerfMile(1500)) {}
Clover::~Clover() {}
void Clover::tempNew() { Race::tempNew(); }
void Clover::tempDelete() { Race::tempDelete(); }

SatporoJrS::SatporoJrS() : Race("������ �ִϾ� ������ũ��", new G3, new Satporo, new TerfMile(1800)) { JuniorWin++; }
SatporoJrS::~SatporoJrS() { JuniorWin--; }
void SatporoJrS::tempNew() { Race::tempNew(); JuniorWin++; }
void SatporoJrS::tempDelete() { Race::tempDelete(); JuniorWin--; }

KokuraJrS::KokuraJrS() : Race("����� �ִϾ� ������ũ��", new G3, new Kokura, new TerfShort(1200)) { JuniorWin++; }
KokuraJrS::~KokuraJrS() { JuniorWin--; }
void KokuraJrS::tempNew() { Race::tempNew(); JuniorWin++; }
void KokuraJrS::tempDelete() { Race::tempDelete(); JuniorWin--; }

Maylily::Maylily() : Race("�����ɻ�", new OP, new Satporo, new TerfShort(1200)) {}
Maylily::~Maylily() {}
void Maylily::tempNew() { Race::tempNew(); }
void Maylily::tempDelete() { Race::tempDelete(); }

DaisyS::DaisyS() : Race("�鱹ȭ ������ũ��", new OP, new Hansin, new TerfMile(1800)) {}
DaisyS::~DaisyS() {}
void DaisyS::tempNew() { Race::tempNew(); }
void DaisyS::tempDelete() { Race::tempDelete(); }

NewyorkAster::NewyorkAster() : Race("�켱����", new PreOP, new Nakayama, new TerfMile(1600)) {}
NewyorkAster::~NewyorkAster() {}
void NewyorkAster::tempNew() { Race::tempNew(); }
void NewyorkAster::tempDelete() { Race::tempDelete(); }

HibiscusS::HibiscusS() : Race("�ο�� ������ũ��", new OP, new Nakayama, new TerfMiddle(2000)) {}
HibiscusS::~HibiscusS() {}
void HibiscusS::tempNew() { Race::tempNew(); }
void HibiscusS::tempDelete() { Race::tempDelete(); }

DorajiS::DorajiS() : Race("������ ������ũ��", new OP, new Hansin, new TerfShort(1400)) {}
DorajiS::~DorajiS() {}
void DorajiS::tempNew() { Race::tempNew(); }
void DorajiS::tempDelete() { Race::tempDelete(); }

HongchoS::HongchoS() : Race("ȫ�� ������ũ��", new OP, new Nakayama, new TerfShort(1200)) {}
HongchoS::~HongchoS() {}
void HongchoS::tempNew() { Race::tempNew(); }
void HongchoS::tempDelete() { Race::tempDelete(); }

Sapran::Sapran() : Race("��������", new PreOP, new Nakayama, new TerfMile(1600)) {}
Sapran::~Sapran() {}
void Sapran::tempNew() { Race::tempNew(); }
void Sapran::tempDelete() { Race::tempDelete(); }

SaudiRoyal::SaudiRoyal() : Race("����ƶ��� �ο���", new G3, new Tokyo, new TerfMile(1600)) { SaudiWin++; }
SaudiRoyal::~SaudiRoyal() { SaudiWin--; }
void SaudiRoyal::tempNew() { Race::tempNew(); SaudiWin++; }
void SaudiRoyal::tempDelete() { Race::tempDelete(); SaudiWin--; }

MapleS::MapleS() : Race("��ǳ ������ũ��", new OP, new Kyoto, new TerfShort(1400)) {}
MapleS::~MapleS() {}
void MapleS::tempNew() { Race::tempNew(); }
void MapleS::tempDelete() { Race::tempDelete(); }

PurpleDaisy::PurpleDaisy() : Race("�ڱ�ȭ��", new PreOP, new Kyoto, new TerfMiddle(2000)) {}
PurpleDaisy::~PurpleDaisy() {}
void PurpleDaisy::tempNew() { Race::tempNew(); }
void PurpleDaisy::tempDelete() { Race::tempDelete(); }

Gentian::Gentian() : Race("����", new PreOP, new Kyoto, new TerfShort(1400)) {}
Gentian::~Gentian() {}
void Gentian::tempNew() { Race::tempNew(); }
void Gentian::tempDelete() { Race::tempDelete(); }

Platanus::Platanus() : Race("�ö�Ÿ�ʽ���", new PreOP, new Tokyo, new DirtMile(1600)) {}
Platanus::~Platanus() {}
void Platanus::tempNew() { Race::tempNew(); }
void Platanus::tempDelete() { Race::tempDelete(); }

ArtemisS::ArtemisS() : Race("�Ƹ��׹̽� ������ũ��", new G3, new Tokyo, new TerfMile(1600)) {}
ArtemisS::~ArtemisS() {}
void ArtemisS::tempNew() { Race::tempNew(); }
void ArtemisS::tempDelete() { Race::tempDelete(); }

IvyS::IvyS() : Race("���̺� ������ũ��", new OP, new Tokyo, new TerfMile(1800)) {}
IvyS::~IvyS() {}
void IvyS::tempNew() { Race::tempNew(); }
void IvyS::tempDelete() { Race::tempDelete(); }

ArtemisiaS::ArtemisiaS() : Race("��ö�� ������ũ��", new OP, new Kyoto, new TerfMile(1800)) {}
ArtemisiaS::~ArtemisiaS() {}
void ArtemisiaS::tempNew() { Race::tempNew(); }
void ArtemisiaS::tempDelete() { Race::tempDelete(); }

Gilyflower::Gilyflower() : Race("�з��̲ɻ�", new PreOP, new Kyoto, new DirtShort(1400)) {}
Gilyflower::~Gilyflower() {}
void Gilyflower::tempNew() { Race::tempNew(); }
void Gilyflower::tempDelete() { Race::tempDelete(); }

KeioJrS::KeioJrS() : Race("���̿��� �ִϾ� ������ũ��", new G2, new Tokyo, new TerfShort(1400)) { JuniorWin++; }
KeioJrS::~KeioJrS() { JuniorWin--; }
void KeioJrS::tempNew() { Race::tempNew(); JuniorWin++; }
void KeioJrS::tempDelete() { Race::tempDelete(); JuniorWin--; }

DailyJrS::DailyJrS() : Race("���ϸ��� �ִϾ� ������ũ��", new G2, new Kyoto, new TerfMile(1600)) { JuniorWin++; }
DailyJrS::~DailyJrS() { JuniorWin--; }
void DailyJrS::tempNew() { Race::tempNew(); JuniorWin++; }
void DailyJrS::tempDelete() { Race::tempDelete(); JuniorWin--; }

FantasyS::FantasyS() : Race("��Ÿ�� ������ũ��", new G3, new Kyoto, new TerfShort(1400)) {}
FantasyS::~FantasyS() {}
void FantasyS::tempNew() { Race::tempNew(); }
void FantasyS::tempDelete() { Race::tempDelete(); }

HukusimaJrS::HukusimaJrS() : Race("����ø� �ִϾ� ������ũ��", new OP, new Hukusima, new TerfShort(1200)) { JuniorWin++; }
HukusimaJrS::~HukusimaJrS() { JuniorWin--; }
void HukusimaJrS::tempNew() { Race::tempNew(); JuniorWin++; }
void HukusimaJrS::tempDelete() { Race::tempDelete(); JuniorWin--; }

HundredGrassSp::HundredGrassSp() : Race("������ Ư��", new PreOP, new Tokyo, new TerfMiddle(2000)) {}
HundredGrassSp::~HundredGrassSp() {}
void HundredGrassSp::tempNew() { Race::tempNew(); }
void HundredGrassSp::tempDelete() { Race::tempDelete(); }

GoldenTreeSp::GoldenTreeSp() : Race("�ݸ� Ư��", new PreOP, new Hukusima, new TerfMile(1800)) {}
GoldenTreeSp::~GoldenTreeSp() {}
void GoldenTreeSp::tempNew() { Race::tempNew(); }
void GoldenTreeSp::tempDelete() { Race::tempDelete(); }

LoveGrass::LoveGrass() : Race("����ʻ�", new PreOP, new Tokyo, new DirtShort(1400)) {}
LoveGrass::~LoveGrass() {}
void LoveGrass::tempNew() { Race::tempNew(); }
void LoveGrass::tempDelete() { Race::tempDelete(); }

YellowDaisy::YellowDaisy() : Race("Ȳ��ȭ��", new PreOP, new Kyoto, new TerfMiddle(2000)) {}
YellowDaisy::~YellowDaisy() {}
void YellowDaisy::tempNew() { Race::tempNew(); }
void YellowDaisy::tempDelete() { Race::tempDelete(); }

TokyoSportsJrS::TokyoSportsJrS() : Race("���� �������� �ִϾ� ������ũ��", new G3, new Tokyo, new TerfMile(1800)) { JuniorWin++; }
TokyoSportsJrS::~TokyoSportsJrS() { JuniorWin--; }
void TokyoSportsJrS::tempNew() { Race::tempNew(); JuniorWin++; }
void TokyoSportsJrS::tempDelete() { Race::tempDelete(); JuniorWin--; }

KyotoJrS::KyotoJrS() : Race("���� �ִϾ� ������ũ��", new G3, new Kyoto, new TerfMiddle(2000)) { JuniorWin++; }
KyotoJrS::~KyotoJrS() { JuniorWin--; }
void KyotoJrS::tempNew() { Race::tempNew(); JuniorWin++; }
void KyotoJrS::tempDelete() { Race::tempDelete(); JuniorWin--; }

Ilex::Ilex() :Race("����������", new PreOP, new Kyoto, new DirtMile(1800)) {}
Ilex::~Ilex() {}
void Ilex::tempNew() { Race::tempNew(); }
void Ilex::tempDelete() { Race::tempDelete(); }

RedPine::RedPine() : Race("���ۻ�", new PreOP, new Tokyo, new TerfMile(1600)) {}
RedPine::~RedPine() {}
void RedPine::tempNew() { Race::tempNew(); }
void RedPine::tempDelete() { Race::tempDelete(); }

WindFlower::WindFlower() : Race("�߸���", new PreOP, new Kyoto, new TerfShort(1400)) {}
WindFlower::~WindFlower() {}
void WindFlower::tempNew() { Race::tempNew(); }
void WindFlower::tempDelete() { Race::tempDelete(); }

Cattleya::Cattleya() : Race("īƲ���ƻ�", new PreOP, new Tokyo, new DirtMile(1600)) {}
Cattleya::~Cattleya() {}
void Cattleya::tempNew() { Race::tempNew(); }
void Cattleya::tempDelete() { Race::tempDelete(); }

Begonia::Begonia() : Race("����Ͼƻ�", new PreOP, new Tokyo, new TerfMile(1600)) {}
Begonia::~Begonia() {}
void Begonia::tempNew() { Race::tempNew(); }
void Begonia::tempDelete() { Race::tempDelete(); }

WhiteDaisy::WhiteDaisy() : Race("�鱹ȭ��", new PreOP, new Kyoto, new TerfMile(1600)) {}
WhiteDaisy::~WhiteDaisy() {}
void WhiteDaisy::tempNew() { Race::tempNew(); }
void WhiteDaisy::tempDelete() { Race::tempDelete(); }

Cauliflower::Cauliflower() : Race("���ä��", new PreOP, new Nakayama, new TerfMiddle(2000)) {}
Cauliflower::~Cauliflower() {}
void Cauliflower::tempNew() { Race::tempNew(); }
void Cauliflower::tempDelete() { Race::tempDelete(); }

GoldPine::GoldPine() : Race("�ݼۻ�", new PreOP, new Chuco, new TerfMile(1600)) {}
GoldPine::~GoldPine() {}
void GoldPine::tempNew() { Race::tempNew(); }
void GoldPine::tempDelete() { Race::tempDelete(); }

AsahiFuturityS::AsahiFuturityS() : Race("�ƻ����� ǻó��Ƽ ������ũ��", new G1, new Hansin, new TerfMile(1600)) {}
AsahiFuturityS::~AsahiFuturityS() {}
void AsahiFuturityS::tempNew() { Race::tempNew(); }
void AsahiFuturityS::tempDelete() { Race::tempDelete(); }

HansinJuvnileFillis::HansinJuvnileFillis() : Race("�ѽ� ������� �ʸ���", new G1, new Hansin, new TerfMile(1600)) { HansinJFWin++; }
HansinJuvnileFillis::~HansinJuvnileFillis() { HansinJFWin--; }
void HansinJuvnileFillis::tempNew() { Race::tempNew(); HansinJFWin++; }
void HansinJuvnileFillis::tempDelete() { Race::tempDelete(); HansinJFWin--; }

CoralAdisia::CoralAdisia() : Race("�鷮�ݻ�", new PreOP, new Hansin, new TerfShort(1400)) {}
CoralAdisia::~CoralAdisia() {}
void CoralAdisia::tempNew() { Race::tempNew(); }
void CoralAdisia::tempDelete() { Race::tempDelete(); }

BlackPine::BlackPine() : Race("��ۻ�", new PreOP, new Nakayama, new TerfShort(1200)) {}
BlackPine::~BlackPine() {}
void BlackPine::tempNew() { Race::tempNew(); }
void BlackPine::tempDelete() { Race::tempDelete(); }

Erica::Erica() : Race("����ī��", new PreOP, new Hansin, new TerfMiddle(2000)) {}
Erica::~Erica() {}
void Erica::tempNew() { Race::tempNew(); }
void Erica::tempDelete() { Race::tempDelete(); }

TeolMuwhi::TeolMuwhi() : Race("�и�����", new PreOP, new Chuco, new TerfShort(1400)) {}
TeolMuwhi::~TeolMuwhi() {}
void TeolMuwhi::tempNew() { Race::tempNew(); }
void TeolMuwhi::tempDelete() { Race::tempDelete(); }

Holly::Holly() : Race("ȣ�����ó�����", new PreOP, new Nakayama, new TerfMile(1600)) {}
Holly::~Holly() {}
void Holly::tempNew() { Race::tempNew(); }
void Holly::tempDelete() { Race::tempDelete(); }

Sanqua::Sanqua() : Race("���ȭ��", new PreOP, new Hansin, new TerfShort(1200)) {}
Sanqua::~Sanqua() {}
void Sanqua::tempNew() { Race::tempNew(); }
void Sanqua::tempDelete() { Race::tempDelete(); }

WinterCamellia::WinterCamellia() : Race("�ܿﵿ���", new PreOP, new Chuco, new DirtShort(1400)) {}
WinterCamellia::~WinterCamellia() {}
void WinterCamellia::tempNew() { Race::tempNew(); }
void WinterCamellia::tempDelete() { Race::tempDelete(); }

HopefulS::HopefulS() : Race("ȣ��Ǯ ������ũ��", new G1, new Nakayama, new TerfMiddle(2000)) {}
HopefulS::~HopefulS() {}
void HopefulS::tempNew() { Race::tempNew(); }
void HopefulS::tempDelete() { Race::tempDelete(); }

ChristmasRoseS::ChristmasRoseS() : Race("ũ�������� ���� ������ũ��", new OP, new Nakayama, new TerfShort(1200)) {}
ChristmasRoseS::~ChristmasRoseS() {}
void ChristmasRoseS::tempNew() { Race::tempNew(); }
void ChristmasRoseS::tempDelete() { Race::tempDelete(); }

Sarcandra::Sarcandra() : Race("�����ʻ�", new PreOP, new Hansin, new TerfMile(1600)) {}
Sarcandra::~Sarcandra() {}
void Sarcandra::tempNew() { Race::tempNew(); }
void Sarcandra::tempDelete() { Race::tempDelete(); }

Keisei::Keisei() : Race("���̼��̹�", new G3, new Nakayama, new TerfMiddle(2000)) {}
Keisei::~Keisei() {}
void Keisei::tempNew() { Race::tempNew(); }
void Keisei::tempDelete() { Race::tempDelete(); }

SinjanAnniversary::SinjanAnniversary() : Race("���� ���", new G3, new Kyoto, new TerfMile(1600)) {}
SinjanAnniversary::~SinjanAnniversary() {}
void SinjanAnniversary::tempNew() { Race::tempNew(); }
void SinjanAnniversary::tempDelete() { Race::tempDelete(); }

FairyS::FairyS() : Race("�� ������ũ��", new G3, new Nakayama, new TerfMile(1600)) {}
FairyS::~FairyS() {}
void FairyS::tempNew() { Race::tempNew(); }
void FairyS::tempDelete() { Race::tempDelete(); }

JrCup::JrCup() : Race("�ִϾ���", new OP, new Nakayama, new TerfMile(1600)) {}
JrCup::~JrCup() {}
void JrCup::tempNew() { Race::tempNew(); }
void JrCup::tempDelete() { Race::tempDelete(); }

RedPlum::RedPlum() : Race("ȫ��ȭ ������ũ��", new OP, new Kyoto, new TerfShort(1400)) {}
RedPlum::~RedPlum() {}
void RedPlum::tempNew() { Race::tempNew(); }
void RedPlum::tempDelete() { Race::tempDelete(); }

WakagomaS::WakagomaS() : Race("��ī�� ������ũ��", new OP, new Kyoto, new TerfMiddle(2000)) {}
WakagomaS::~WakagomaS() {}
void WakagomaS::tempNew() { Race::tempNew(); }
void WakagomaS::tempDelete() { Race::tempDelete(); }

CroakersS::CroakersS() : Race("ũ��Ŀ�� ������ũ��", new OP, new Tokyo, new TerfShort(1400)) {}
CroakersS::~CroakersS() {}
void CroakersS::tempNew() { Race::tempNew(); }
void CroakersS::tempDelete() { Race::tempDelete(); }

Kisaragi::Kisaragi() : Race("Ű�����", new G3, new Kyoto, new TerfMile(1800)) {}
Kisaragi::~Kisaragi() {}
void Kisaragi::tempNew() { Race::tempNew(); }
void Kisaragi::tempDelete() { Race::tempDelete(); }

QueenCup::QueenCup() : Race("����", new G3, new Tokyo, new TerfMile(1600)) {}
QueenCup::~QueenCup() {}
void QueenCup::tempNew() { Race::tempNew(); }
void QueenCup::tempDelete() { Race::tempDelete(); }

KyodoCommunication::KyodoCommunication() : Race("�쵵��Ź�", new G3, new Tokyo, new TerfMile(1800)) {}
KyodoCommunication::~KyodoCommunication() {}
void KyodoCommunication::tempNew() { Race::tempNew(); }
void KyodoCommunication::tempDelete() { Race::tempDelete(); }

ElfinS::ElfinS() : Race("���� ������ũ��", new OP, new Kyoto, new TerfMile(1600)) {}
ElfinS::~ElfinS() {}
void ElfinS::tempNew() { Race::tempNew(); }
void ElfinS::tempDelete() { Race::tempDelete(); }

VioletS::VioletS() : Race("����� ������ũ��", new OP, new Hansin, new TerfMiddle(2200)) {}
VioletS::~VioletS() {}
void VioletS::tempNew() { Race::tempNew(); }
void VioletS::tempDelete() { Race::tempDelete(); }

HyacinthS::HyacinthS() : Race("���ƽŽ� ������ũ��", new OP, new Tokyo, new DirtMile(1600)) {}
HyacinthS::~HyacinthS() {}
void HyacinthS::tempNew() { Race::tempNew(); }
void HyacinthS::tempDelete() { Race::tempDelete(); }

MagaretS::MagaretS() : Race("������ ������ũ��", new OP, new Hansin, new TerfShort(1200)) {}
MagaretS::~MagaretS() {}
void MagaretS::tempNew() { Race::tempNew(); }
void MagaretS::tempDelete() { Race::tempDelete(); }

Yayoi::Yayoi() : Race("�߿��̻�", new G2, new Nakayama, new TerfMiddle(2000)) {}
Yayoi::~Yayoi() {}
void Yayoi::tempNew() { Race::tempNew(); }
void Yayoi::tempDelete() { Race::tempDelete(); }

Tulip::Tulip() : Race("ƫ����", new G2, new Hansin, new TerfMile(1600)) {}
Tulip::~Tulip() {}
void Tulip::tempNew() { Race::tempNew(); }
void Tulip::tempDelete() { Race::tempDelete(); }

FillisLevue::FillisLevue() : Race("�ʸ��� ����", new G2, new Hansin, new TerfShort(1400)) {}
FillisLevue::~FillisLevue() {}
void FillisLevue::tempNew() { Race::tempNew(); }
void FillisLevue::tempDelete() { Race::tempDelete(); }

AnemoneS::AnemoneS() : Race("�Ƴ׸�� ������ũ��", new OP, new Nakayama, new TerfMile(1600)) {}
AnemoneS::~AnemoneS() {}
void AnemoneS::tempNew() { Race::tempNew(); }
void AnemoneS::tempDelete() { Race::tempDelete(); }

UpDragonS::UpDragonS() : Race("�·� ������ũ��", new OP, new Chuco, new DirtShort(1400)) {}
UpDragonS::~UpDragonS() {}
void UpDragonS::tempNew() { Race::tempNew(); }
void UpDragonS::tempDelete() { Race::tempDelete(); }

SpringS::SpringS() : Race("������ ������ũ��", new G2, new Nakayama, new TerfMile(1800)) {}
SpringS::~SpringS() {}
void SpringS::tempNew() { Race::tempNew(); }
void SpringS::tempDelete() { Race::tempDelete(); }

FalconS::FalconS() : Race("���� ������ũ��", new G3, new Chuco, new TerfShort(1400)) {}
FalconS::~FalconS() {}
void FalconS::tempNew() { Race::tempNew(); }
void FalconS::tempDelete() { Race::tempDelete(); }

FlowerCup::FlowerCup() : Race("�ö����", new G3, new Nakayama, new TerfMile(1800)) {}
FlowerCup::~FlowerCup() {}
void FlowerCup::tempNew() { Race::tempNew(); }
void FlowerCup::tempDelete() { Race::tempDelete(); }

Mainichi::Mainichi() : Race("���̴�ġ��", new G3, new Hansin, new TerfMile(1800)) {}
Mainichi::~Mainichi() {}
void Mainichi::tempNew() { Race::tempNew(); }
void Mainichi::tempDelete() { Race::tempDelete(); }

NewLeafS::NewLeafS() : Race("���� ������ũ��", new OP, new Hansin, new TerfMiddle(2000)) {}
NewLeafS::~NewLeafS() {}
void NewLeafS::tempNew() { Race::tempNew(); }
void NewLeafS::tempDelete() { Race::tempDelete(); }

Satsuki::Satsuki() : Race("����Ű��", new G1, new Nakayama, new TerfMiddle(2000)) { SatsukiWin++; }
Satsuki::~Satsuki() { SatsukiWin--; }
void Satsuki::tempNew() { Race::tempNew(); SatsukiWin++; }
void Satsuki::tempDelete() { Race::tempDelete(); SatsukiWin--; }

Sakura::Sakura() : Race("���ɻ�", new G1, new Hansin, new TerfMile(1600)) { SakuraWin++; }
Sakura::~Sakura() { SakuraWin--; }
void Sakura::tempNew() { Race::tempNew(); SakuraWin++; }
void Sakura::tempDelete() { Race::tempDelete(); SakuraWin--; }

NewZealandTrophie::NewZealandTrophie() : Race("�������� Ʈ����", new G2, new Nakayama, new TerfMile(1600)) { NewZealandWin++; }
NewZealandTrophie::~NewZealandTrophie() { NewZealandWin--; }
void NewZealandTrophie::tempNew() { Race::tempNew(); NewZealandWin++; }
void NewZealandTrophie::tempDelete() { Race::tempDelete(); NewZealandWin--; }

AllingtonCup::AllingtonCup() : Race("�˸�����", new G3, new Hansin, new TerfMile(1600)) {}
AllingtonCup::~AllingtonCup() {}
void AllingtonCup::tempNew() { Race::tempNew(); }
void AllingtonCup::tempDelete() { Race::tempDelete(); }

HideDragonS::HideDragonS() : Race("���� ������ũ��", new OP, new Nakayama, new DirtMile(1800)) {}
HideDragonS::~HideDragonS() {}
void HideDragonS::tempNew() { Race::tempNew(); }
void HideDragonS::tempDelete() { Race::tempDelete(); }

ForgetMeNot::ForgetMeNot() : Race("�����ʻ�", new OP, new Hansin, new TerfMiddle(2000)) {}
ForgetMeNot::~ForgetMeNot() {}
void ForgetMeNot::tempNew() { Race::tempNew(); }
void ForgetMeNot::tempDelete() { Race::tempDelete(); }

BlueLeaf::BlueLeaf() : Race("û����", new G2, new Tokyo, new TerfMiddle(2400)) {}
BlueLeaf::~BlueLeaf() {}
void BlueLeaf::tempNew() { Race::tempNew(); }
void BlueLeaf::tempDelete() { Race::tempDelete(); }

FloraS::FloraS() : Race("�÷ζ� ������ũ��", new G2, new Tokyo, new TerfMiddle(2000)) {}
FloraS::~FloraS() {}
void FloraS::tempNew() { Race::tempNew(); }
void FloraS::tempDelete() { Race::tempDelete(); }

TangerineS::TangerineS() : Race("�а� ������ũ��", new OP, new Kyoto, new TerfShort(1400)) {}
TangerineS::~TangerineS() {}
void TangerineS::tempNew() { Race::tempNew(); }
void TangerineS::tempDelete() { Race::tempDelete(); }

DanoS::DanoS() : Race("�ܿ� ������ũ��", new OP, new Kyoto, new DirtShort(1400)) {}
DanoS::~DanoS() {}
void DanoS::tempNew() { Race::tempNew(); }
void DanoS::tempDelete() { Race::tempDelete(); }

SweetpeaS::SweetpeaS() : Race("����Ʈ�� ������ũ��", new OP, new Tokyo, new TerfMile(1800)) {}
SweetpeaS::~SweetpeaS() {}
void SweetpeaS::tempNew() { Race::tempNew(); }
void SweetpeaS::tempDelete() { Race::tempDelete(); }

NHKMileCup::NHKMileCup() : Race("NHK ������", new G1, new Tokyo, new TerfMile(1600)) { NHKMileCupWin++; }
NHKMileCup::~NHKMileCup() { NHKMileCupWin--; }
void NHKMileCup::tempNew() { Race::tempNew(); NHKMileCupWin++; }
void NHKMileCup::tempDelete() { Race::tempDelete(); NHKMileCupWin--; }

KyotoNewspaper::KyotoNewspaper() : Race("���� �Ź���", new G2, new Kyoto, new TerfMiddle(2200)) {}
KyotoNewspaper::~KyotoNewspaper() {}
void KyotoNewspaper::tempNew() { Race::tempNew(); }
void KyotoNewspaper::tempDelete() { Race::tempDelete(); }

PrincipalS::PrincipalS() : Race("�������� ������ũ��", new OP, new Tokyo, new TerfMiddle(2000)) {}
PrincipalS::~PrincipalS() {}
void PrincipalS::tempNew() { Race::tempNew(); }
void PrincipalS::tempDelete() { Race::tempDelete(); }

BlueDragonS::BlueDragonS() : Race("û�� ������ũ��", new OP, new Tokyo, new DirtMile(1600)) {}
BlueDragonS::~BlueDragonS() {}
void BlueDragonS::tempNew() { Race::tempNew(); }
void BlueDragonS::tempDelete() { Race::tempDelete(); }

JapanDubby::JapanDubby() : Race("�Ϻ� ����", new G1, new Tokyo, new TerfMiddle(2400)) { JapanDubbyWin++; }
JapanDubby::~JapanDubby() { JapanDubbyWin--; }
void JapanDubby::tempNew() { Race::tempNew(); JapanDubbyWin++; }
void JapanDubby::tempDelete() { Race::tempDelete(); JapanDubbyWin--; }

Oaks::Oaks() : Race("��ũ��", new G1, new Tokyo, new TerfMiddle(2400)) { OaksWin++; }
Oaks::~Oaks() { OaksWin--; }
void Oaks::tempNew() { Race::tempNew(); OaksWin++; }
void Oaks::tempDelete() { Race::tempDelete(); OaksWin--; }

DishFlowerS::DishFlowerS() : Race("���ò� ������ũ��", new G3, new Kyoto, new TerfShort(1200)) {}
DishFlowerS::~DishFlowerS() {}
void DishFlowerS::tempNew() { Race::tempNew(); }
void DishFlowerS::tempDelete() { Race::tempDelete(); }

BongchuS::BongchuS() : Race("���� ������ũ��", new OP, new Kyoto, new DirtMile(1800)) {}
BongchuS::~BongchuS() {}
void BongchuS::tempNew() { Race::tempNew(); }
void BongchuS::tempDelete() { Race::tempDelete(); }

WhiteLilyS::WhiteLilyS() : Race("����� ������ũ��", new OP, new Kyoto, new TerfMile(1800)) {}
WhiteLilyS::~WhiteLilyS() {}
void WhiteLilyS::tempNew() { Race::tempNew(); }
void WhiteLilyS::tempDelete() { Race::tempDelete(); }

YasudaAnniversary::YasudaAnniversary() : Race("�߽��� ���", new G1, new Tokyo, new TerfMile(1600)) { YasudaWin++; }
YasudaAnniversary::~YasudaAnniversary() { YasudaWin--; }
void YasudaAnniversary::tempNew() { Race::tempNew(); YasudaWin++; }
void YasudaAnniversary::tempDelete() { Race::tempDelete(); YasudaWin--; }

MermaidS::MermaidS() : Race("�Ӹ��̵� ������ũ��", new G3, new Hansin, new TerfMiddle(2000)) {}
MermaidS::~MermaidS() {}
void MermaidS::tempNew() { Race::tempNew(); }
void MermaidS::tempDelete() { Race::tempDelete(); }

NaruoAnniversary::NaruoAnniversary() : Race("����� ���", new G3, new Hansin, new TerfMiddle(2000)) {}
NaruoAnniversary::~NaruoAnniversary() {}
void NaruoAnniversary::tempNew() { Race::tempNew(); }
void NaruoAnniversary::tempDelete() { Race::tempDelete(); }

EpsumCup::EpsumCup() : Race("������", new G3, new Tokyo, new TerfMile(1800)) {}
EpsumCup::~EpsumCup() {}
void EpsumCup::tempNew() { Race::tempNew(); }
void EpsumCup::tempDelete() { Race::tempDelete(); }

TenposanS::TenposanS() : Race("������ ������ũ��", new OP, new Hansin, new DirtShort(1400)) {}
TenposanS::~TenposanS() {}
void TenposanS::tempNew() { Race::tempNew(); }
void TenposanS::tempDelete() { Race::tempDelete(); }

SleipnirS::SleipnirS() : Race("���������ϸ� ������ũ��", new OP, new Tokyo, new DirtMiddle(2100)) {}
SleipnirS::~SleipnirS() {}
void SleipnirS::tempNew() { Race::tempNew(); }
void SleipnirS::tempDelete() { Race::tempDelete(); }

TakarazukaAnniversary::TakarazukaAnniversary() : Race("Ÿī����ī ���", new G1, new Hansin, new TerfMiddle(2200)) { TakarazukaWin++; }
TakarazukaAnniversary::~TakarazukaAnniversary() { TakarazukaWin--; }
void TakarazukaAnniversary::tempNew() { Race::tempNew(); TakarazukaWin++; }
void TakarazukaAnniversary::tempDelete() { Race::tempDelete(); TakarazukaWin--; }

HakodateSprintS::HakodateSprintS() : Race("���ڴ��� ������Ʈ ������ũ��", new G3, new Hacodate, new TerfShort(1200)) {}
HakodateSprintS::~HakodateSprintS() {}
void HakodateSprintS::tempNew() { Race::tempNew(); }
void HakodateSprintS::tempDelete() { Race::tempDelete(); }

UnicornS::UnicornS() : Race("������ ������ũ��", new G3, new Tokyo, new DirtMile(1600)) { UnicornSWin++; }
UnicornS::~UnicornS() { UnicornSWin--; }
void UnicornS::tempNew() { Race::tempNew(); UnicornSWin++; }
void UnicornS::tempDelete() { Race::tempDelete(); UnicornSWin--; }

AhalTekeS::AhalTekeS() : Race("���� ���� ������ũ��", new OP, new Tokyo, new DirtMile(1600)) {}
AhalTekeS::~AhalTekeS() {}
void AhalTekeS::tempNew() { Race::tempNew(); }
void AhalTekeS::tempDelete() { Race::tempDelete(); }

YonagoS::YonagoS() : Race("�䳪�� ������ũ��", new OP, new Hansin, new TerfMile(1600)) {}
YonagoS::~YonagoS() {}
void YonagoS::tempNew() { Race::tempNew(); }
void YonagoS::tempDelete() { Race::tempDelete(); }

OnumaS::OnumaS() : Race("������ ������ũ��", new OP, new Hacodate, new DirtMile(1700)) {}
OnumaS::~OnumaS() {}
void OnumaS::tempNew() { Race::tempNew(); }
void OnumaS::tempDelete() { Race::tempDelete(); }

ParadiseS::ParadiseS() : Race("�Ķ���̽� ������ũ��", new OP, new Tokyo, new TerfShort(1400)) {}
ParadiseS::~ParadiseS() {}
void ParadiseS::tempNew() { Race::tempNew(); }
void ParadiseS::tempDelete() { Race::tempDelete(); }

SannomiyaS::SannomiyaS() : Race("���̾� ������ũ��", new OP, new Hansin, new DirtMile(1800)) {}
SannomiyaS::~SannomiyaS() {}
void SannomiyaS::tempNew() { Race::tempNew(); }
void SannomiyaS::tempDelete() { Race::tempDelete(); }

JapanDirtDubby::JapanDirtDubby() : Race("���� ��Ʈ ����", new G1, new Oi, new DirtMiddle(2000)) { JapanDirtDubbyWin++; }
JapanDirtDubby::~JapanDirtDubby() { JapanDirtDubbyWin--; }
void JapanDirtDubby::tempNew() { Race::tempNew(); JapanDirtDubbyWin++; }
void JapanDirtDubby::tempDelete() { Race::tempDelete(); JapanDirtDubbyWin--; }

CBC::CBC() : Race("CBC��", new G3, new Chuco, new TerfShort(1200)) {}
CBC::~CBC() {}
void CBC::tempNew() { Race::tempNew(); }
void CBC::tempDelete() { Race::tempDelete(); }

ProsionS::ProsionS() : Race("���̽ÿ� ������ũ��", new G3, new Chuco, new DirtShort(1400)) {}
ProsionS::~ProsionS() {}
void ProsionS::tempNew() { Race::tempNew(); }
void ProsionS::tempDelete() { Race::tempDelete(); }

RadioNIKKEI::RadioNIKKEI() : Race("���� NIKKEI��", new G3, new Hukusima, new TerfMile(1800)) {}
RadioNIKKEI::~RadioNIKKEI() {}
void RadioNIKKEI::tempNew() { Race::tempNew(); }
void RadioNIKKEI::tempDelete() { Race::tempDelete(); }

Tanabata::Tanabata() : Race("ĥ����", new G3, new Hukusima, new TerfMiddle(2000)) {}
Tanabata::~Tanabata() {}
void Tanabata::tempNew() { Race::tempNew(); }
void Tanabata::tempDelete() { Race::tempDelete(); }

HakodateAnniversary::HakodateAnniversary() : Race("���ڴ��� ���", new G3, new Hacodate, new TerfMiddle(2000)) {}
HakodateAnniversary::~HakodateAnniversary() {}
void HakodateAnniversary::tempNew() { Race::tempNew(); }
void HakodateAnniversary::tempDelete() { Race::tempDelete(); }

Tomoe::Tomoe() : Race("��𿡻�", new OP, new Hacodate, new TerfMile(1800)) {}
Tomoe::~Tomoe() {}
void Tomoe::tempNew() { Race::tempNew(); }
void Tomoe::tempDelete() { Race::tempDelete(); }

MarineS::MarineS() : Race("���� ������ũ��", new OP, new Hacodate, new DirtMile(1700)) {}
MarineS::~MarineS() {}
void MarineS::tempNew() { Race::tempNew(); }
void MarineS::tempDelete() { Race::tempDelete(); }

NagoyaTrain::NagoyaTrain() : Race("����� ö����", new OP, new Chuco, new DirtMile(1800)) {}
NagoyaTrain::~NagoyaTrain() {}
void NagoyaTrain::tempNew() { Race::tempNew(); }
void NagoyaTrain::tempDelete() { Race::tempDelete(); }

ChucoAnniversary::ChucoAnniversary() : Race("���� ���", new G3, new Chuco, new TerfMile(1600)) {}
ChucoAnniversary::~ChucoAnniversary() {}
void ChucoAnniversary::tempNew() { Race::tempNew(); }
void ChucoAnniversary::tempDelete() { Race::tempDelete(); }

IviesSummerDash::IviesSummerDash() : Race("�̺� ���� ���", new G3, new Niegata, new TerfShort(1000)) {}
IviesSummerDash::~IviesSummerDash() {}
void IviesSummerDash::tempNew() { Race::tempNew(); }
void IviesSummerDash::tempDelete() { Race::tempDelete(); }

QueenS::QueenS() : Race("�� ������ũ��", new G3, new Satporo, new TerfMile(1800)) {}
QueenS::~QueenS() {}
void QueenS::tempNew() { Race::tempNew(); }
void QueenS::tempDelete() { Race::tempDelete(); }

HukusimaTVOpen::HukusimaTVOpen() : Race("����ø� TV ����", new OP, new Hukusima, new TerfShort(1200)) {}
HukusimaTVOpen::~HukusimaTVOpen() {}
void HukusimaTVOpen::tempNew() { Race::tempNew(); }
void HukusimaTVOpen::tempDelete() { Race::tempDelete(); }

SekiyaAnniversary::SekiyaAnniversary() : Race("��Ű�� ���", new G3, new Niegata, new TerfMile(1600)) {}
SekiyaAnniversary::~SekiyaAnniversary() {}
void SekiyaAnniversary::tempNew() { Race::tempNew(); }
void SekiyaAnniversary::tempDelete() { Race::tempDelete(); }

ElemS::ElemS() : Race("���� ������ũ��", new G3, new Satporo, new DirtMile(1700)) {}
ElemS::~ElemS() {}
void ElemS::tempNew() { Race::tempNew(); }
void ElemS::tempDelete() { Race::tempDelete(); }

LeopardS::LeopardS() : Race("�����ĵ� ������ũ��", new G3, new Niegata, new DirtMile(1800)) { LeopardSWin++; }
LeopardS::~LeopardS() { LeopardSWin--; }
void LeopardS::tempNew() { Race::tempNew(); LeopardSWin++; }
void LeopardS::tempDelete() { Race::tempDelete(); LeopardSWin--; }

KokuraAnniversary::KokuraAnniversary() : Race("����� ���", new G3, new Kokura, new TerfMiddle(2000)) {}
KokuraAnniversary::~KokuraAnniversary() {}
void KokuraAnniversary::tempNew() { Race::tempNew(); }
void KokuraAnniversary::tempDelete() { Race::tempDelete(); }

SatporoNikkeiOpen::SatporoNikkeiOpen() : Race("������ ������ ����", new OP, new Satporo, new TerfLong(2600)) {}
SatporoNikkeiOpen::~SatporoNikkeiOpen() {}
void SatporoNikkeiOpen::tempNew() { Race::tempNew(); }
void SatporoNikkeiOpen::tempDelete() { Race::tempDelete(); }

UHB::UHB() : Race("UHB��", new OP, new Satporo, new TerfShort(1200)) {}
UHB::~UHB() {}
void UHB::tempNew() { Race::tempNew(); }
void UHB::tempDelete() { Race::tempDelete(); }

AsoS::AsoS() : Race("�Ƽ� ������ũ��", new OP, new Kokura, new DirtMile(1700)) {}
AsoS::~AsoS() {}
void AsoS::tempNew() { Race::tempNew(); }
void AsoS::tempDelete() { Race::tempDelete(); }

KanetsuS::KanetsuS() : Race("������ ������ũ��", new OP, new Niegata, new TerfMile(1800)) {}
KanetsuS::~KanetsuS() {}
void KanetsuS::tempNew() { Race::tempNew(); }
void KanetsuS::tempDelete() { Race::tempDelete(); }

SatporoAnniversary::SatporoAnniversary() : Race("������ ���", new G2, new Satporo, new TerfMiddle(2000)) {}
SatporoAnniversary::~SatporoAnniversary() {}
void SatporoAnniversary::tempNew() { Race::tempNew(); }
void SatporoAnniversary::tempDelete() { Race::tempDelete(); }

KitakyushuAnniversary::KitakyushuAnniversary() : Race("ŰŸť�� ���", new G3, new Kokura, new TerfShort(1200)) {}
KitakyushuAnniversary::~KitakyushuAnniversary() {}
void KitakyushuAnniversary::tempNew() { Race::tempNew(); }
void KitakyushuAnniversary::tempDelete() { Race::tempDelete(); }

KinlandCup::KinlandCup() : Race("Ų������", new G3, new Satporo, new TerfShort(1200)) {}
KinlandCup::~KinlandCup() {}
void KinlandCup::tempNew() { Race::tempNew(); }
void KinlandCup::tempDelete() { Race::tempDelete(); }

NST::NST() : Race("NST��", new OP, new Niegata, new DirtShort(1200)) {}
NST::~NST() {}
void NST::tempNew() { Race::tempNew(); }
void NST::tempDelete() { Race::tempDelete(); }

BSN::BSN() : Race("BSN��", new OP, new Niegata, new DirtMile(1800)) {}
BSN::~BSN() {}
void BSN::tempNew() { Race::tempNew(); }
void BSN::tempDelete() { Race::tempDelete(); }

KokuraNikkeiOpen::KokuraNikkeiOpen() : Race("����� ������ ����", new OP, new Kokura, new TerfMile(1800)) {}
KokuraNikkeiOpen::~KokuraNikkeiOpen() {}
void KokuraNikkeiOpen::tempNew() { Race::tempNew(); }
void KokuraNikkeiOpen::tempDelete() { Race::tempDelete(); }

IbisS::IbisS() : Race("������ ������ũ��", new OP, new Niegata, new TerfShort(1400)) {}
IbisS::~IbisS() {}
void IbisS::tempNew() { Race::tempNew(); }
void IbisS::tempDelete() { Race::tempDelete(); }

RoseS::RoseS() : Race("���� ������ũ��", new G2, new Hansin, new TerfMile(1800)) {}
RoseS::~RoseS() {}
void RoseS::tempNew() { Race::tempNew(); }
void RoseS::tempDelete() { Race::tempDelete(); }

SentoS::SentoS() : Race("���� ������ũ��", new G2, new Hansin, new TerfShort(1200)) {}
SentoS::~SentoS() {}
void SentoS::tempNew() { Race::tempNew(); }
void SentoS::tempDelete() { Race::tempDelete(); }

KeiseiAutumnHandicap::KeiseiAutumnHandicap() : Race("���̼��̹� ���� �ڵ�ĸ", new G3, new Nakayama, new TerfMile(1600)) {}
KeiseiAutumnHandicap::~KeiseiAutumnHandicap() {}
void KeiseiAutumnHandicap::tempNew() { Race::tempNew(); }
void KeiseiAutumnHandicap::tempDelete() { Race::tempDelete(); }

TartarianAsterS::TartarianAsterS() : Race("������ ������ũ��", new G3, new Nakayama, new TerfMiddle(2000)) {}
TartarianAsterS::~TartarianAsterS() {}
void TartarianAsterS::tempNew() { Race::tempNew(); }
void TartarianAsterS::tempDelete() { Race::tempDelete(); }

NiegataAnniversary::NiegataAnniversary() : Race("���̰�Ÿ ���", new G3, new Niegata, new TerfMiddle(2000)) {}
NiegataAnniversary::~NiegataAnniversary() {}
void NiegataAnniversary::tempNew() { Race::tempNew(); }
void NiegataAnniversary::tempDelete() { Race::tempDelete(); }

CraneS::CraneS() : Race("�η�� ������ũ��", new OP, new Satporo, new TerfLong(2600)) {}
CraneS::~CraneS() {}
void CraneS::tempNew() { Race::tempNew(); }
void CraneS::tempDelete() { Race::tempDelete(); }

EnifS::EnifS() : Race("������ ������ũ��", new OP, new Hansin, new DirtShort(1400)) {}
EnifS::~EnifS() {}
void EnifS::tempNew() { Race::tempNew(); }
void EnifS::tempDelete() { Race::tempDelete(); }

RadioJapan::RadioJapan() : Race("���� �Ϻ���", new OP, new Nakayama, new DirtMile(1800)) {}
RadioJapan::~RadioJapan() {}
void RadioJapan::tempNew() { Race::tempNew(); }
void RadioJapan::tempDelete() { Race::tempDelete(); }

SprintersS::SprintersS() : Race("���������� ������ũ��", new G1, new Nakayama, new TerfShort(1200)) { SprintersSWin++; }
SprintersS::~SprintersS() { SprintersSWin--; }
void SprintersS::tempNew() { Race::tempNew(); SprintersSWin++; }
void SprintersS::tempDelete() { Race::tempDelete(); SprintersSWin--; }

SentlightAnniversary::SentlightAnniversary() : Race("��Ʈ����Ʈ ���", new G2, new Nakayama, new TerfMiddle(2200)) {}
SentlightAnniversary::~SentlightAnniversary() {}
void SentlightAnniversary::tempNew() { Race::tempNew(); }
void SentlightAnniversary::tempDelete() { Race::tempDelete(); }

AllCummers::AllCummers() : Race("�� Ŀ�ӽ�", new G2, new Nakayama, new TerfMiddle(2200)) {}
AllCummers::~AllCummers() {}
void AllCummers::tempNew() { Race::tempNew(); }
void AllCummers::tempDelete() { Race::tempDelete(); }

KobeNewspaper::KobeNewspaper() : Race("�� �Ź���", new G2, new Hansin, new TerfMiddle(2400)) {}
KobeNewspaper::~KobeNewspaper() {}
void KobeNewspaper::tempNew() { Race::tempNew(); }
void KobeNewspaper::tempDelete() { Race::tempDelete(); }

SerioosS::SerioosS() : Race("�ø��콺 ������ũ��", new G3, new Hansin, new DirtMiddle(2000)) {}
SerioosS::~SerioosS() {}
void SerioosS::tempNew() { Race::tempNew(); }
void SerioosS::tempDelete() { Race::tempDelete(); }

PortIslandS::PortIslandS() : Race("��Ʈ���Ϸ��� ������ũ��", new OP, new Hansin, new TerfMile(1600)) {}
PortIslandS::~PortIslandS() {}
void PortIslandS::tempNew() { Race::tempNew(); }
void PortIslandS::tempDelete() { Race::tempDelete(); }

NakatsukiS::NakatsukiS() : Race("��ī��Ű ������ũ��", new OP, new Nakayama, new DirtShort(1200)) {}
NakatsukiS::~NakatsukiS() {}
void NakatsukiS::tempNew() { Race::tempNew(); }
void NakatsukiS::tempDelete() { Race::tempDelete(); }

HuchuUmamusumeS::HuchuUmamusumeS() : Race("���� �츶������ ������ũ��", new G2, new Tokyo, new TerfMile(1800)) { HuchuUSWin++; }
HuchuUmamusumeS::~HuchuUmamusumeS() { HuchuUSWin--; }
void HuchuUmamusumeS::tempNew() { Race::tempNew(); HuchuUSWin++; }
void HuchuUmamusumeS::tempDelete() { Race::tempDelete(); HuchuUSWin--; }

MainichiCrown::MainichiCrown() : Race("���̴�ġ �հ�", new G2, new Tokyo, new TerfMile(1800)) {}
MainichiCrown::~MainichiCrown() {}
void MainichiCrown::tempNew() { Race::tempNew(); }
void MainichiCrown::tempDelete() { Race::tempDelete(); }

KyotoTarget::KyotoTarget() : Race("���� �����", new G2, new Kyoto, new TerfMiddle(2400)) {}
KyotoTarget::~KyotoTarget() {}
void KyotoTarget::tempNew() { Race::tempNew(); }
void KyotoTarget::tempDelete() { Race::tempDelete(); }

OpalS::OpalS() : Race("���� ������ũ��", new OP, new Kyoto, new TerfShort(1200)) {}
OpalS::~OpalS() {}
void OpalS::tempNew() { Race::tempNew(); }
void OpalS::tempDelete() { Race::tempDelete(); }

GreenChannelCup::GreenChannelCup() : Race("�׸� ä����", new OP, new Tokyo, new DirtShort(1400)) {}
GreenChannelCup::~GreenChannelCup() {}
void GreenChannelCup::tempNew() { Race::tempNew(); }
void GreenChannelCup::tempDelete() { Race::tempDelete(); }

OctoberS::OctoberS() : Race("����� ������ũ��", new OP, new Tokyo, new TerfMiddle(2000)) {}
OctoberS::~OctoberS() {}
void OctoberS::tempNew() { Race::tempNew(); }
void OctoberS::tempDelete() { Race::tempDelete(); }

SinetsuS::SinetsuS() : Race("�ſ��� ������ũ��", new OP, new Niegata, new TerfShort(1400)) {}
SinetsuS::~SinetsuS() {}
void SinetsuS::tempNew() { Race::tempNew(); }
void SinetsuS::tempDelete() { Race::tempDelete(); }

UzumasaS::UzumasaS() : Race("����� ������ũ��", new OP, new Kyoto, new DirtMile(1800)) {}
UzumasaS::~UzumasaS() {}
void UzumasaS::tempNew() { Race::tempNew(); }
void UzumasaS::tempDelete() { Race::tempDelete(); }

Kitka::Kitka() : Race("��ȭ��", new G1, new Kyoto, new TerfLong(3000)) { KitkaWin++; }
Kitka::~Kitka() { KitkaWin--; }
void Kitka::tempNew() { Race::tempNew(); KitkaWin++; }
void Kitka::tempDelete() { Race::tempDelete(); KitkaWin--; }

Shuka::Shuka() : Race("��ȭ��", new G1, new Tokyo, new TerfMiddle(2000)) { ShukaWin++; }
Shuka::~Shuka() { ShukaWin--; }
void Shuka::tempNew() { Race::tempNew(); ShukaWin++; }
void Shuka::tempDelete() { Race::tempDelete(); ShukaWin--; }

ArkiTen::ArkiTen() : Race("�ٳ�� ����", new G1, new Tokyo, new TerfMiddle(2000)) { ArkiTenWin++; }
ArkiTen::~ArkiTen() { ArkiTenWin--; }
void ArkiTen::tempNew() { Race::tempNew(); ArkiTenWin++; }
void ArkiTen::tempDelete() { Race::tempDelete(); ArkiTenWin--; }

SwanS::SwanS() : Race("���� ������ũ��", new G2, new Kyoto, new TerfShort(1400)) {}
SwanS::~SwanS() {}
void SwanS::tempNew() { Race::tempNew(); }
void SwanS::tempDelete() { Race::tempDelete(); }

HujiS::HujiS() : Race("���� ������ũ��", new G2, new Tokyo, new TerfMile(1600)) {}
HujiS::~HujiS() {}
void HujiS::tempNew() { Race::tempNew(); }
void HujiS::tempDelete() { Race::tempDelete(); }

MuromachiS::MuromachiS() : Race("���θ�ġ ������ũ��", new OP, new Kyoto, new DirtShort(1200)) {}
MuromachiS::~MuromachiS() {}
void MuromachiS::tempNew() { Race::tempNew(); }
void MuromachiS::tempDelete() { Race::tempDelete(); }

BrazilCup::BrazilCup() : Race("�������", new OP, new Tokyo, new DirtMiddle(2100)) { BrazilCupWin++; }
BrazilCup::~BrazilCup() { BrazilCupWin--; }
void BrazilCup::tempNew() { Race::tempNew(); BrazilCupWin++; }
void BrazilCup::tempDelete() { Race::tempDelete(); BrazilCupWin--; }

CasiopeiaS::CasiopeiaS() : Race("ī�ÿ����̾� ������ũ��", new OP, new Kyoto, new TerfMile(1800)) {}
CasiopeiaS::~CasiopeiaS() {}
void CasiopeiaS::tempNew() { Race::tempNew(); }
void CasiopeiaS::tempDelete() { Race::tempDelete(); }

LumierAutumnDash::LumierAutumnDash() : Race("��̿��� ���� ���", new OP, new Niegata, new TerfShort(1000)) {}
LumierAutumnDash::~LumierAutumnDash() {}
void LumierAutumnDash::tempNew() { Race::tempNew(); }
void LumierAutumnDash::tempDelete() { Race::tempDelete(); }

ElizabethQueen::ElizabethQueen() : Race("�����ں��� ���չ�", new G1, new Kyoto, new TerfMiddle(2200)) { ElizabethWin++; }
ElizabethQueen::~ElizabethQueen() { ElizabethWin--; }
void ElizabethQueen::tempNew() { Race::tempNew(); ElizabethWin++; }
void ElizabethQueen::tempDelete() { Race::tempDelete(); ElizabethWin--; }

ClassicElizabethQueen::ClassicElizabethQueen() : ElizabethQueen() { ClassicElizabethWin++; }
ClassicElizabethQueen::~ClassicElizabethQueen() { ClassicElizabethWin--; }
void ClassicElizabethQueen::tempNew() { ElizabethQueen::tempNew(); ClassicElizabethWin++; }
void ClassicElizabethQueen::tempDelete() { ElizabethQueen::tempDelete(); ClassicElizabethWin--; }

JBCLadiesClassic::JBCLadiesClassic() : Race("JBC ���̵� Ŭ����", new G1, new Oi, new DirtMile(1800)) {}
JBCLadiesClassic::~JBCLadiesClassic() {}
void JBCLadiesClassic::tempNew() { Race::tempNew(); }
void JBCLadiesClassic::tempDelete() { Race::tempDelete(); }

JBCSprint::JBCSprint() : Race("JBC ������Ʈ", new G1, new Oi, new DirtShort(1200)) { JBCSprinterWin++; }
JBCSprint::~JBCSprint() { JBCSprinterWin--; }
void JBCSprint::tempNew() { Race::tempNew(); JBCSprinterWin++; }
void JBCSprint::tempDelete() { Race::tempDelete(); JBCSprinterWin--; }

JBCClassic::JBCClassic() : Race("JBC Ŭ����", new G1, new Oi, new DirtMiddle(2000)) {}
JBCClassic::~JBCClassic() {}
void JBCClassic::tempNew() { Race::tempNew(); }
void JBCClassic::tempDelete() { Race::tempDelete(); }

ArgentinaRepublic::ArgentinaRepublic() : Race("�Ƹ���Ƽ�� ��ȭ����", new G2, new Tokyo, new TerfLong(2500)) { ArgentinaWin++; }
ArgentinaRepublic::~ArgentinaRepublic() { ArgentinaWin--; }
void ArgentinaRepublic::tempNew() { Race::tempNew(); ArgentinaWin++; }
void ArgentinaRepublic::tempDelete() { Race::tempDelete(); ArgentinaWin--; }

MiyakoS::MiyakoS() : Race("�̾��� ������ũ��", new G3, new Kyoto, new DirtMile(1800)) {}
MiyakoS::~MiyakoS() {}
void MiyakoS::tempNew() { Race::tempNew(); }
void MiyakoS::tempDelete() { Race::tempDelete(); }

MusasinoS::MusasinoS() : Race("����ó� ������ũ��", new G3, new Tokyo, new DirtMile(1600)) {}
MusasinoS::~MusasinoS() {}
void MusasinoS::tempNew() { Race::tempNew(); }
void MusasinoS::tempDelete() { Race::tempDelete(); }

HukusimaAnniversary::HukusimaAnniversary() : Race("����ø� ���", new G3, new Hukusima, new TerfMiddle(2000)) {}
HukusimaAnniversary::~HukusimaAnniversary() {}
void HukusimaAnniversary::tempNew() { Race::tempNew(); }
void HukusimaAnniversary::tempDelete() { Race::tempDelete(); }

OROCup::OROCup() : Race("ORO��", new OP, new Tokyo, new TerfShort(1400)) {}
OROCup::~OROCup() {}
void OROCup::tempNew() { Race::tempNew(); }
void OROCup::tempDelete() { Race::tempDelete(); }

MileChampionship::MileChampionship() : Race("���� è�Ǿ��", new G1, new Kyoto, new TerfMile(1600)) { MileChampionshipWin++; }
MileChampionship::~MileChampionship() { MileChampionshipWin--; }
void MileChampionship::tempNew() { Race::tempNew(); MileChampionshipWin++; }
void MileChampionship::tempDelete() { Race::tempDelete(); MileChampionshipWin--; }

JapanCup::JapanCup() : Race("������", new G1, new Tokyo, new TerfMiddle(2400)) { JapanCupWin++; }
JapanCup::~JapanCup() { JapanCupWin--; }
void JapanCup::tempNew() { Race::tempNew(); JapanCupWin++; }
void JapanCup::tempDelete() { Race::tempDelete(); JapanCupWin--; }

ClassicJapanCup::ClassicJapanCup() : JapanCup() { ClassicJapanCupORArimaWin++; }
ClassicJapanCup::~ClassicJapanCup() { ClassicJapanCupORArimaWin--; }
void ClassicJapanCup::tempNew() { JapanCup::tempNew(); ClassicJapanCupORArimaWin++; }
void ClassicJapanCup::tempDelete() { JapanCup::tempDelete(); ClassicJapanCupORArimaWin--; }

Keihan::Keihan() : Race("�����ѹ�", new G3, new Kyoto, new TerfShort(1200)) {}
Keihan::~Keihan() {}
void Keihan::tempNew() { Race::tempNew(); }
void Keihan::tempDelete() { Race::tempDelete(); }

AndromedaS::AndromedaS() : Race("�ȵ�θ޴� ������ũ��", new OP, new Kyoto, new TerfMiddle(2000)) {}
AndromedaS::~AndromedaS() {}
void AndromedaS::tempNew() { Race::tempNew(); }
void AndromedaS::tempDelete() { Race::tempDelete(); }

SolsticeMonthS::SolsticeMonthS() : Race("������ ������ũ��", new OP, new Tokyo, new DirtShort(1400)) {}
SolsticeMonthS::~SolsticeMonthS() {}
void SolsticeMonthS::tempNew() { Race::tempNew(); }
void SolsticeMonthS::tempDelete() { Race::tempDelete(); }

HukusimaMinooCup::HukusimaMinooCup() : Race("����ø� �ο���", new OP, new Hukusima, new DirtMile(1700)) {}
HukusimaMinooCup::~HukusimaMinooCup() {}
void HukusimaMinooCup::tempNew() { Race::tempNew(); }
void HukusimaMinooCup::tempDelete() { Race::tempDelete(); }

CapitalS::CapitalS() : Race("ĳ��Ż ������ũ��", new OP, new Tokyo, new TerfMile(1600)) {}
CapitalS::~CapitalS() {}
void CapitalS::tempNew() { Race::tempNew(); }
void CapitalS::tempDelete() { Race::tempDelete(); }

AutumnLeafS::AutumnLeafS() : Race("���� ���� ������ũ��", new OP, new Kyoto, new DirtShort(1200)) {}
AutumnLeafS::~AutumnLeafS() {}
void AutumnLeafS::tempNew() { Race::tempNew(); }
void AutumnLeafS::tempDelete() { Race::tempDelete(); }

ChampionsCup::ChampionsCup() : Race("è�Ǿ���", new G1, new Chuco, new DirtMile(1800)) {}
ChampionsCup::~ChampionsCup() {}
void ChampionsCup::tempNew() { Race::tempNew(); }
void ChampionsCup::tempDelete() { Race::tempDelete(); }

StayersS::StayersS() : Race("�����̾��� ������ũ��", new G2, new Nakayama, new TerfLong(3600)) {}
StayersS::~StayersS() {}
void StayersS::tempNew() { Race::tempNew(); }
void StayersS::tempDelete() { Race::tempDelete(); }

TurkeyStoneS::TurkeyStoneS() : Race("��Ű�� ������ũ��", new G3, new Nakayama, new TerfMile(1600)) {}
TurkeyStoneS::~TurkeyStoneS() {}
void TurkeyStoneS::tempNew() { Race::tempNew(); }
void TurkeyStoneS::tempDelete() { Race::tempDelete(); }

CapellaS::CapellaS() : Race("ī��� ������ũ��", new G3, new Nakayama, new DirtShort(1200)) {}
CapellaS::~CapellaS() {}
void CapellaS::tempNew() { Race::tempNew(); }
void CapellaS::tempDelete() { Race::tempDelete(); }

ChallengeCup::ChallengeCup() : Race("ç������", new G3, new Hansin, new TerfMiddle(2000)) {}
ChallengeCup::~ChallengeCup() {}
void ChallengeCup::tempNew() { Race::tempNew(); }
void ChallengeCup::tempDelete() { Race::tempDelete(); }

ChunichiNewpaper::ChunichiNewpaper() : Race("���ġ �Ź���", new G3, new Chuco, new TerfMiddle(2000)) {}
ChunichiNewpaper::~ChunichiNewpaper() {}
void ChunichiNewpaper::tempNew() { Race::tempNew(); }
void ChunichiNewpaper::tempDelete() { Race::tempDelete(); }

LapisLazuliS::LapisLazuliS() : Race("���ǽ� ���ٸ� ������ũ��", new OP, new Nakayama, new TerfShort(1200)) {}
LapisLazuliS::~LapisLazuliS() {}
void LapisLazuliS::tempNew() { Race::tempNew(); }
void LapisLazuliS::tempDelete() { Race::tempDelete(); }

NewYearMonthS::NewYearMonthS() : Race("���� ������ũ��", new OP, new Nakayama, new DirtMile(1600)) {}
NewYearMonthS::~NewYearMonthS() {}
void NewYearMonthS::tempNew() { Race::tempNew(); }
void NewYearMonthS::tempDelete() { Race::tempDelete(); }

LigelS::LigelS() : Race("���� ������ũ��", new OP, new Hansin, new TerfMile(1600)) {}
LigelS::~LigelS() {}
void LigelS::tempNew() { Race::tempNew(); }
void LigelS::tempDelete() { Race::tempDelete(); }

TanzanightS::TanzanightS() : Race("ź�ڳ���Ʈ ������ũ��", new OP, new Hansin, new TerfShort(1200)) {}
TanzanightS::~TanzanightS() {}
void TanzanightS::tempNew() { Race::tempNew(); }
void TanzanightS::tempDelete() { Race::tempDelete(); }

DecemberS::DecemberS() : Race("����� ������ũ��", new OP, new Nakayama, new TerfMile(1800)) {}
DecemberS::~DecemberS() {}
void DecemberS::tempNew() { Race::tempNew(); }
void DecemberS::tempDelete() { Race::tempDelete(); }

ArimaAnniversary::ArimaAnniversary() : Race("�Ƹ��� ���", new G1, new Nakayama, new TerfLong(2500)) { ArimaWin++; }
ArimaAnniversary::~ArimaAnniversary() { ArimaWin--; }
void ArimaAnniversary::tempNew() { Race::tempNew(); ArimaWin++; }
void ArimaAnniversary::tempDelete() { Race::tempDelete(); ArimaWin--; }

ClassicArimaAnniversary::ClassicArimaAnniversary() : ArimaAnniversary() { ClassicJapanCupORArimaWin++; }
ClassicArimaAnniversary::~ClassicArimaAnniversary() { ClassicJapanCupORArimaWin--; }
void ClassicArimaAnniversary::tempNew() { ArimaAnniversary::tempNew(); ClassicJapanCupORArimaWin++; }
void ClassicArimaAnniversary::tempDelete() { ArimaAnniversary::tempDelete(); ClassicJapanCupORArimaWin--; }

TokyoTarget::TokyoTarget() : Race("��������", new G1, new Oi, new DirtMiddle(2000)) {}
TokyoTarget::~TokyoTarget() {}
void TokyoTarget::tempNew() { Race::tempNew(); }
void TokyoTarget::tempDelete() { Race::tempDelete(); }

HansinCup::HansinCup() : Race("�ѽ���", new G2, new Hansin, new TerfShort(1400)) {}
HansinCup::~HansinCup() {}
void HansinCup::tempNew() { Race::tempNew(); }
void HansinCup::tempDelete() { Race::tempDelete(); }

GalaxyS::GalaxyS() : Race("������ ������ũ��", new OP, new Hansin, new DirtShort(1400)) {}
GalaxyS::~GalaxyS() {}
void GalaxyS::tempNew() { Race::tempNew(); }
void GalaxyS::tempDelete() { Race::tempDelete(); }

BetelgiusS::BetelgiusS() : Race("���ڰԿ콺 ������ũ��", new OP, new Hansin, new DirtMile(1800)) {}
BetelgiusS::~BetelgiusS() {}
void BetelgiusS::tempNew() { Race::tempNew(); }
void BetelgiusS::tempDelete() { Race::tempDelete(); }

NikkeiNewYear::NikkeiNewYear() : Race("������ �����", new G2, new Kyoto, new TerfMiddle(2400)) {}
NikkeiNewYear::~NikkeiNewYear() {}
void NikkeiNewYear::tempNew() { Race::tempNew(); }
void NikkeiNewYear::tempDelete() { Race::tempDelete(); }

Ichi::Ichi() : Race("����ġ��", new G3, new Chuco, new TerfMiddle(2000)) {}
Ichi::~Ichi() {}
void Ichi::tempNew() { Race::tempNew(); }
void Ichi::tempDelete() { Race::tempDelete(); }

KyotoGold::KyotoGold() : Race("���� �ݹ�", new G3, new Kyoto, new TerfMile(1600)) {}
KyotoGold::~KyotoGold() {}
void KyotoGold::tempNew() { Race::tempNew(); }
void KyotoGold::tempDelete() { Race::tempDelete(); }

NakayamaGold::NakayamaGold() : Race("��ī�߸� �ݹ�", new G3, new Nakayama, new TerfMiddle(2000)) {}
NakayamaGold::~NakayamaGold() {}
void NakayamaGold::tempNew() { Race::tempNew(); }
void NakayamaGold::tempDelete() { Race::tempDelete(); }

ManyoS::ManyoS() : Race("���� ������ũ��", new OP, new Kyoto, new TerfLong(3000)) {}
ManyoS::~ManyoS() {}
void ManyoS::tempNew() { Race::tempNew(); }
void ManyoS::tempDelete() { Race::tempDelete(); }

UrethraShortS::UrethraShortS() : Race("�䵵 �ܰŸ� ������ũ��", new OP, new Kyoto, new TerfShort(1200)) {}
UrethraShortS::~UrethraShortS() {}
void UrethraShortS::tempNew() { Race::tempNew(); }
void UrethraShortS::tempDelete() { Race::tempDelete(); }

PolluxS::PolluxS() : Race("���轺 ������ũ��", new OP, new Nakayama, new DirtMile(1800)) {}
PolluxS::~PolluxS() {}
void PolluxS::tempNew() { Race::tempNew(); }
void PolluxS::tempDelete() { Race::tempDelete(); }

JanuaryS::JanuaryS() : Race("�紺� ������ũ��", new OP, new Nakayama, new DirtShort(1200)) {}
JanuaryS::~JanuaryS() {}
void JanuaryS::tempNew() { Race::tempNew(); }
void JanuaryS::tempDelete() { Race::tempDelete(); }

NewYearS::NewYearS() : Race("�� �̾� ������ũ��", new OP, new Nakayama, new TerfMile(1600)) {}
NewYearS::~NewYearS() {}
void NewYearS::tempNew() { Race::tempNew(); }
void NewYearS::tempDelete() { Race::tempDelete(); }

CarbunkleS::CarbunkleS() : Race("ī��Ŭ ������ũ��", new OP, new Nakayama, new TerfShort(1200)) {}
CarbunkleS::~CarbunkleS() {}
void CarbunkleS::tempNew() { Race::tempNew(); }
void CarbunkleS::tempDelete() { Race::tempDelete(); }

AmericaJCC::AmericaJCC() : Race("�Ƹ޸�ī JCC", new G2, new Nakayama, new TerfMiddle(2200)) { AmericaWin++; }
AmericaJCC::~AmericaJCC() { AmericaWin--; }
void AmericaJCC::tempNew() { Race::tempNew(); AmericaWin++; }
void AmericaJCC::tempDelete() { Race::tempDelete(); AmericaWin--; }

TokaiS::TokaiS() : Race("��ī�� ������ũ��", new G2, new Chuco, new DirtMile(1800)) {}
TokaiS::~TokaiS() {}
void TokaiS::tempNew() { Race::tempNew(); }
void TokaiS::tempDelete() { Race::tempDelete(); }

SilkroadS::SilkroadS() : Race("��ũ�ε� ������ũ��", new G3, new Kyoto, new TerfShort(1200)) {}
SilkroadS::~SilkroadS() {}
void SilkroadS::tempNew() { Race::tempNew(); }
void SilkroadS::tempDelete() { Race::tempDelete(); }

NegisiS::NegisiS() : Race("�ױ�� ������ũ��", new G3, new Tokyo, new DirtShort(1400)) {}
NegisiS::~NegisiS() {}
void NegisiS::tempNew() { Race::tempNew(); }
void NegisiS::tempDelete() { Race::tempDelete(); }

PleiadesS::PleiadesS() : Race("�÷��̾Ƶ��� ������ũ��", new OP, new Kyoto, new DirtShort(1400)) {}
PleiadesS::~PleiadesS() {}
void PleiadesS::tempNew() { Race::tempNew(); }
void PleiadesS::tempDelete() { Race::tempDelete(); }

SirahujiS::SirahujiS() : Race("�ö����� ������ũ��", new OP, new Tokyo, new TerfMiddle(2000)) {}
SirahujiS::~SirahujiS() {}
void SirahujiS::tempNew() { Race::tempNew(); }
void SirahujiS::tempDelete() { Race::tempDelete(); }

KyotoAnniversary::KyotoAnniversary() : Race("���� ���", new G2, new Kyoto, new TerfMiddle(2200)) {}
KyotoAnniversary::~KyotoAnniversary() {}
void KyotoAnniversary::tempNew() { Race::tempNew(); }
void KyotoAnniversary::tempDelete() { Race::tempDelete(); }

TokyoNewpaper::TokyoNewpaper() : Race("���� �Ź���", new G3, new Tokyo, new TerfMile(1600)) {}
TokyoNewpaper::~TokyoNewpaper() {}
void TokyoNewpaper::tempNew() { Race::tempNew(); }
void TokyoNewpaper::tempDelete() { Race::tempDelete(); }

YamatoS::YamatoS() : Race("�߸��� ������ũ��", new OP, new Kyoto, new DirtShort(1200)) {}
YamatoS::~YamatoS() {}
void YamatoS::tempNew() { Race::tempNew(); }
void YamatoS::tempDelete() { Race::tempDelete(); }

LakuyoS::LakuyoS() : Race("����� ������ũ��", new OP, new Kyoto, new TerfMile(1600)) {}
LakuyoS::~LakuyoS() {}
void LakuyoS::tempNew() { Race::tempNew(); }
void LakuyoS::tempDelete() { Race::tempDelete(); }

AlthebaranS::AlthebaranS() : Race("�˵��ٶ� ������ũ��", new OP, new Kyoto, new DirtMiddle(1900)) {}
AlthebaranS::~AlthebaranS() {}
void AlthebaranS::tempNew() { Race::tempNew(); }
void AlthebaranS::tempDelete() { Race::tempDelete(); }

ValentineS::ValentineS() : Race("�뷱Ÿ�� ������ũ��", new OP, new Tokyo, new DirtShort(1400)) {}
ValentineS::~ValentineS() {}
void ValentineS::tempNew() { Race::tempNew(); }
void ValentineS::tempDelete() { Race::tempDelete(); }

FebruaryS::FebruaryS() : Race("��귯�� ������ũ��", new G1, new Tokyo, new DirtMile(1600)) {}
FebruaryS::~FebruaryS() {}
void FebruaryS::tempNew() { Race::tempNew(); }
void FebruaryS::tempDelete() { Race::tempDelete(); }

NakayamaAnniversary::NakayamaAnniversary() : Race("��ī�߸� ���", new G2, new Nakayama, new TerfMile(1800)) {}
NakayamaAnniversary::~NakayamaAnniversary() {}
void NakayamaAnniversary::tempNew() { Race::tempNew(); }
void NakayamaAnniversary::tempDelete() { Race::tempDelete(); }

KyotoUmamusumeS::KyotoUmamusumeS() : Race("���� �츶������ ������ũ��", new G3, new Kyoto, new TerfShort(1400)) { KyotoUSWin++; }
KyotoUmamusumeS::~KyotoUmamusumeS() { KyotoUSWin--; }
void KyotoUmamusumeS::tempNew() { Race::tempNew(); KyotoUSWin++; }
void KyotoUmamusumeS::tempDelete() { Race::tempDelete(); KyotoUSWin--; }

DiamondS::DiamondS() : Race("���̾Ƹ�� ������ũ��", new G3, new Tokyo, new TerfLong(3400)) {}
DiamondS::~DiamondS() {}
void DiamondS::tempNew() { Race::tempNew(); }
void DiamondS::tempDelete() { Race::tempDelete(); }

KokuraTarget::KokuraTarget() : Race("����� �����", new G3, new Kokura, new TerfMile(1800)) {}
KokuraTarget::~KokuraTarget() {}
void KokuraTarget::tempNew() { Race::tempNew(); }
void KokuraTarget::tempDelete() { Race::tempDelete(); }

Hanque::Hanque() : Race("��ť��", new G3, new Hansin, new TerfShort(1400)) {}
Hanque::~Hanque() {}
void Hanque::tempNew() { Race::tempNew(); }
void Hanque::tempDelete() { Race::tempDelete(); }

SobuS::SobuS() : Race("�Һ� ������ũ��", new OP, new Nakayama, new DirtMile(1800)) {}
SobuS::~SobuS() {}
void SobuS::tempNew() { Race::tempNew(); }
void SobuS::tempDelete() { Race::tempDelete(); }

KitakushuShortS::KitakushuShortS() : Race("ŰŸť�� �ܰŸ� ������ũ��", new OP, new Kokura, new TerfShort(1200)) {}
KitakushuShortS::~KitakushuShortS() {}
void KitakushuShortS::tempNew() { Race::tempNew(); }
void KitakushuShortS::tempDelete() { Race::tempDelete(); }

Kinko::Kinko() : Race("Ų�ڻ�", new G2, new Chuco, new TerfMiddle(2000)) {}
Kinko::~Kinko() {}
void Kinko::tempNew() { Race::tempNew(); }
void Kinko::tempDelete() { Race::tempDelete(); }

NakayamaUmamusumeS::NakayamaUmamusumeS() : Race("��ī�߸� �츶������ ������ũ��", new G3, new Nakayama, new TerfMile(1800)) { NakayamaUSWin++; }
NakayamaUmamusumeS::~NakayamaUmamusumeS() { NakayamaUSWin--; }
void NakayamaUmamusumeS::tempNew() { Race::tempNew(); NakayamaUSWin++; }
void NakayamaUmamusumeS::tempDelete() { Race::tempDelete(); NakayamaUSWin--; }

OceanS::OceanS() : Race("���� ������ũ��", new G3, new Nakayama, new TerfShort(1200)) {}
OceanS::~OceanS() {}
void OceanS::tempNew() { Race::tempNew(); }
void OceanS::tempDelete() { Race::tempDelete(); }

OsacaCastleS::OsacaCastleS() : Race("����ī�� ������ũ��", new OP, new Hansin, new TerfMile(1800)) {}
OsacaCastleS::~OsacaCastleS() {}
void OsacaCastleS::tempNew() { Race::tempNew(); }
void OsacaCastleS::tempDelete() { Race::tempDelete(); }

PolarisS::PolarisS() : Race("���󸮽� ������ũ��", new OP, new Hansin, new DirtShort(1400)) {}
PolarisS::~PolarisS() {}
void PolarisS::tempNew() { Race::tempNew(); }
void PolarisS::tempDelete() { Race::tempDelete(); }

NigawaS::NigawaS() : Race("�ϰ��� ������ũ��", new OP, new Hansin, new DirtMiddle(2000)) {}
NigawaS::~NigawaS() {}
void NigawaS::tempNew() { Race::tempNew(); }
void NigawaS::tempDelete() { Race::tempDelete(); }

EastWindS::EastWindS() : Race("��ǳ ������ũ��", new OP, new Nakayama, new TerfMile(1600)) {}
EastWindS::~EastWindS() {}
void EastWindS::tempNew() { Race::tempNew(); }
void EastWindS::tempDelete() { Race::tempDelete(); }

Osaka::Osaka() : Race("����ī��", new G1, new Hansin, new TerfMiddle(2000)) { OsakaWin++; }
Osaka::~Osaka() { OsakaWin--; }
void Osaka::tempNew() { Race::tempNew(); OsakaWin++; }
void Osaka::tempDelete() { Race::tempDelete(); OsakaWin--; }

Takamatsunomiya::Takamatsunomiya() : Race("Ÿī������̾� ���", new G1, new Chuco, new TerfShort(1200)) { TakamatsunomiyaWin++; }
Takamatsunomiya::~Takamatsunomiya() { TakamatsunomiyaWin--; }
void Takamatsunomiya::tempNew() { Race::tempNew(); TakamatsunomiyaWin++; }
void Takamatsunomiya::tempDelete() { Race::tempDelete(); TakamatsunomiyaWin--; }

HansinTarget::HansinTarget() : Race("�ѽ� �����", new G2, new Hansin, new TerfLong(3000)) {}
HansinTarget::~HansinTarget() {}
void HansinTarget::tempNew() { Race::tempNew(); }
void HansinTarget::tempDelete() { Race::tempDelete(); }

Nikkei::Nikkei() : Race("�����̻�", new G2, new Nakayama, new TerfLong(2500)) {}
Nikkei::~Nikkei() {}
void Nikkei::tempNew() { Race::tempNew(); }
void Nikkei::tempDelete() { Race::tempDelete(); }

MarchS::MarchS() : Race("��ġ ������ũ��", new G3, new Nakayama, new DirtMile(1800)) {}
MarchS::~MarchS() {}
void MarchS::tempNew() { Race::tempNew(); }
void MarchS::tempDelete() { Race::tempDelete(); }

ChibaS::ChibaS() : Race("ġ�� ������ũ��", new OP, new Nakayama, new DirtShort(1200)) {}
ChibaS::~ChibaS() {}
void ChibaS::tempNew() { Race::tempNew(); }
void ChibaS::tempDelete() { Race::tempDelete(); }

RotcoS::RotcoS() : Race("���� ������ũ��", new OP, new Hansin, new TerfMile(1600)) {}
RotcoS::~RotcoS() {}
void RotcoS::tempNew() { Race::tempNew(); }
void RotcoS::tempDelete() { Race::tempDelete(); }

HansinUmamusumeS::HansinUmamusumeS() : Race("�ѽ� �츶������ ������ũ��", new G2, new Hansin, new TerfMile(1600)) { HansinUSWin++; }
HansinUmamusumeS::~HansinUmamusumeS() { HansinUSWin--; }
void HansinUmamusumeS::tempNew() { Race::tempNew(); HansinUSWin++; }
void HansinUmamusumeS::tempDelete() { Race::tempDelete(); HansinUSWin--; }

DubbyChallengeTrophie::DubbyChallengeTrophie() : Race("���� �� ç���� Ʈ����", new G3, new Nakayama, new TerfMile(1600)) {}
DubbyChallengeTrophie::~DubbyChallengeTrophie() {}
void DubbyChallengeTrophie::tempNew() { Race::tempNew(); }
void DubbyChallengeTrophie::tempDelete() { Race::tempDelete(); }

AntaresS::AntaresS() : Race("��Ÿ���� ������ũ��", new G3, new Hansin, new DirtMile(1800)) {}
AntaresS::~AntaresS() {}
void AntaresS::tempNew() { Race::tempNew(); }
void AntaresS::tempDelete() { Race::tempDelete(); }

CoralS::CoralS() : Race("�ڶ� ������ũ��", new OP, new Hansin, new DirtShort(1400)) {}
CoralS::~CoralS() {}
void CoralS::tempNew() { Race::tempNew(); }
void CoralS::tempDelete() { Race::tempDelete(); }

KeiyoS::KeiyoS() : Race("���̿� ������ũ��", new OP, new Nakayama, new DirtShort(1200)) {}
KeiyoS::~KeiyoS() {}
void KeiyoS::tempNew() { Race::tempNew(); }
void KeiyoS::tempDelete() { Race::tempDelete(); }

SpringThunderS::SpringThunderS() : Race("��� ������ũ��", new OP, new Nakayama, new TerfShort(!200)) {}
SpringThunderS::~SpringThunderS() {}
void SpringThunderS::tempNew() { Race::tempNew(); }
void SpringThunderS::tempDelete() { Race::tempDelete(); }

HukusimaMinbo::HukusimaMinbo() : Race("����ø� �κ���", new OP, new Hukusima, new TerfMiddle(2000)) {}
HukusimaMinbo::~HukusimaMinbo() {}
void HukusimaMinbo::tempNew() { Race::tempNew(); }
void HukusimaMinbo::tempDelete() { Race::tempDelete(); }

AzumacohujiS::AzumacohujiS() : Race("��������� ������ũ��", new OP, new Hukusima, new DirtMile(1700)) {}
AzumacohujiS::~AzumacohujiS() {}
void AzumacohujiS::tempNew() { Race::tempNew(); }
void AzumacohujiS::tempDelete() { Race::tempDelete(); }

HaruTen::HaruTen() : Race("�ٳ�� ��", new G1, new Kyoto, new TerfLong(3200)) { HaruTenWin++; }
HaruTen::~HaruTen() { HaruTenWin--; }
void HaruTen::tempNew() { Race::tempNew(); HaruTenWin++; }
void HaruTen::tempDelete() { Race::tempDelete(); HaruTenWin--; }

MilelusCup::MilelusCup() : Race("���Ϸ�����", new G2, new Kyoto, new TerfMile(1600)) {}
MilelusCup::~MilelusCup() {}
void MilelusCup::tempNew() { Race::tempNew(); }
void MilelusCup::tempDelete() { Race::tempDelete(); }

HukusimaUmamusumeS::HukusimaUmamusumeS() : Race("����ø� �츶������ ������ũ��", new G3, new Hukusima, new TerfMile(1800)) { HukusimaUSWin++; }
HukusimaUmamusumeS::~HukusimaUmamusumeS() { HukusimaUSWin--; }
void HukusimaUmamusumeS::tempNew() { Race::tempNew(); HukusimaUSWin++; }
void HukusimaUmamusumeS::tempDelete() { Race::tempDelete(); HukusimaUSWin--; }

OasisS::OasisS() : Race("���ƽý� ������ũ��", new OP, new Tokyo, new DirtMile(1600)) {}
OasisS::~OasisS() {}
void OasisS::tempNew() { Race::tempNew(); }
void OasisS::tempDelete() { Race::tempDelete(); }

TennoMountainS::TennoMountainS() : Race("�ٳ�� ������ũ��", new OP, new Kyoto, new DirtShort(1200)) {}
TennoMountainS::~TennoMountainS() {}
void TennoMountainS::tempNew() { Race::tempNew(); }
void TennoMountainS::tempDelete() { Race::tempDelete(); }

VictoriaMile::VictoriaMile() : Race("���丮�� ����", new G1, new Tokyo, new TerfMile(1600)) { VictoriaMileWin++; }
VictoriaMile::~VictoriaMile() { VictoriaMileWin--; }
void VictoriaMile::tempNew() { Race::tempNew(); VictoriaMileWin++; }
void VictoriaMile::tempDelete() { Race::tempDelete(); VictoriaMileWin--; }

KeioSpringCup::KeioSpringCup() : Race("���̿��� ��������", new G2, new Tokyo, new TerfShort(1400)) {}
KeioSpringCup::~KeioSpringCup() {}
void KeioSpringCup::tempNew() { Race::tempNew(); }
void KeioSpringCup::tempDelete() { Race::tempDelete(); }

NiegataTarget::NiegataTarget() : Race("���̰�Ÿ �����", new G3, new Niegata, new TerfMiddle(2000)) {}
NiegataTarget::~NiegataTarget() {}
void NiegataTarget::tempNew() { Race::tempNew(); }
void NiegataTarget::tempDelete() { Race::tempDelete(); }

TanigawadakeS::TanigawadakeS() : Race("Ÿ�ϰ��ʹ��� ������ũ��", new OP, new Niegata, new TerfMile(1600)) {}
TanigawadakeS::~TanigawadakeS() {}
void TanigawadakeS::tempNew() { Race::tempNew(); }
void TanigawadakeS::tempDelete() { Race::tempDelete(); }

MetropolitanS::MetropolitanS() : Race("��Ʈ������ź ������ũ��", new OP, new Tokyo, new TerfMiddle(2400)) {}
MetropolitanS::~MetropolitanS() {}
void MetropolitanS::tempNew() { Race::tempNew(); }
void MetropolitanS::tempDelete() { Race::tempDelete(); }

KuramaS::KuramaS() : Race("��� ������ũ��", new OP, new Kyoto, new TerfShort(1200)) {}
KuramaS::~KuramaS() {}
void KuramaS::tempNew() { Race::tempNew(); }
void KuramaS::tempDelete() { Race::tempDelete(); }

BrilliantS::BrilliantS() : Race("�긱����Ʈ ������ũ��", new OP, new Tokyo, new DirtMiddle(2100)) {}
BrilliantS::~BrilliantS() {}
void BrilliantS::tempNew() { Race::tempNew(); }
void BrilliantS::tempDelete() { Race::tempDelete(); }

MiyakoBackcountryS::MiyakoBackcountryS() : Race("�̾��� ���� ������ũ��", new OP, new Kyoto, new TerfMile(1800)) {}
MiyakoBackcountryS::~MiyakoBackcountryS() {}
void MiyakoBackcountryS::tempNew() { Race::tempNew(); }
void MiyakoBackcountryS::tempDelete() { Race::tempDelete(); }

RittoS::RittoS() : Race("���� ������ũ��", new OP, new Kyoto, new DirtShort(1400)) {}
RittoS::~RittoS() {}
void RittoS::tempNew() { Race::tempNew(); }
void RittoS::tempDelete() { Race::tempDelete(); }

MeguroAnniversary::MeguroAnniversary() : Race("�ޱ��� ���", new G2, new Tokyo, new TerfLong(2500)) {}
MeguroAnniversary::~MeguroAnniversary() {}
void MeguroAnniversary::tempNew() { Race::tempNew(); }
void MeguroAnniversary::tempDelete() { Race::tempDelete(); }

HeianS::HeianS() : Race("���̾� ������ũ��", new G3, new Kyoto, new DirtMiddle(1900)) {}
HeianS::~HeianS() {}
void HeianS::tempNew() { Race::tempNew(); }
void HeianS::tempDelete() { Race::tempDelete(); }

MayS::MayS() : Race("���� ������ũ��", new OP, new Tokyo, new TerfMile(1800)) {}
MayS::~MayS() {}
void MayS::tempNew() { Race::tempNew(); }
void MayS::tempDelete() { Race::tempDelete(); }

WitacheonS::WitacheonS() : Race("��Ÿõ ������ũ��", new OP, new Niegata, new TerfShort(1000)) {}
WitacheonS::~WitacheonS() {}
void WitacheonS::tempNew() { Race::tempNew(); }
void WitacheonS::tempDelete() { Race::tempDelete(); }

ZelcovaS::ZelcovaS() : Race("��Ƽ���� ������ũ��", new OP, new Tokyo, new DirtShort(1400)) {}
ZelcovaS::~ZelcovaS() {}
void ZelcovaS::tempNew() { Race::tempNew(); }
void ZelcovaS::tempDelete() { Race::tempDelete(); }

AzchiCastleS::AzchiCastleS() : Race("����ġ�� ������ũ��", new OP, new Kyoto, new TerfShort(1400)) {}
AzchiCastleS::~AzchiCastleS() {}
void AzchiCastleS::tempNew() { Race::tempNew(); }
void AzchiCastleS::tempDelete() { Race::tempDelete(); }

Lord::Lord() : Race("���ջ�", new G1, new Oi, new DirtMiddle(2000)) {}
Lord::~Lord() {}
void Lord::tempNew() { Race::tempNew(); }
void Lord::tempDelete() { Race::tempDelete(); }