// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
// ��ı�׼�������� DLL �е������ļ��������������϶���� MATRIX_LAB_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
// �κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ
// MATRIX_LAB_API ������Ϊ�Ǵ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�

#ifdef MATRIX_LAB_EXPORTS
#define MATRIX_LAB_API __declspec(dllexport)
#else
#define MATRIX_LAB_API __declspec(dllimport)
#endif

// ���ǵ���������һ��ʾ��
// �����Ǵ� Matrix_Lab.dll ������
class MATRIX_LAB_API CMatrix_Lab {
public:
	CMatrix_Lab(void);
	// TODO:  �ڴ�������ķ�����
};

extern MATRIX_LAB_API int nMatrix_Lab;

MATRIX_LAB_API int fnMatrix_Lab(void);
