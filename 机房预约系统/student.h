#pragma once
#include<iostream>
#include "identity.h"
#include<vector>
#include "computerRoom.h"
using namespace  std;
//ѧ����
class Student :public Identity
{
public:
	//Ĭ�Ϲ���
	Student();
	//�вι��죨ѧ�š����������룩
	Student(int id, string name, string pwd);
	//�˵�����
	virtual void operMenu();
	//����ԤԼ
	void applyOrder();
	//�鿴�ҵ�ԤԼ
	void showMyOrder();
	//�鿴����ԤԼ
	void showAllOrder();
	//ȡ��ԤԼ
	void cancelOrder();
	//��������
	vector<ComputerRoom> vCom;
	//ѧ��ѧ��
	int m_Id;

};