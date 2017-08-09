// 下列 ifdef 块是创建使从 DLL 导出更简单的
// 宏的标准方法。此 DLL 中的所有文件都是用命令行上定义的 MATRIX_LAB_EXPORTS
// 符号编译的。在使用此 DLL 的
// 任何其他项目上不应定义此符号。这样，源文件中包含此文件的任何其他项目都会将
// MATRIX_LAB_API 函数视为是从 DLL 导入的，而此 DLL 则将用此宏定义的
// 符号视为是被导出的。

#ifdef MATRIX_LAB_EXPORTS
#define MATRIX_LAB_API __declspec(dllexport)
#else
#define MATRIX_LAB_API __declspec(dllimport)
#endif

// 这是导出变量的一个示例
// 此类是从 Matrix_Lab.dll 导出的
class MATRIX_LAB_API CMatrix_Lab {
public:
	CMatrix_Lab(void);
	// TODO:  在此添加您的方法。
};

extern MATRIX_LAB_API int nMatrix_Lab;

MATRIX_LAB_API int fnMatrix_Lab(void);
