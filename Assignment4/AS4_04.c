//안의성 / 22200422
//포커 게임 판독 프로그램으로 5장의 카드를 입력하면 결과를 알려주는 프로그램

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5

/*prototypes*/
void read_cards(int n[], int m[]);//두개의 열을 받을 수 있는 파라매터를 추가해준다.
void analyze_hand(int n[], int m[], bool* straight, bool* flush, bool* four, bool* three, int* pairs);//포인터를 이용해 지역변수라도 함수를 통해 값을 할당 받을 수 있게 해준다.
void print_result(bool straight, bool flush, bool  four, bool three, int pairs);//출력을 할 수 있게 지역변수를 받을 수 있게 파라매터를 설정해준다.


int main(){

  //지역변수로 설정해준다.
  int num_in_rank[NUM_RANKS];
  int num_in_suit[NUM_SUITS];
  bool straight, flush, four, three;
  int pairs; /* can be 0, 1, or 2*/
  
  for(;;){
    read_cards(num_in_rank, num_in_suit); 
    analyze_hand(num_in_rank, num_in_suit,&straight, &flush, &four, &three, &pairs);
    print_result(straight, flush, four, three, pairs);
  }
 return 0;
}

void read_cards(int n[],int m[]){
 bool card_exists[NUM_RANKS][NUM_SUITS];
 char ch, rank_ch, suit_ch;
 int rank, suit;
 bool bad_card;
 int cards_read=0;
 for(rank=0;rank < NUM_RANKS; rank++){
   n[rank]=0;
   for(suit =0; suit < NUM_SUITS; suit++)
     card_exists[rank][suit]= false;
 }
 for(suit =0;suit < NUM_SUITS;suit++)
   m[suit]=0;
 while(cards_read < NUM_CARDS){
   bad_card = false;
   printf("Enter a card: ");
   rank_ch =getchar();
   switch (rank_ch){
     case '0': exit(EXIT_SUCCESS);
     case '2': rank = 0; break;
     case '3': rank = 1; break;
     case '4': rank = 2; break;
     case '5': rank = 3; break;
     case '6': rank = 4; break;
     case '7': rank = 5; break;
     case '8': rank = 6; break;
     case '9': rank = 7; break;
     case 't': case 'T': rank = 8; break;
     case 'j': case 'J': rank = 9; break;
     case 'q': case 'Q': rank = 10; break;
     case 'k': case 'K': rank = 11; break;
     case 'a': case 'A': rank = 12; break;
     default : bad_card = true;
   }
   suit_ch = getchar();
     switch (suit_ch){
     case 'c': case 'C': suit =0; break;
     case 'd': case 'D': suit =1; break;
     case 'h': case 'H': suit =2; break;
     case 's': case 'S': suit =3; break;
     default : bad_card = true;
   }
   while ((ch = getchar ())!='\n')
     if (ch != ' ') bad_card = true;
     if(bad_card)
       printf("bad card: ignored. \n");
     else if(card_exists[rank][suit])
       printf("Duplicated card; ignored\n");
     else{
       n[rank]++;
       m[suit]++;
       card_exists[rank][suit]=true;
       cards_read++;
     }
   }
}


void analyze_hand(int n[], int m[], bool* straight, bool* flush, bool* four, bool* three, int* pairs){
 int num_consec=0;
 int rank, suit;
 *straight = false;//포인터변수니 앞에 *을 붙여서 값을 변하게 만들어준다.
 *flush = false;//포인터변수니 앞에 *을 붙여서 값을 변하게 만들어준다.
 *four = false;//포인터변수니 앞에 *을 붙여서 값을 변하게 만들어준다.
 *three = false;//포인터변수니 앞에 *을 붙여서 값을 변하게 만들어준다.
 *pairs = 0;//포인터변수니 앞에 *을 붙여서 값을 변하게 만들어준다.
 // check for flush
 for(suit =0;suit<NUM_SUITS;suit++)
   if(m[suit] == NUM_CARDS)
     *flush = true;//포인터변수니 앞에 *을 붙여서 값을 변하게 만들어준다.
 // check for straight
 rank =0;
 while (n[rank]==0)rank++;
 for(;rank <NUM_RANKS && n[rank]>0;rank++)
   num_consec++;
 if(num_consec == NUM_CARDS){
   *straight =true;//포인터변수니 앞에 *을 붙여서 값을 변하게 만들어준다.
   return;
 }
 // check for 4 of a kind, 3 of a kind, and pairs
 for(rank=0;rank < NUM_RANKS;rank++){
   if(n[rank]==4) *four = true;//포인터변수니 앞에 *을 붙여서 값을 변하게 만들어준다.
   if(n[rank]==3) *three = true;//포인터변수니 앞에 *을 붙여서 값을 변하게 만들어준다.
   if(n[rank]==2) *pairs += 1;//포인터변수니 앞에 *을 붙여서 값을 변하게 만들어준다.
 }
}

void print_result(bool straight, bool flush,bool  four, bool three, int pairs){
 if(straight && flush) printf("Straight flush");
 else if(four) printf("Four of a kind");
 else if(three && pairs == 1) printf("Full house");
 else if(flush) printf("Flush");
 else if(straight) printf("Straight");
 else if(three) printf("Three of a kind");
 else if(pairs == 2) printf("Two pairs");
 else if(pairs == 1) printf("Pair");
 else printf("High card");
 printf("\n\n");
}