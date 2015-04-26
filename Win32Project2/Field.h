#pragma once
#include <Windows.h>
class Field
{
	int desk[8][8];
	COORD selected;
	int SelectedValue;
	bool IsSelected;
public:
	Field();
	void SetDesk(int k);
	void SetSelected(bool BoolValue, int k);
	COORD GetSelected();
	int GetDeskValue(int Position);
	COORD TranslateKtoIJ(int k);
	bool MovementRulesCheck(int k);
	bool AttackRulesCheck(int k);
	bool GetIsSelected();

	~Field();
};

