#pragma once

#include "D2DFramework.h"
#include "BitmapManager.h"

class Actor
{
protected:
	D2DFramework* mpFramework; // weak ptró�� ���� ��. new�� delete�ϸ� �� ��

	ID2D1Bitmap* mpBitmap;

	float mX;
	float mY;
	float mOpacity;

public:
	Actor() = delete; // �⺻�����ڰ� ������
	Actor(D2DFramework* pFramework, LPCWSTR filename);
	Actor(D2DFramework* pFramework, LPCWSTR filename, float x, float y, float opacity = 1.0f);

	virtual ~Actor();

private:
	void Draw(float x, float y, float opacity = 1.0f);

public:
	virtual void Draw(); // �� ���� ���� ���°� ����(?)

	
};

