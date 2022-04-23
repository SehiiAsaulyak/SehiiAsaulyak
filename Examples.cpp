#include <iostream>
#include<fstream>
#include <string>
#include<windows.h>
#include<vector>
#include<memory>
#include<algorithm>
#include<numeric>
#include<ctime>
#include<conio.h>

using namespace std;     	

void map_show(int map[3][3]) {
	system("cls");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << map[j][i] << " \t";
		}
		cout << endl << endl;
	}
}
bool game_over(int map[3][3],int var){
	int count1 = 0; int count2 = 0; int count3 = 0; int count4 = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (map[j][i] == var) count1++;
			if (map[i][j] == var) count2++;
			if (map[j][j] == var) count3++;
			if (map[2 - j][j] == 1) count4++;
		}
		if (count1 == 3 || count2 == 3 || count3 == 3 || count4 == 3) { return true; break;}
		count1 = count2= count3= count4=0;
	}
	return false;
}
void pc_step(int map[3][3]) {
	int x = 0;int y=0;
	if (map[x][y] != 2 || map[x][y] != 1) {
	cout << "Computer point:" << endl;
	Sleep(1500);
	
		do {
			x = rand() % 3;
			y = rand() % 3;
		} while (map[x][y] != 0);
		map[x][y] = 2;
	}
	else pc_step(map);
}
void human_step(int map[3][3]) {
	int x, y;
	cout << "Your point (x->,y^):" << endl;
	cin >> x >> y;
	if(map[x][y] != 1&& map[x][y] != 2)
	map[x][y] = 1;
	else {
		cout << "This point is not empty!Try again"<<endl;
		human_step(map);
	}
}
int main()
{
	int map[3][3]={0};
	srand(time(NULL));
	while (true) {
		 map_show(map);
		 human_step(map);
		 map_show(map);
		 if (game_over(map,1) == true) { cout << "You win!" << endl; break; }
		 pc_step(map);
		 map_show(map);
		 if (game_over(map,2) == true) {  cout << "You lost..." << endl; break; }
	}
	return 0;
}