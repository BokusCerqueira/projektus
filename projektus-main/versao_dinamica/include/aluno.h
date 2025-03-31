#ifndef ALUNO_H
#define ALUNO_H

#include "tipos.h"

typedef struct MateriaCursada{
    char Codigo[MAX_CODIGO];
    double Nota;
    struct MateriaCursada *Proxima;
}MateriaCursada;

typedef struct Aluno{
    int Periodo;
    MateriaCursada *Materias;
}Aluno;

Aluno* criarAluno();
Aluno* lerHistorico();
void imprimirHistorico(Aluno *aluno);
void liberarAluno(Aluno *aluno);
void gerarAconselhamento(Aluno *aluno, MateriaPPC *lista)

#endif