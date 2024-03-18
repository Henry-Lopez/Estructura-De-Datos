#pragma once
#define MAX 20
class Matriz
{
private:
	int MAT[MAX][MAX];
	int Fil;
	int Col;
public:
	Matriz();//contructor
	~Matriz();//destructor
	//metodos que modifican o retornan los atributos
	void set_fil(int _fil);
	int get_fil();
	void set_col(int _col);
	int get_col();
	void mostrarmat(int M[MAX][MAX], int m, int n);
	void cargarmat(int M[MAX][MAX], int m, int n);
	float promedio(int M[MAX][MAX], int m, int n);
	int mayor(int M[MAX][MAX], int m, int n);

};
