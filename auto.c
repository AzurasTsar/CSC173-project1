#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOLEAN;

//helper function for c d e
int match_char(char **inp, char target) {
 while (**inp != target && **inp != '\0'){
 (*inp)++;}
 return (**inp != '\0');
}

//e
int matchPrik(char *in) {
 if(match_char(&in, 'p') &&
 match_char(&in, 'r') &&
 match_char(&in, 'i') &&
 match_char(&in, 'k')==1){
 return 1;}
 else{
 return 0;
    }
}

//alternate e
int evenAs(char *p) {
  int evenCounter=0;
   while (*p != '\0'){
    if(*p=='a'||*p=='A')
        {evenCounter++;}
        p++;
    }


int even1s(char *p) {
  int evenCounter=0;
   while (*p != '\0'){
    if(*p=='1')
        {evenCounter++;}
        p++;
    }

  if(evenCounter % 2 == 0) {
    return 1;
  } else if(evenCounter%2!=0) {
    return 0;
  }}

  //0s parity
  int even0s(char *c){
  int zeroCounter = 0;
   while (*c != '\0'){
        if(*c=='0')
        {zeroCounter++;}
        c++;
    }

  if(zeroCounter % 2 == 0) {
    return 1;
  } else if(zeroCounter%2!=0) {
    return 0;
  }}

  //d
  int even1sAnd0s(char *x){
      if(even1s(x)==1&&even0s(x)==1){
        return 1;
      }else return 0;}

//find if a string is exactly 'ab'

BOOLEAN findChar(char **a, char c) {

  if(**a == c)
  return TRUE;
  else {
    return FALSE;
  }

}

BOOLEAN onlyAB(char *p) {
  if(findChar(&p, 'a')) {
    p++;
    if(findChar(&p, 'b') ) {
      p++;
      if(findChar(&p, '\0'))
        return TRUE;
    }


  }
  return FALSE;

}

BOOLEAN startsAB(char *p) {
  if(findChar(&p, 'a')) {
    p++;
    if(findChar(&p, 'b'))
      return TRUE;
  }
  else {
    return FALSE;
  }
}

BOOLEAN even1s(char *p) {
  int evenCounter = 0;

  for(int i = 0; p[i] == '\0'; i++ ) {
    if(p[i] == '1') {

      evenCounter++;
      printf("%d",i);

    }

    //i++;


  }

  printf("Even Counter Value: %d", evenCounter);
  if(evenCounter % 2 == 0) {
    return TRUE;
  } else {
    return FALSE;
  }
}

int main() {

  //automata only ab
  /*
  printf("%d\n", onlyAB("ab"));
  printf("%d\n", onlyAB("tyab"));
  printf("%d\n", onlyAB("abholyshit"));

  //automata start with ab
  printf("Starts ab: %d\n", startsAB("ab"));
  printf("%d\n", startsAB("abstinence"));
  printf("%d\n", startsAB("lkjhasldhk"));*/

  //automata even 1s
  printf("Even 1s test: %d\n", even1s("11010"));
  printf("Even 1s test: %d\n", even1s("11110000"));
}
