/* This function was automatically generated by CasADi */#ifdef __cplusplus
extern "C" {
#endif

#ifdef CODEGEN_PREFIX
  #define NAMESPACE_CONCAT(NS, ID) _NAMESPACE_CONCAT(NS, ID)
  #define _NAMESPACE_CONCAT(NS, ID) NS ## ID
  #define CASADI_PREFIX(ID) NAMESPACE_CONCAT(CODEGEN_PREFIX, ID)
#else /* CODEGEN_PREFIX */
  #define CASADI_PREFIX(ID) FORCESNLPsolver_model_11_ ## ID
#endif /* CODEGEN_PREFIX */

#include <math.h>

#include "FORCESNLPsolver/include/FORCESNLPsolver.h"

#define PRINTF printf
FORCESNLPsolver_FLOAT CASADI_PREFIX(sq)(FORCESNLPsolver_FLOAT x) { return x*x;}
#define sq(x) CASADI_PREFIX(sq)(x)

FORCESNLPsolver_FLOAT CASADI_PREFIX(sign)(FORCESNLPsolver_FLOAT x) { return x<0 ? -1 : x>0 ? 1 : x;}
#define sign(x) CASADI_PREFIX(sign)(x)

static const int CASADI_PREFIX(s0)[] = {24, 1, 0, 24, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23};
#define s0 CASADI_PREFIX(s0)
static const int CASADI_PREFIX(s1)[] = {20, 1, 0, 20, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
#define s1 CASADI_PREFIX(s1)
static const int CASADI_PREFIX(s2)[] = {1, 1, 0, 1, 0};
#define s2 CASADI_PREFIX(s2)
static const int CASADI_PREFIX(s3)[] = {1, 24, 0, 0, 0, 0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
#define s3 CASADI_PREFIX(s3)
/* evaluate_stages */
int FORCESNLPsolver_model_11(const FORCESNLPsolver_FLOAT** arg, FORCESNLPsolver_FLOAT** res) {
     FORCESNLPsolver_FLOAT a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31,a32,a33,a34,a35,a36,a37,a38,a39,a40,a41,a42,a43;
         a0=arg[0] ? arg[0][4] : 0;
         a1=arg[1] ? arg[1][0] : 0;
         a2=(a0-a1);
         a3=100000.;
  a2=(a3*a2);
  a0=(a0-a1);
  a1=(a2*a0);
         a4=arg[0] ? arg[0][5] : 0;
         a5=arg[1] ? arg[1][1] : 0;
         a6=(a4-a5);
  a6=(a3*a6);
  a4=(a4-a5);
  a5=(a6*a4);
  a1=(a1+a5);
  a5=arg[0] ? arg[0][6] : 0;
         a7=arg[1] ? arg[1][2] : 0;
         a8=(a5-a7);
  a8=(a3*a8);
  a5=(a5-a7);
  a7=(a8*a5);
  a1=(a1+a7);
  a7=arg[0] ? arg[0][7] : 0;
         a9=arg[1] ? arg[1][3] : 0;
         a10=(a7-a9);
  a10=(a3*a10);
  a7=(a7-a9);
  a9=(a10*a7);
  a1=(a1+a9);
  a9=arg[0] ? arg[0][8] : 0;
         a11=arg[1] ? arg[1][4] : 0;
         a12=(a9-a11);
         a13=1.0000000000000000e-04;
  a12=(a13*a12);
  a9=(a9-a11);
  a11=(a12*a9);
  a1=(a1+a11);
  a11=arg[0] ? arg[0][9] : 0;
         a14=arg[1] ? arg[1][5] : 0;
         a15=(a11-a14);
  a15=(a13*a15);
  a11=(a11-a14);
  a14=(a15*a11);
  a1=(a1+a14);
  a14=arg[0] ? arg[0][10] : 0;
         a16=arg[1] ? arg[1][6] : 0;
         a17=(a14-a16);
  a17=(a13*a17);
  a14=(a14-a16);
  a16=(a17*a14);
  a1=(a1+a16);
  a16=arg[0] ? arg[0][11] : 0;
         a18=arg[1] ? arg[1][7] : 0;
         a19=(a16-a18);
  a19=(a13*a19);
  a16=(a16-a18);
  a18=(a19*a16);
  a1=(a1+a18);
  a18=arg[0] ? arg[0][12] : 0;
         a20=arg[1] ? arg[1][8] : 0;
         a21=(a18-a20);
  a21=(a13*a21);
  a18=(a18-a20);
  a20=(a21*a18);
  a1=(a1+a20);
  a20=arg[0] ? arg[0][13] : 0;
         a22=arg[1] ? arg[1][9] : 0;
         a23=(a20-a22);
  a23=(a13*a23);
  a20=(a20-a22);
  a22=(a23*a20);
  a1=(a1+a22);
  a22=arg[0] ? arg[0][14] : 0;
         a24=arg[1] ? arg[1][10] : 0;
         a25=(a22-a24);
  a25=(a13*a25);
  a22=(a22-a24);
  a24=(a25*a22);
  a1=(a1+a24);
  a24=arg[0] ? arg[0][15] : 0;
         a26=arg[1] ? arg[1][11] : 0;
         a27=(a24-a26);
  a27=(a13*a27);
  a24=(a24-a26);
  a26=(a27*a24);
  a1=(a1+a26);
  a26=arg[0] ? arg[0][16] : 0;
         a28=arg[1] ? arg[1][12] : 0;
         a29=(a26-a28);
  a29=(a13*a29);
  a26=(a26-a28);
  a28=(a29*a26);
  a1=(a1+a28);
  a28=arg[0] ? arg[0][17] : 0;
         a30=arg[1] ? arg[1][13] : 0;
         a31=(a28-a30);
  a31=(a13*a31);
  a28=(a28-a30);
  a30=(a31*a28);
  a1=(a1+a30);
  a30=arg[0] ? arg[0][18] : 0;
         a32=arg[1] ? arg[1][14] : 0;
         a33=(a30-a32);
  a33=(a13*a33);
  a30=(a30-a32);
  a32=(a33*a30);
  a1=(a1+a32);
  a32=arg[0] ? arg[0][19] : 0;
         a34=arg[1] ? arg[1][15] : 0;
         a35=(a32-a34);
  a35=(a13*a35);
  a32=(a32-a34);
  a34=(a35*a32);
  a1=(a1+a34);
  a34=arg[0] ? arg[0][20] : 0;
         a36=arg[1] ? arg[1][16] : 0;
         a37=(a34-a36);
  a37=(a13*a37);
  a34=(a34-a36);
  a36=(a37*a34);
  a1=(a1+a36);
  a36=arg[0] ? arg[0][21] : 0;
         a38=arg[1] ? arg[1][17] : 0;
         a39=(a36-a38);
  a39=(a13*a39);
  a36=(a36-a38);
  a38=(a39*a36);
  a1=(a1+a38);
  a38=arg[0] ? arg[0][22] : 0;
         a40=arg[1] ? arg[1][18] : 0;
         a41=(a38-a40);
  a41=(a13*a41);
  a38=(a38-a40);
  a40=(a41*a38);
  a1=(a1+a40);
  a40=arg[0] ? arg[0][23] : 0;
         a42=arg[1] ? arg[1][19] : 0;
         a43=(a40-a42);
  a43=(a13*a43);
  a40=(a40-a42);
  a42=(a43*a40);
  a1=(a1+a42);
  if (res[0]!=0) res[0][0]=a1;
  a0=(a3*a0);
  a2=(a2+a0);
  if (res[1]!=0) res[1][0]=a2;
  a4=(a3*a4);
  a6=(a6+a4);
  if (res[1]!=0) res[1][1]=a6;
  a5=(a3*a5);
  a8=(a8+a5);
  if (res[1]!=0) res[1][2]=a8;
  a3=(a3*a7);
  a10=(a10+a3);
  if (res[1]!=0) res[1][3]=a10;
  a9=(a13*a9);
  a12=(a12+a9);
  if (res[1]!=0) res[1][4]=a12;
  a11=(a13*a11);
  a15=(a15+a11);
  if (res[1]!=0) res[1][5]=a15;
  a14=(a13*a14);
  a17=(a17+a14);
  if (res[1]!=0) res[1][6]=a17;
  a16=(a13*a16);
  a19=(a19+a16);
  if (res[1]!=0) res[1][7]=a19;
  a18=(a13*a18);
  a21=(a21+a18);
  if (res[1]!=0) res[1][8]=a21;
  a20=(a13*a20);
  a23=(a23+a20);
  if (res[1]!=0) res[1][9]=a23;
  a22=(a13*a22);
  a25=(a25+a22);
  if (res[1]!=0) res[1][10]=a25;
  a24=(a13*a24);
  a27=(a27+a24);
  if (res[1]!=0) res[1][11]=a27;
  a26=(a13*a26);
  a29=(a29+a26);
  if (res[1]!=0) res[1][12]=a29;
  a28=(a13*a28);
  a31=(a31+a28);
  if (res[1]!=0) res[1][13]=a31;
  a30=(a13*a30);
  a33=(a33+a30);
  if (res[1]!=0) res[1][14]=a33;
  a32=(a13*a32);
  a35=(a35+a32);
  if (res[1]!=0) res[1][15]=a35;
  a34=(a13*a34);
  a37=(a37+a34);
  if (res[1]!=0) res[1][16]=a37;
  a36=(a13*a36);
  a39=(a39+a36);
  if (res[1]!=0) res[1][17]=a39;
  a38=(a13*a38);
  a41=(a41+a38);
  if (res[1]!=0) res[1][18]=a41;
  a13=(a13*a40);
  a43=(a43+a13);
  if (res[1]!=0) res[1][19]=a43;
  return 0;
}

int FORCESNLPsolver_model_11_init(int *f_type, int *n_in, int *n_out, int *sz_arg, int* sz_res) {
  *f_type = 1;
  *n_in = 2;
  *n_out = 2;
  *sz_arg = 2;
  *sz_res = 2;
  return 0;
}

int FORCESNLPsolver_model_11_sparsity(int i, int *nrow, int *ncol, const int **colind, const int **row) {
  const int* s;
  switch (i) {
    case 0:
      s = s0; break;
    case 1:
      s = s1; break;
    case 2:
      s = s2; break;
    case 3:
      s = s3; break;
    default:
      return 1;
  }

  *nrow = s[0];
  *ncol = s[1];
  *colind = s + 2;
  *row = s + 2 + (*ncol + 1);
  return 0;
}

int FORCESNLPsolver_model_11_work(int *sz_iw, int *sz_w) {
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 44;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
