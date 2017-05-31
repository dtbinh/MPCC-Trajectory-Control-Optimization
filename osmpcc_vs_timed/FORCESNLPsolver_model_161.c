/* This function was automatically generated by CasADi */#ifdef __cplusplus
extern "C" {
#endif

#ifdef CODEGEN_PREFIX
  #define NAMESPACE_CONCAT(NS, ID) _NAMESPACE_CONCAT(NS, ID)
  #define _NAMESPACE_CONCAT(NS, ID) NS ## ID
  #define CASADI_PREFIX(ID) NAMESPACE_CONCAT(CODEGEN_PREFIX, ID)
#else /* CODEGEN_PREFIX */
  #define CASADI_PREFIX(ID) FORCESNLPsolver_model_161_ ## ID
#endif /* CODEGEN_PREFIX */

#include <math.h>

#include "FORCESNLPsolver/include/FORCESNLPsolver.h"

#define PRINTF printf
FORCESNLPsolver_FLOAT CASADI_PREFIX(sq)(FORCESNLPsolver_FLOAT x) { return x*x;}
#define sq(x) CASADI_PREFIX(sq)(x)

FORCESNLPsolver_FLOAT CASADI_PREFIX(sign)(FORCESNLPsolver_FLOAT x) { return x<0 ? -1 : x>0 ? 1 : x;}
#define sign(x) CASADI_PREFIX(sign)(x)

static const int CASADI_PREFIX(s0)[] = {31, 1, 0, 31, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30};
#define s0 CASADI_PREFIX(s0)
static const int CASADI_PREFIX(s1)[] = {33, 1, 0, 33, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32};
#define s1 CASADI_PREFIX(s1)
static const int CASADI_PREFIX(s2)[] = {1, 1, 0, 1, 0};
#define s2 CASADI_PREFIX(s2)
static const int CASADI_PREFIX(s3)[] = {1, 31, 0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 6, 7, 8, 9, 10, 10, 11, 12, 13, 13, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
#define s3 CASADI_PREFIX(s3)
/* evaluate_stages */
int FORCESNLPsolver_model_161(const FORCESNLPsolver_FLOAT** arg, FORCESNLPsolver_FLOAT** res) {
     FORCESNLPsolver_FLOAT a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31,a32,a33,a34,a35,a36,a37,a38,a39,a40,a41,a42,a43,a44,a45,a46,a47,a48,a49,a50,a51,a52,a53,a54,a55,a56,a57,a58;
         a0=arg[1] ? arg[1][25] : 0;
         a1=arg[0] ? arg[0][23] : 0;
         a2=(a0<=a1);
  a2=(a2*a0);
  a0=(a1<a0);
  a1=(a0*a1);
  a2=(a2+a1);
  a1=arg[1] ? arg[1][0] : 0;
         a3=(a1*a2);
         a4=arg[1] ? arg[1][1] : 0;
  a3=(a3+a4);
  a4=(a3*a2);
         a5=arg[1] ? arg[1][2] : 0;
  a4=(a4+a5);
  a5=arg[0] ? arg[0][7] : 0;
  a5=(a5-a4);
  a4=arg[1] ? arg[1][9] : 0;
         a6=(a4*a2);
         a7=arg[1] ? arg[1][10] : 0;
  a6=(a6+a7);
  a7=sq(a6);
         a8=arg[1] ? arg[1][11] : 0;
         a9=(a8*a2);
         a10=arg[1] ? arg[1][12] : 0;
  a9=(a9+a10);
  a10=sq(a9);
  a7=(a7+a10);
  a10=arg[1] ? arg[1][13] : 0;
         a11=(a10*a2);
         a12=arg[1] ? arg[1][14] : 0;
  a11=(a11+a12);
  a12=sq(a11);
  a7=(a7+a12);
  a7=sqrt(a7);
  a12=(a6/a7);
         a13=(a5*a12);
         a14=arg[1] ? arg[1][3] : 0;
         a15=(a14*a2);
         a16=arg[1] ? arg[1][4] : 0;
  a15=(a15+a16);
  a16=(a15*a2);
         a17=arg[1] ? arg[1][5] : 0;
  a16=(a16+a17);
  a17=arg[0] ? arg[0][8] : 0;
  a17=(a17-a16);
  a16=(a9/a7);
         a18=(a17*a16);
  a13=(a13+a18);
  a18=arg[1] ? arg[1][6] : 0;
         a19=(a18*a2);
         a20=arg[1] ? arg[1][7] : 0;
  a19=(a19+a20);
  a20=(a19*a2);
         a21=arg[1] ? arg[1][8] : 0;
  a20=(a20+a21);
  a21=arg[0] ? arg[0][9] : 0;
  a21=(a21-a20);
  a20=(a11/a7);
         a22=(a21*a20);
  a13=(a13+a22);
  a22=arg[1] ? arg[1][27] : 0;
         a23=(a13*a22);
         a24=(a23*a13);
         a25=(a5*a12);
         a26=(a17*a16);
  a25=(a25+a26);
  a26=(a21*a20);
  a25=(a25+a26);
  a26=(a25*a12);
  a26=(a5-a26);
         a27=sq(a26);
         a28=(a25*a16);
  a28=(a17-a28);
         a29=sq(a28);
  a27=(a27+a29);
  a29=(a25*a20);
  a29=(a21-a29);
         a30=sq(a29);
  a27=(a27+a30);
  a30=arg[1] ? arg[1][26] : 0;
  a27=(a27*a30);
  a24=(a24+a27);
  a27=arg[0] ? arg[0][10] : 0;
         a31=arg[0] ? arg[0][27] : 0;
  a27=(a27+a31);
  a31=arg[1] ? arg[1][15] : 0;
         a32=(a31*a2);
         a33=arg[1] ? arg[1][16] : 0;
  a32=(a32+a33);
  a33=(a32*a2);
         a34=arg[1] ? arg[1][17] : 0;
  a33=(a33+a34);
  a27=(a27-a33);
  a33=arg[1] ? arg[1][28] : 0;
  a34=(a27*a33);
         a35=(a34*a27);
  a24=(a24+a35);
  a35=arg[1] ? arg[1][18] : 0;
         a36=(a35*a2);
         a37=arg[1] ? arg[1][19] : 0;
  a36=(a36+a37);
  a37=(a36*a2);
         a38=arg[1] ? arg[1][20] : 0;
  a37=(a37+a38);
  a38=arg[0] ? arg[0][28] : 0;
  a38=(a38-a37);
  a37=(a38*a33);
         a39=(a37*a38);
  a24=(a24+a39);
  a39=arg[1] ? arg[1][21] : 0;
         a40=(a39*a2);
         a41=arg[1] ? arg[1][22] : 0;
  a40=(a40+a41);
         a42=(a40*a2);
         a43=arg[1] ? arg[1][23] : 0;
  a42=(a42+a43);
         a44=arg[0] ? arg[0][24] : 0;
  a44=(a44-a42);
  a42=(a39*a2);
  a42=(a42+a41);
  a42=(a42*a2);
  a42=(a42+a43);
  a43=0.;
  a42=(a43<a42);
  a41=arg[1] ? arg[1][31] : 0;
         a45=arg[1] ? arg[1][29] : 0;
  a41=(a41+a45);
  a42=(a42*a41);
  a42=(a42-a45);
  a45=(a44*a42);
  a41=(a45*a44);
  a24=(a24+a41);
  a41=arg[0] ? arg[0][19] : 0;
         a46=arg[1] ? arg[1][30] : 0;
         a47=(a41*a46);
         a48=(a47*a41);
         a49=arg[0] ? arg[0][20] : 0;
         a50=(a49*a46);
         a51=(a50*a49);
  a48=(a48+a51);
  a51=arg[0] ? arg[0][21] : 0;
         a52=(a51*a46);
         a53=(a52*a51);
  a48=(a48+a53);
  a53=arg[0] ? arg[0][22] : 0;
         a54=(a53*a46);
         a55=(a54*a53);
  a48=(a48+a55);
  a55=arg[0] ? arg[0][26] : 0;
         a56=(a55*a46);
         a57=(a56*a55);
  a48=(a48+a57);
  a24=(a24+a48);
  a48=arg[1] ? arg[1][24] : 0;
  a57=(a2-a48);
  a43=(a43<a48);
  a48=arg[1] ? arg[1][32] : 0;
  a43=(a43*a48);
  a48=(a57*a43);
         a58=(a48*a57);
  a24=(a24+a58);
  if (res[0]!=0) res[0][0]=a24;
  a26=(a26+a26);
  a26=(a26*a30);
  a29=(a29+a29);
  a29=(a29*a30);
  a24=(a20*a29);
  a28=(a28+a28);
  a28=(a28*a30);
  a30=(a16*a28);
  a24=(a24+a30);
  a30=(a12*a26);
  a24=(a24+a30);
  a30=(a12*a24);
  a30=(a26-a30);
  a22=(a22*a13);
  a23=(a23+a22);
  a22=(a12*a23);
  a30=(a30+a22);
  if (res[1]!=0) res[1][0]=a30;
  a22=(a16*a24);
  a22=(a28-a22);
  a13=(a16*a23);
  a22=(a22+a13);
  if (res[1]!=0) res[1][1]=a22;
  a13=(a20*a24);
  a13=(a29-a13);
  a58=(a20*a23);
  a13=(a13+a58);
  if (res[1]!=0) res[1][2]=a13;
  a27=(a33*a27);
  a34=(a34+a27);
  if (res[1]!=0) res[1][3]=a34;
  a41=(a46*a41);
  a47=(a47+a41);
  if (res[1]!=0) res[1][4]=a47;
  a49=(a46*a49);
  a50=(a50+a49);
  if (res[1]!=0) res[1][5]=a50;
  a51=(a46*a51);
  a52=(a52+a51);
  if (res[1]!=0) res[1][6]=a52;
  a53=(a46*a53);
  a54=(a54+a53);
  if (res[1]!=0) res[1][7]=a54;
  a43=(a43*a57);
  a48=(a48+a43);
  a42=(a42*a44);
  a45=(a45+a42);
  a40=(a40*a45);
  a48=(a48-a40);
  a40=(a2*a45);
  a39=(a39*a40);
  a48=(a48-a39);
  a33=(a33*a38);
  a37=(a37+a33);
  a36=(a36*a37);
  a48=(a48-a36);
  a36=(a2*a37);
  a35=(a35*a36);
  a48=(a48-a35);
  a32=(a32*a34);
  a48=(a48-a32);
  a32=(a2*a34);
  a31=(a31*a32);
  a48=(a48-a31);
  a19=(a19*a13);
  a48=(a48-a19);
  a13=(a2*a13);
  a18=(a18*a13);
  a48=(a48-a18);
  a15=(a15*a22);
  a48=(a48-a15);
  a22=(a2*a22);
  a14=(a14*a22);
  a48=(a48-a14);
  a14=(a21*a23);
  a29=(a25*a29);
  a21=(a21*a24);
  a29=(a29+a21);
  a14=(a14-a29);
  a29=(a14/a7);
  a11=(a11+a11);
  a20=(a20/a7);
  a20=(a20*a14);
  a16=(a16/a7);
  a14=(a17*a23);
  a28=(a25*a28);
  a17=(a17*a24);
  a28=(a28+a17);
  a14=(a14-a28);
  a16=(a16*a14);
  a20=(a20+a16);
  a12=(a12/a7);
  a23=(a5*a23);
  a25=(a25*a26);
  a5=(a5*a24);
  a25=(a25+a5);
  a23=(a23-a25);
  a12=(a12*a23);
  a20=(a20+a12);
  a12=(a7+a7);
  a20=(a20/a12);
  a11=(a11*a20);
  a29=(a29-a11);
  a10=(a10*a29);
  a48=(a48+a10);
  a14=(a14/a7);
  a9=(a9+a9);
  a9=(a9*a20);
  a14=(a14-a9);
  a8=(a8*a14);
  a48=(a48+a8);
  a23=(a23/a7);
  a6=(a6+a6);
  a6=(a6*a20);
  a23=(a23-a6);
  a4=(a4*a23);
  a48=(a48+a4);
  a3=(a3*a30);
  a48=(a48-a3);
  a2=(a2*a30);
  a1=(a1*a2);
  a48=(a48-a1);
  a0=(a0*a48);
  if (res[1]!=0) res[1][8]=a0;
  if (res[1]!=0) res[1][9]=a45;
  a46=(a46*a55);
  a56=(a56+a46);
  if (res[1]!=0) res[1][10]=a56;
  if (res[1]!=0) res[1][11]=a34;
  if (res[1]!=0) res[1][12]=a37;
  return 0;
}

int FORCESNLPsolver_model_161_init(int *f_type, int *n_in, int *n_out, int *sz_arg, int* sz_res) {
  *f_type = 1;
  *n_in = 2;
  *n_out = 2;
  *sz_arg = 2;
  *sz_res = 2;
  return 0;
}

int FORCESNLPsolver_model_161_sparsity(int i, int *nrow, int *ncol, const int **colind, const int **row) {
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

int FORCESNLPsolver_model_161_work(int *sz_iw, int *sz_w) {
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 59;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif