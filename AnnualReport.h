//AnnualReport.h
#pragma once
//����� AnnualReport
//����� �������� ������
class AnnualReport
{
private:
	PayRecord* ptrRR; // ������ �������
	ExpenseRecord* ptrER; // ������ ��������
	float expenses, pays; // ����� ������� � ��������
public:
	AnnualReport(PayRecord*, ExpenseRecord*);
	void display(); // ����������� �������� ������
};
//����� AnnualReport.h