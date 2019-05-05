#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
//������������ ������ �3.5
//��������� ����� exec()
//��������� ��������� ��.�����-22 �������� �.�.
int main(int argc, char *argv[], char *envp[])
{
    printf("������������ ������ �3.5\n");
    printf("��������� ����� exec()\n");
    printf("��������� ��������� ��.�����-22 �������� �.�.\n");
    printf("�������: ������������� ���������, ��������� ��� ���������� �������,\
            ������������ ����� fork() � ������ ���������� ��������� ������� � ��������,\
            ���, ����� ����������� ������� �������� �� ���������� ����� (�����) ���������.\n");
    pid_t pid;
//��� ������� ������� ������ �������� � ����� ����� ����������������� �������� �������� ��� ��������: ������ � �����
	pid = fork();//fork ���������� ����, ����� ��� �������
	//���� �������� �������������� �������� �������� ����� ����
	if (pid == 0)
        //��������� ���������, ��������� �������� � ���� ������, ��� �� ���������� ����� ���������
		execle("/bin/cat", "/bin/cat","/home/student/Desktop/lab3/lab3_4/lab3", 0, envp);
	else
        printf("This is the parent");
return 0;
}