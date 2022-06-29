#pragma once
#include<iostream>
using namespace std;
#include "identity.h"
#include "student.h"
#include "teacher.h"
#include "computerRoom.h"
#include <vector>
class Manager :public Identity
{
public:
	//Ĭ�Ϲ���
	Manager();
	//�вι��� ����Ա���� ����
	Manager(string name, string pwd);

	//ѡ��˵�
	virtual void operMenu();

	//����˺�
	void addPerson();
	//�鿴�˺�
	void showPerson();
	//�鿴������Ϣ
	void showComputer();
	//���ԤԼ��¼
	void cleanFile();
	//��ʼ������
	void  iniVector();
	//ѧ������
	vector<Student> vStu;
	//��ʦ����
	vector<Teacher> vTea;
	//����ظ� ������(����id,��������) ����ֵ��(true �������ظ���false����û���ظ�)
	bool checkRepeat(int id, int  type);
	vector<ComputerRoom> vCom;
	string  m_Name;
	string m_Pwd;
};