#include<iostream>
#include "Header2.h"
using namespace std;
void topofthewall();
void belowofthewall();
void leftofthewall();
void rightofthewall();
int main() {
//	int i = 1;
//	int a = 10;
//	int	b=0;
//	int o_a = a, o_b = b;
//	int check = 0;
//	while (true) {
//		 xóa dữ liệu cũ 
//		gotoXY(o_a, o_b);
//		cout << "           ";
//		gotoXY(a, b); // toa do x va y
//		cout << "Le Kim Hung";
//		o_a = a, o_b = b;
//		SetColor(i); // thiet lap mau sac
//		i++;
//		if (i > 15) {
//			i = 1;
//		}
//		 dieu khien huong bang ban phim
//		if (_kbhit()) {
//			char kitu =_getch();
//			if (kitu == -32) {
//				kitu =_getch();
//				if (kitu == 72) //mũi tên đi lên  {
//		check = 1;
//	}
//				else if (kitu == 80) //mũi tên đi xuống // 
//			   {
//				check = 0;
//				}
//				else if (kitu == 75) //mui ten qua ben trai
//			   {
//				check = 2;
//				}
//				else if (kitu == 77) //mui ten qua ben phai
//			    {
//				check = 3;
//				}
//}
//		}
//		 điều hướng cho vật thể di chuyển 
//		if (check == 0)//dang o bien tren nen ta tang y cho no di xuong// 
//		{
//			b++;
//		}
//		else if (check == 1) //dang o bien duoi ta giam y cho no di len//
//		{
//			b--;
//		}
//		else if (check == 2) //dang o bien phai giam bien x cho no di qua trai
//		{
//			a--;
//		}
//		else if (check == 3) //dang o bien trai tang bien x cho no di qua phai
//		{
//			a++;
//		}
//		 kiểm tra biên 
//		if (b == 28)     check = 1;
//		else if (b == 0) check = 0;
//		else if (a == 0) check = 3;
//		else if (a == 100)check == 2;
//		Sleep(200);
//	}
	topofthewall();
	belowofthewall();
	leftofthewall();
	rightofthewall();
	
	return 0;
}
void topofthewall() {
	int x = 10, y = 1;
	while (x < 100) {
		gotoXY(x, y);
		cout << "+";
		x++;
	}

}
void belowofthewall() {
	int x = 10, y = 26;
	while (x < 100) {
		gotoXY(x, y);
		cout << "+";
		x++;
	}
}
void leftofthewall() {
	int x = 10, y = 1;
	while (y < 26) {
		gotoXY(x, y);
		cout << "+";
		y++;
	}
}
void rightofthewall() {
	int x = 100; y = 1;
	while (y < 26) {
		gotoXY(x, y);
		cout << "+";
		y++;
	}
}