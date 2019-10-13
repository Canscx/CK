	
const float bpm = 220; //bpm = beats per min, changable
 
void dura(int x)
{ int dura[] = {240000/bpm,120000/bpm,60000/bpm,30000/bpm,15000/bpm,7500/bpm,3750/bpm};
  delay(dura[x-1]);
  rest(9);
  delay(50);
}
 
void durac(int x)
{ int durac[] = {240000/bpm,120000/bpm,60000/bpm,30000/bpm,15000/bpm,7500/bpm,3750/bpm};
  delay(durac[x-1]);
 }
 
void withdot(int x)
{
  durac[x];
  dura[x+1];
}
 
void do_ut(int pin,int x)
{ int C[] = {33,65,131,262,523,1047,2093};
  tone(pin,C[x-1]);}
 
void do_up(int pin,int x)
{ int CU[] = {35,69,139,277,554,1109,2217};
  tone(pin,CU[x-1]);}
 
void re_dw(int pin,int x)
{ int DD[] = {35,69,139,277,554,1109,2217};
  tone(pin,DD[x-1]);}
 
void re(int pin,int x)
{ int D[] = {37,73,147,294,587,1175,2349};
  tone(pin,D[x-1]);}
 
void re_up(int pin,int x)
{ int DU[] = {39,78,156,311,622,1245,2489};
  tone(pin,DU[x-1]);}
 
void mi_dw(int pin,int x)
{ int ED[] = {39,78,156,311,622,1245,2489};
  tone(pin,ED[x-1]);}
 
void mi(int pin,int x)
{ int E[] = {41,82,165,330,659,1319,2637};
  tone(pin,E[x-1]);}
 
void fa(int pin,int x)
{ int F[] = {44,87,175,349,698,1397,2794};
  tone(pin,F[x-1]);}
 
void fa_up(int pin,int x)
{ int FU[] = {46,93,185,370,740,1480,2960};
  tone(pin,FU[x-1]);}
 
void sol_dw(int pin,int x)
{ int GD[] = {46,93,185,370,740,1480,2960};
  tone(pin,GD[x-1]);}
 
void sol(int pin,int x)
{ int G[] = {49,98,196,392,784,1568,3136};
  tone(pin,G[x-1]);}
 
void sol_up(int pin,int x)
{ int GU[] = {52,104,208,415,831,1661,3322};
  tone(pin,GU[x-1]);}
 
void la_dw(int pin,int x)
{ int AD[] = {52,104,208,415,831,1661,3322};
  tone(pin,AD[x-1]);}
 
void la(int pin,int x)
{ int A[] = {55,110,220,440,880,1760,3520};
  tone(pin,A[x-1]);}
 
void la_up(int pin,int x)
{ int AU[] = {58,117,233,466,932,1865,3729};
  tone(pin,AU[x-1]);}
 
void si_dw(int pin,int x)
{ int BD[] = {58,117,233,466,932,1865,3729};
  tone(pin,BD[x-1]);}
 
void si(int pin,int x)
{ int B[] = {62,123,247,494,988,1976,3951};
  tone(pin,B[x-1]);}
 
void rest(int pin)
{ 
  tone(pin, 0);
 }
 
void setup()
{
/* Attention:
 * whole = 1;
 * half = 2;
 * quarter = 3;
 * eighth = 4;
 * sixteenth = 5;
 * thirtysecond = 6;
 * sixtyforth = 7;
 */
}
 
void loop()
{
  int pin = 9;
    
/* Here's an example:
 * do_ut(pin,4); dura(3);
 * do_ut(pin,4); dura(3);
 * sol(pin,4);   dura(3);
 * sol(pin,4);   dura(3);  
 * la(pin,4);    dura(3);
 * la(pin,4);    dura(3);  
 * sol(pin,4);   dura(2);
 * rest(pin);
 * delay(50);
 */
 
  la(pin,4);    dura(4);
  rest(pin);    dura(4);
  la(pin,4);    dura(4);
  rest(pin);    dura(4);
  re(pin,4);    dura(4);
  do_ut(pin,4); dura(4);
  
  re(pin,4);    dura(4);
  do_ut(pin,4); dura(4);
  rest(pin);    dura(4);
  mi(pin,4);    dura(4);
  rest(pin);    dura(4);
  mi(pin,4);    dura(4);
  re(pin,4);    dura(4);
  do_ut(pin,4); dura(4);
 
  re(pin,4);    dura(3);
  re(pin,4);    dura(4);
  do_ut(pin,4); dura(4);
  re(pin,4);    dura(3);
  re(pin,4);    dura(4);
  do_ut(pin,4); dura(4);
 
  re(pin,4);    dura(4);
  mi(pin,4);    dura(4);
  rest(pin);    dura(4);
  sol(pin,4);   dura(4);
  rest(pin);    dura(4);
  re(pin,4);    dura(4);
  rest(pin);    dura(4);
  mi(pin,4);    dura(4);
 
  rest(pin);    dura(3);
  la(pin,4);    dura(4);
  rest(pin);    dura(4);
  la(pin,4);    dura(4);
  rest(pin);    dura(4);
  re(pin,4);    dura(4);
  do_ut(pin,4); dura(4);
 
  re(pin,4);    dura(4);
  mi(pin,4);    dura(4);
  sol(pin,4);   dura(4);
  mi(pin,4);    dura(4);
  rest(pin);    dura(4);
  mi(pin,4);    dura(4);
  re(pin,4);    dura(4);
  do_ut(pin,4); dura(4);
 
  re(pin,4);    dura(3);
  re(pin,4);    dura(4);
  do_ut(pin,4); dura(4);
  re(pin,4);    dura(3);
  re(pin,4);    dura(4);
  do_ut(pin,4); dura(4);
 
  mi(pin,4);    dura(4);
  re(pin,4);    dura(4);
  rest(pin);    dura(4);
  la(pin,3);    dura(4);
  rest(pin);    dura(4);
  sol(pin,3);   dura(4);
  rest(pin);    dura(4);
  la(pin,3);    dura(4);
 
  rest(pin);    dura(3);
  la(pin,4);    dura(4);
  rest(pin);    dura(4);
  la(pin,4);    dura(4);
  rest(pin);    dura(4);
  re(pin,4);    dura(4);
  do_ut(pin,4); dura(4);
  
  re(pin,4);    dura(4);
  do_ut(pin,4); dura(4);
  rest(pin);    dura(4);
  mi(pin,4);    dura(4);
  rest(pin);    dura(4);
  mi(pin,4);    dura(4);
  re(pin,4);    dura(4);
  do_ut(pin,4); dura(4);
 
  re(pin,4);    dura(3);
  re(pin,4);    dura(4);
  do_ut(pin,4); dura(4);
  re(pin,4);    dura(3);
  re(pin,4);    dura(4);
  do_ut(pin,4); dura(4);
 
  re(pin,4);    dura(4);
  mi(pin,4);    dura(4);
  rest(pin);    dura(4);
  sol(pin,4);   dura(4);
  rest(pin);    dura(4);
  re(pin,4);    dura(4);
  rest(pin);    dura(4);
  mi(pin,4);    dura(4);
 
  rest(pin);    dura(3);
  la(pin,4);    dura(4);
  rest(pin);    dura(4);
  la(pin,4);    dura(4);
  rest(pin);    dura(4);
  re(pin,4);    dura(4);
  do_ut(pin,4); dura(4);
 
  re(pin,4);    dura(4);
  mi(pin,4);    dura(4);
  sol(pin,4);   dura(4);
  mi(pin,4);    dura(4);
  rest(pin);    dura(4);
  mi(pin,4);    dura(4);
  re(pin,4);    dura(4);
  do_ut(pin,4); dura(4);
 
  re(pin,4);    dura(3);
  re(pin,4);    dura(4);
  do_ut(pin,4); dura(4);
  re(pin,4);    dura(3);
  re(pin,4);    dura(4);
  do_ut(pin,4); dura(4);
 
  mi(pin,4);    dura(4);
  re(pin,4);    dura(4);
  rest(pin);    dura(4);
  la(pin,3);    dura(4);
  rest(pin);    dura(4);
  sol(pin,3);   dura(4);
  rest(pin);    dura(4);
  la(pin,3);    dura(4);
  
  rest(pin);    dura(3);
  do_ut(pin,4); dura(3); withdot(3);
  si(pin,3);    dura(3); withdot(3);
  la(pin,3);    dura(3);
 
  la(pin,3);    dura(4);
  sol(pin,3);   dura(4);
  rest(pin);    dura(4);
  la(pin,3);    dura(4);
  rest(pin);    dura(4);
  sol(pin,3);   dura(4);
  la(pin,3);    dura(3);
 
  la(pin,3);    dura(4);
  sol(pin,3);   dura(4);
  rest(pin);    dura(4);
  la(pin,3);    dura(4);
  sol(pin,3);   dura(4);
  rest(pin);    dura(4);
  la(pin,3);    dura(4);
  sol(pin,3);   dura(4);
 
  rest(pin);    dura(4);                  // Here has a little different!
  la(pin,3);    dura(4);
  sol(pin,3);   dura(4);
  rest(pin);    dura(4);
  la(pin,3);    dura(3);  withdot(3);
  do_ut(pin,4); dura(3);  withdot(3);
  re(pin,4);    dura(4);  withdot(4);
 
  mi(pin,4);    dura(4);                 // To HERE!
  re(pin,4);    dura(4);
  rest(pin);    dura(4);
  mi(pin,4);    dura(4);
  re(pin,4);    dura(4);
  rest(pin);    dura(4);
  re(pin,4);    dura(4);
  mi(pin,4);    durac(4);
 
  mi(pin,4);    dura(2);
  rest(pin);    dura(3);
  mi(pin,3);    dura(4);
  sol(pin,3);   dura(4);
 
  la(pin,3);    dura(3);  withdot(3);
  sol(pin,3);   dura(3);  withdot(3);
  mi(pin,4);    dura(4);  withdot(4);
  rest(pin);    dura(4);
  re(pin,4);    dura(4);
  do_ut(pin,4); dura(4);
  re(pin,4);    dura(4);
 
  mi(pin,4);    dura(4);
  sol(pin,4);   dura(4);
  la(pin,4);    dura(4);
  mi(pin,4);    dura(4);
  rest(pin);    dura(4);
  mi(pin,4);    dura(4);
  re(pin,4);    dura(4);
  do_ut(pin,4); dura(4);
 
  re(pin,4);    dura(3);  withdot(3);
  mi(pin,4);    dura(3);  withdot(3);
  la(pin,3);    dura(4);  withdot(4);
  rest(pin);    dura(4);
  mi(pin,4);    dura(4);
  re(pin,4);    dura(4);
  do_ut(pin,4); dura(4);
 
  re(pin,4);    dura(3);  withdot(3);
  mi(pin,4);    dura(3);  withdot(3);
  sol(pin,4);   dura(4);  withdot(4);
  re(pin,4);    dura(4);
  do_ut(pin,4); dura(4);
  la(pin,3);    dura(4);
  do_ut(pin,4); dura(4);
 
  re(pin,4);    dura(3);  withdot(3);
  do_ut(pin,4); dura(3);  withdot(3);
  mi(pin,4);    dura(4);  withdot(4);
  rest(pin);    dura(4);
  re(pin,4);    dura(4);
  do_ut(pin,4); dura(4);
  re(pin,4);    dura(4);
 
  mi(pin,4);    dura(4);
  sol(pin,4);   dura(4);
  la(pin,4);    dura(4);
  mi(pin,4);    dura(4);
  rest(pin);    dura(4);
  mi(pin,4);    dura(4);
  re(pin,4);    dura(4);
  do_ut(pin,4); dura(4);
 
  re(pin,4);    dura(3);  withdot(3);
  do_ut(pin,4); dura(3);  withdot(3);
  re(pin,4);    dura(4);  withdot(4);
  re(pin,4);    dura(3);  withdot(3);
  do_ut(pin,4); dura(3);  withdot(3);
  re(pin,4);    dura(4);  withdot(4);
 
  re(pin,4);    dura(4);
  do_ut(pin,4); dura(4);
  re(pin,4);    dura(4);
  mi(pin,4);    dura(4);
  re(pin,4);    dura(4);
  do_ut(pin,4); dura(4);
  la(pin,3);    dura(4);
  do_ut(pin,4); dura(4);
  
  re(pin,4);    dura(3);  withdot(3);
  do_ut(pin,4); dura(3);  withdot(3);
  mi(pin,4);    dura(4);  withdot(4);
  rest(pin);    dura(4);
  re(pin,4);    dura(4);
  do_ut(pin,4); dura(4);
  re(pin,4);    dura(4);
 
  mi(pin,4);    dura(4);
  sol(pin,4);   dura(4);
  la(pin,4);    dura(4);
  mi(pin,4);    dura(4);
  rest(pin);    dura(4);
  mi(pin,4);    dura(4);
  re(pin,4);    dura(4);
  do_ut(pin,4); dura(4);
 
  re(pin,4);    dura(3);  withdot(3);
  mi(pin,4);    dura(3);  withdot(3);
  la(pin,3);    dura(4);  withdot(4);
  rest(pin);    dura(4);
  mi(pin,4);    dura(4);
  re(pin,4);    dura(4);
  do_ut(pin,4); dura(4);
 
  re(pin,4);    dura(3);  withdot(3);
  mi(pin,4);    dura(3);  withdot(3);
  sol(pin,4);   dura(4);  withdot(4);
  re(pin,4);    dura(4);
  do_ut(pin,4); dura(4);
  la(pin,3);    dura(4);
  do_ut(pin,4); dura(4);
 
  re(pin,4);    dura(3);  withdot(3);
  do_ut(pin,4); dura(3);  withdot(3);
  mi(pin,4);    dura(4);  withdot(4);
  rest(pin);    dura(4);
  re(pin,4);    dura(4);
  do_ut(pin,4); dura(4);
  re(pin,4);    dura(4);
 
  mi(pin,4);    dura(4);
  sol(pin,4);   dura(4);
  la(pin,4);    dura(4);
  mi(pin,4);    dura(4);
  rest(pin);    dura(4);
  mi(pin,4);    dura(4);
  re(pin,4);    dura(4);
  do_ut(pin,4); dura(4);
 
  re(pin,4);    dura(3);  withdot(3);
  do_ut(pin,4); dura(3);  withdot(3);
  re(pin,4);    dura(4);  withdot(4);
  re(pin,4);    dura(3);  withdot(3);
  do_ut(pin,4); dura(3);  withdot(3);
  re(pin,4);    dura(4);  withdot(4);
 
  re(pin,4);    dura(4);
  do_ut(pin,4); dura(4);
  re(pin,4);    dura(4);
  mi(pin,4);    dura(4);
  re(pin,4);    dura(4);
  do_ut(pin,4); dura(4);
  do_ut(pin,4); dura(4);
  sol(pin,3);   dura(4);
 
  sol(pin,3);   durac(4);
  la(pin,3);    dura(1); 
 
  rest(9);
  delay(1000);
}
