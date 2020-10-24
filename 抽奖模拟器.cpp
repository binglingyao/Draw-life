#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <cmath>
#include <iomanip>
#include <string>
#include <random>
#include <time.h>
#include <stdio.h>
#include <ctime>

using namespace std;
using std::default_random_engine;
using std::uniform_int_distribution;

int main()
{
	//标题
	SetConsoleTitle("世界级的抽奖人生---By:灵劫|QQ:908095447");
	//随机数
	srand((unsigned)time(NULL));
	//变量
	string Player_Name; //玩家名称
	int Menu_Game; //开始菜单
	string State_Player_T; //玩家口渴状态
	string State_Player_H; //玩家饥饿状态
	float Thirsty = 100; //口渴值
	float Thirsty_Max = 100; //最高口渴值
	double Thirsty_Max_100 = Thirsty_Max; //100%口渴值
	double Thirsty_Max_75 = Thirsty_Max * 0.75; //75%口渴值
	double Thirsty_Max_50 = Thirsty_Max * 0.50; //50%口渴值
	double Thirsty_Max_25 = Thirsty_Max * 0.25; //25%口渴值
	double Thirsty_Max_10 = Thirsty_Max * 0.10; //10%口渴值
	double Hunger = 100; //饥饿值
	double Hunger_Max = 100; //最高饥饿值
	double Hunger_Max_100 = Hunger_Max; //100%饥饿值
	double Hunger_Max_75 = Hunger_Max * 0.75; //75%饥饿值
	double Hunger_Max_50 = Hunger_Max * 0.50; //50%饥饿值
	double Hunger_Max_25 = Hunger_Max * 0.25; //25%饥饿值
	double Hunger_Max_10 = Hunger_Max * 0.10; //10%饥饿值
	long long int Money = 1000; //玩家的钱
	int UR = 0;
	int SSR = 0;
	int SR = 0;
	int R = 0;
	int N = 0;
	int Menu_Open;
	int Menu_DG;
	int Menu_Shop;
	int Menu_Shop_Ur;
	int Menu_Shop_Ur_Num;
	long long int Menu_Luck;
	int A1;
	int A1_UR;
	int A1_SSR;
	int A1_SR;
	int A1_R;
	int A1_N;
	//更新公告
	cout << "更新说明:" << endl;
	cout << "\nv0.02a:" << endl;
	cout << "\n\t去掉了存档模式,去掉了卡池系统." << endl;
	cout << "\t增加了抽奖模式(自定义抽奖次数)." << endl;
	cout << "\nv0.02a_F" << endl;
	cout << "\n\t修复了抽奖次数限制.(1000/每次)." << endl;
	cout << "\t修复了抽奖中余额不足依旧继续抽奖的BUG." << endl;
	cout << "\t修复了余额不足能够建立抽奖的BUG." << endl;
	cout << "\n以上版本更新内容." << endl;
	system("pause");
	system("cls");
	cout << "3秒后为您跳转主界面." << endl;
	Sleep(1000);
	system("cls");
	cout << "2秒后为您跳转主界面." << endl;
	Sleep(1000);
	system("cls");
	cout << "1秒后为您跳转主界面." << endl;
	Sleep(1000);
	system("cls");
	//启动游戏
	cout << "欢迎游玩[世界级的抽	奖人生]" << endl;
	cout << "当前版本: Alpha_0.2_F" << endl;
	cout << "菜单:" << endl;
	cout << "1.开始游戏" << endl;
	cout << "输入栏: ";
	cin >> Menu_Game;
	switch (Menu_Game)
	{
	case 1:
		cout << "开始游戏" << endl;
		cout << "Loading: " << rand() % 100 << "%" << endl;
		cout << "Loading: 100%" << endl;
		system("pause");
		system("cls");
		break;
	}
	//前言
	cout << "???:陌生人,你醒了?" << endl;
	Sleep(2000);
	cout << "???:在此之前...方便告诉我你的名字吗?" << endl;
	Sleep(2000);
	cout << "(名字?我的名字?)" << endl;
	Sleep(2000);
	cout << "我...好像是叫做: ";
	cin >> Player_Name;
	system("cls");
	Sleep(2000);
	cout << "???:[" << Player_Name << "]?嗯,倒是个好名字." << endl;
	Sleep(2000);
	cout << "???:我先来给你说一下现状吧." << endl;
	Sleep(2000);
	cout << "???:你现在呢,是个囚犯,因为没有身份信息." << endl;
	Sleep(2000);
	cout << "???:但是没有关系,在名为[蓝]的世界中,你可以选择参加一个试炼来拿到身份信息." << endl;
	Sleep(2000);
	cout << "???:你将会拿到1000☆的起始资金,吃喝都需要用到,当然,物资是通过抽奖获得." << endl;
	Sleep(2000);
	cout << "???:但你需要省着点用,毕竟...通过试炼的条件可是抽到150张SSR." << endl;
	Sleep(2000);
	cout << Player_Name << ":...那如果我没☆了呢?" << endl;
	Sleep(2000);
	cout << "???:你听说过人生重来吗?" << endl;
	Sleep(2000);
	cout << Player_Name << ":我燃烧你的梦,神TM的直接人生重来???" << endl;
	Sleep(2000);
	cout << "???:不可以说脏话,谅在你第一次犯就不治你的罪了,其实试炼里也有可以打工的地方,取舍方面看你自己了." << endl;
	Sleep(2000);
	cout << "???:算了,直接送你去参加试炼吧." << endl;
	Sleep(2000);
	cout << "(Duang~你被打晕了,失去意识.)" << endl;
	system("pause");
	system("cls");
L1:
	//状态判断
	if (Thirsty == Thirsty_Max_100)
	{
		State_Player_T = "水分充足";
	}
	else if (Thirsty < Thirsty_Max_100 && Thirsty >= Thirsty_Max_75)
	{
		State_Player_T = "略微口渴";
	}
	else if (Thirsty < Thirsty_Max_75 && Thirsty >= Thirsty_Max_50)
	{
		State_Player_T = "口渴";
	}
	else if (Thirsty < Thirsty_Max_50 && Thirsty >= Thirsty_Max_25)
	{
		State_Player_T = "极度口渴";
	}
	else if (Thirsty < Thirsty_Max_25 && Thirsty >= Thirsty_Max_10)
	{
		State_Player_T = "脱水";
	}
	else if (Thirsty < Thirsty_Max_10 && Thirsty >= 1 || Thirsty <=0)
	{
		cout << "你因脱水昏迷,正在检测是否拥有急救的☆." << endl;
		if (Money >= 300)
		{
			cout << "叮!" << endl;
			cout << "检测到您拥有: " << Money << "☆,强制消费300☆进行急救." << endl;
			Money -= 300;
			Hunger += (Hunger_Max_100 - Hunger);
			Thirsty += (Thirsty_Max_100 - Thirsty);
			cout << "已消费300☆进行急救,口渴指与饥饿值已为您恢复满." << endl;
			cout << "您现在剩余: " << Money << "☆." << endl;
			system("pause");
			system("cls");
		}
		else if (Money < 300)
		{
			cout << "叮!" << endl;
			cout << "检测到您拥有: " << Money << "不足300☆,无法进行急救." << endl;
			cout << "很遗憾你因口渴而死亡了,或许下辈子会更好吧." << endl;
			return 0;
		}
	}
	if (Hunger == Hunger_Max_100)
	{
		State_Player_H = "非常饱";
	}
	else if (Hunger < Hunger_Max_100 && Hunger >= Hunger_Max_75)
	{
		State_Player_H = "稍饿";
	}
	else if (Hunger < Hunger_Max_75 && Hunger >= Hunger_Max_50)
	{
		State_Player_H = "饿";
	}
	else if (Hunger < Hunger_Max_50 && Hunger >= Hunger_Max_25)
	{
		State_Player_H = "非常饿";
	}
	else if (Hunger < Hunger_Max_25 && Hunger >= Hunger_Max_10)
	{
		State_Player_H = "饿倒";
	}
	else if (Hunger < Hunger_Max_10 && Hunger >= 1 || Hunger <=0)
	{
		cout << "你因饥饿晕厥了,正在检测是否拥有急救的☆." << endl;
		if (Money >= 300)
		{
			cout << "叮!" << endl;
			cout << "检测到您拥有: " << Money << "☆,强制消费300☆进行急救." << endl;
			Money -= 300;
			Hunger += (Hunger_Max_100 - Hunger);
			Thirsty += (Thirsty_Max_100 - Thirsty);
			cout << "已消费300☆进行急救,口渴指与饥饿值已为您恢复满." << endl;
			cout << "您现在剩余: " << Money << "☆." << endl;
			system("pause");
			system("cls");
		}
		else if (Money < 300)
		{
			cout << "叮!" << endl;
			cout << "检测到您拥有: " << Money << "不足300☆,无法进行急救." << endl;
			cout << "很遗憾你因口渴而死亡了,或许下辈子会更好吧." << endl;
			return 0;
		}
	}
	//Hud
	cout << "姓名: " << Player_Name << endl;
	cout << "状态: " << State_Player_H << " | " << State_Player_T << endl;
	cout << "饥饿值: " << Hunger << " / " << Hunger_Max_100 << endl;
	cout << "口渴值: " << Thirsty << " / " << Thirsty_Max_100 << endl;
	cout << "货币: " << Money << "☆" << endl;
	cout << " " << endl;
	cout << "卡包: " << endl;
	cout << "\nUR级: " << UR << "\tSSR级:" << SSR << "\tSR级: " << SR << "\tR级: " << R << "\tN级: " << N << endl;
	cout << "\n\n" << endl;
	cout << "菜单:" << endl;
	cout << "1.打工" << endl;
	cout << "2.抽卡" << endl;
	cout << "3.商店(暂未开放)" << endl;
	cout << "\n您现在是需要干什么呢?" << endl;
	cout << "输入栏: ";
	cin >> Menu_Open;
	switch (Menu_Open)
	{
	//打工面板
	case 1:
		system("cls");
		cout << "工作选择面板:" << endl;
		cout << "1.初级打工(耗时: 1Min | 报酬:120☆ | 消耗: 口渴度:-30,饥饿值:-30)" << endl;
		cout << "2.中级打工(耗时: 5Min | 报酬:620☆ | 消耗: 口渴度:-120,饥饿值:-120)" << endl;
		cout << "\n输入栏: ";
		cin >> Menu_DG;
		switch (Menu_DG)
		{
		case 1:
			system("cls");
			for (int i = 0; i < 60; i++)
			{
				cout << "开始打工." << endl;
				Money += 2;
				Hunger -= 0.5;
				Thirsty -= 0.5;
				cout << "获得货币: 2☆ | 消耗饥饿值: 0.5 | 消耗口渴值: 0.5" << endl;
				cout << "打工中剩余时间: " << 60 - i << "s." << endl;
				Sleep(1000);
				system("cls");
			}
			cout << "叮!" << endl;
			cout << "本次获得货币: 120☆." << endl;
			cout << "共计消耗饥饿值: 30点." << endl;
			cout << "共计消耗口渴值: 30点." << endl;
			system("pause");
			system("cls");
			break;
		case 2:
			system("cls");
			for (int i = 0; i < 300; i++)
			{
				cout << "开始打工." << endl;
				Money += 2.066666666666667;
				Hunger -= 0.4;
				Thirsty -= 0.4;
				cout << "获得货币: 2.066666666666667☆ | 消耗饥饿值: 0.4 | 消耗口渴值: 0.4" << endl;
				cout << "打工剩余时间: " << 300 - i << "s." << endl;
				Sleep(1000);
				system("cls");
			}
			cout << "叮!" << endl;
			cout << "本次获得货币: 620☆." << endl;
			cout << "共计消耗饥饿值: 120点." << endl;
			cout << "共计消耗口渴值: 120点." << endl;
			system("pause");
			system("cls");
			break;
		}
		break;
	//抽卡面板
	case 2:
		system("cls");
		cout << "抽卡面板:" << endl;
		cout << "请输入需要抽取的次数(1~1000).(每次抽奖为30☆)" << endl;
		cout << "\n输入栏: ";
		cin >> Menu_Luck;
		if (Menu_Luck > 1000)
		{
		cout << "您输入的抽奖次数超过1000." << endl;
		system("pause");
		system("cls");
		cout << "3秒后为您跳转主页面." << endl;
		Sleep(1000);
		system("cls");
		cout << "2秒后为您跳转主页面." << endl;
		Sleep(1000);
		system("cls");
		cout << "1秒后为您跳转主页面." << endl;
		Sleep(1000);
		system("cls");
		goto L1;
		}
		else if (Money < (Menu_Luck * 30))
		{
		cout << "对不起,您的☆不足以抽取[" << Menu_Luck << "]次." << endl;
		cout << "您的余额为[" << Money << "]☆,您需要支付[" << Menu_Luck * 30 << "]☆." << endl;
		system("pause");
		system("cls");
		cout << "3秒后为您跳转主页面." << endl;
		Sleep(1000);
		system("cls");
		cout << "2秒后为您跳转主页面." << endl;
		Sleep(1000);
		system("cls");
		cout << "1秒后为您跳转主页面." << endl;
		Sleep(1000);
		system("cls");
		goto L1;
		}
		else if (Menu_Luck <= 0)
		{
			cout << "您输入的抽奖次数小于或等于0." << endl;
			system("pause");
			system("cls");
			cout << "3秒后为您跳转主页面." << endl;
			Sleep(1000);
			system("cls");
			cout << "2秒后为您跳转主页面." << endl;
			Sleep(1000);
			system("cls");
			cout << "1秒后为您跳转主页面." << endl;
			Sleep(1000);
			system("cls");
			goto L1;
		}
		else if (Money >= (Menu_Luck * 30))
		{
			A1_UR = 0;
			A1_SSR = 0;
			A1_SR = 0;
			A1_R = 0;
			A1_N = 0;
			for (long long int CK = 0; CK <= Menu_Luck; CK++)
			{
				if (Money < 30)
				{
					cout << "对不起,您的余额不足30☆." << endl;
					system("pause");
					system("cls");
					cout << "3秒后为您跳转主页面." << endl;
					Sleep(1000);
					system("cls");
					cout << "2秒后为您跳转主页面." << endl;
					Sleep(1000);
					system("cls");
					cout << "1秒后为您跳转主页面." << endl;
					Sleep(1000);
					system("cls");
					goto L1;
				}
				Money -= 30;
				A1 = (rand() % (100 - 1)) + 1;
				if (A1 >= 50 && A1 < 100)
				{
					cout << "抽取到了N卡*1!" << endl;
					N += 1;
					A1_N += 1;
				}
				else if (A1 >= 25 && A1 < 50)
				{
					cout << "抽取到了R卡*1!" << endl;
					R += 1;
					A1_R += 1;
				}
				else if (A1 >= 10 && A1 < 25)
				{
					cout << "抽取到了SR卡*1" << endl;
					SR += 1;
					A1_SR += 1;
				}
				else if (A1 >= 2 && A1 < 10)
				{
					cout << "抽取到了SSR卡*1" << endl;
					SSR += 1;
					A1_SSR += 1;
				}
				else if (A1 >= 0 && A1 < 2 || A1 == 100)
				{
					cout << "抽取到了UR卡*1" << endl;
					UR += 1;
					A1_UR += 1;
				}
				cout << "\nUR: " << A1_UR << "\nSSR: " << A1_SSR << "\nSR: " << A1_SR << "\nR: " << A1_R << "\nN: " << A1_N << endl;
				cout << "抽奖次数还剩下: " << Menu_Luck - CK << endl;
				Sleep(1000);
				system("cls");
			}
			system("cls");
			cout << "本次抽奖[" << Menu_Luck << "]次,消耗[" << Menu_Luck * 30 << "]☆." << endl;
			cout << "获得了:" << endl;
			cout << "\nUR: " << A1_UR << "\nSSR: " << A1_SSR << "\nSR: " << A1_SR << "\nR: " << A1_R << "\nN: " << A1_N << endl;
			system("pause");
			system("cls");
			A1_UR == 0;
			A1_SSR == 0;
			A1_SR == 0;
			A1_R == 0;
			A1_N == 0;
		}
		break;
	//商店面板
	case 3:
		system("cls");
		cout << "商店面板:" << endl;
		cout << "1.UR卡商店." << endl;
		cout << "2.SSR卡商店." << endl;
		cout << "3.SR卡商店." << endl;
		cout << "4.R卡商店." << endl;
		cout << "5.N卡商店." << endl;
		cout << "输入栏: ";
		cin >> Menu_Shop;
		switch (Menu_Shop)
		{
		//UR商店
		case 1:
			system("cls");
			cout << "UR商店:" << endl;
			cout << "1.食物购买()." << endl;
			cout << "2.饮料购买()." << endl;
			cout << "3.卡片兑换(1张UR换3张SSR)." << endl;
			cout << "输入栏: ";
			cin >> Menu_Shop_Ur;
			switch (Menu_Shop_Ur)
			{
			case 1:
				break;
			case 2:
				break;
			case 3:
				system("cls");
				cout << "卡片兑换UR→SSR面板." << endl;
				cout << "您需要使用几张UR?(1:3)" << endl;
				cout << "输入栏: ";
				cin >> Menu_Shop_Ur_Num;
				cout << "检测您是否拥有[" << Menu_Shop_Ur_Num << "]张UR卡中." << endl;
				if (UR < Menu_Shop_Ur_Num)
				{
					cout << "您的UR卡片不足[" << Menu_Shop_Ur_Num << "]张" << endl;
					system("pause");
					system("cls");
					goto L1;
				}
				else if (UR >= Menu_Shop_Ur_Num)
				{
					cout << "您的UR卡足够兑换,正在为您兑换,请稍等." << endl;
					Sleep(1000);
				}
				for (int i = 0; i < Menu_Shop_Ur_Num; i++)
				{
					system("cls");
					UR -= 1;
					SSR += 3;
					cout << "您使用了1张UR卡,获得了3张SSR卡." << endl;
					cout << "您还想使用: " << Menu_Shop_Ur_Num - i << "次." << endl;
					Sleep(1000);
				}
				cout << "叮!" << endl;
				cout << "本次共计获得SSR卡: " << Menu_Shop_Ur_Num * 3 << "张." << endl;
				cout << "本次共计消耗UR卡: " << Menu_Shop_Ur_Num << "张." << endl;
				system("pause");
				system("cls");
			}
			break;
		//SSR商店
		case 2:
			break;
		//SR商店
		case 3:
			break;
		//R商店
		case 4:
			break;
		//N商店
		case 5:
			break;
		}
		break;
	}
	goto L1;
}
