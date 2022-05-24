#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

    char p[3][3];
    char r;
    int d;
    int s=0;

    void setup(){
         for(int i=0; i<=2; i++){
            for(int j=0; j<=2; j++){
                p[i][j] = ' ';
            }
        }
    }

    void winCheck(){
        int i;
        int j = 0;
        int x = 0;

    //Horizontal check
    for(i=0; i<=2; i++){
        if(p[i][j]== p[i][j+1] && p[i][j]== p[i][j+2]){
                 r = p[i][0];
                 break;

            }else{
                r='t';
            }

        }

    if(r=='t'){
    //Vertical check
    for(i=0; i<=2; i++){
        if(p[x][i]== p[x+1][i] && p[x][i]== p[x+2][i]){
                 r=p[x][i];
                 break;

            }else{
                r='t';
            }
          }
        }


        if(r=='t'){
        //Diagonal
        if(p[0][0]== p[1][1] &&  p[0][0]== p[2][2]){
            r=p[1][1];

         }else if(p[0][2]== p[1][1] && p[0][2]== p[2][0]){
            r=p[1][1];

         }else{
            r='t';
        }
      }

    }


    void turn(){
        int a,b;
      do{
        printf("\nFirst player enter a position: ");
        scanf("%d", &d);
        //check
        if(d==1){
            a=0;
            b=0;
        }else if(d==2){
            a=0;
            b=1;
        }else if(d==3){
            a=0;
            b=2;
        }else if(d==4){
            a=1;
            b=0;
        }else if(d==5){
            a=1;
            b=1;
        }else if(d==6){
            a=1;
            b=2;
        }else if(d==7){
            a=2;
            b=0;
        }else if(d==8){
            a=2;
            b=1;
        }else if(d==9){
            a=2;
            b=2;
        }
        //End check
        }while(p[a][b] !=' ');
        p[a][b] = 'O';
        system("cls");

        printf("*********** Tic Tac Toe **********\n");
        printf("\n             %c | %c | %c ", p[0][0], p[0][1], p[0][2]);
        printf("\n            ---|---|---");
        printf("\n             %c | %c | %c ", p[1][0], p[1][1], p[1][2]);
        printf("\n            ---|---|---");
        printf("\n             %c | %c | %c ", p[2][0], p[2][1], p[2][2]);
        printf("\n");
        printf("*********** Tic Tac Toe **********\n");

    }

    void turn2(){
        int a,b;
      do{
        printf("\nSecond player enter a position: ");
        scanf("%d", &d);
         //check
        if(d==1){
            a=0;
            b=0;
        }else if(d==2){
            a=0;
            b=1;
        }else if(d==3){
            a=0;
            b=2;
        }else if(d==4){
            a=1;
            b=0;
        }else if(d==5){
            a=1;
            b=1;
        }else if(d==6){
            a=1;
            b=2;
        }else if(d==7){
            a=2;
            b=0;
        }else if(d==8){
            a=2;
            b=1;
        }else if(d==9){
            a=2;
            b=2;
        }
        //End check
        }while(p[a][b] !=' ');
        p[a][b] = 'X';
        system("cls");

        printf("*********** Tic Tac Toe **********\n");
        printf("\n             %c | %c | %c ", p[0][0], p[0][1], p[0][2]);
        printf("\n            ---|---|---");
        printf("\n             %c | %c | %c ", p[1][0], p[1][1], p[1][2]);
        printf("\n            ---|---|---");
        printf("\n             %c | %c | %c ", p[2][0], p[2][1], p[2][2]);
        printf("\n");
        printf("*********** Tic Tac Toe **********\n");

    }

    void boardCheck(){

        s=0;
        for(int i=0; i<=2; i++){
           for(int j=0; j<=2; j++){
               if(p[i][j]==' '){
                    s++;
               }
           }
        }

    }


    int main(){
        char again;

        system("cls");
        printf("*********** Tic Tac Toe **********\n");
        setup();

        printf("\n        %c | %c | %c    1 | 2 | 3 ", p[0][0], p[0][1], p[0][2]);
        printf("\n       ---|---|---  ---|---|---");
        printf("\n        %c | %c | %c    4 | 5 | 6 ", p[1][0], p[1][1], p[1][2]);
        printf("\n       ---|---|---  ---|---|---");
        printf("\n        %c | %c | %c    7 | 8 | 9 ", p[2][0], p[2][1], p[2][2]);

        printf("\n");
        printf("\n*********** Tic Tac Toe **********\n");


    boardCheck();
      while(s != 0){
        turn();
        winCheck();
        if(r =='O' || r == 'X'){
            break;
        }
        boardCheck();

       if(s==0){
           break;
         }
        turn2();
        winCheck();
        if(r=='O' || r == 'X'){
            break;
        }


        };


        if(r == 'O'){
            printf("\nFirst player wins!\n");
        }else if(r == 'X'){
            printf("\nSecond player wins!\n");
        }else if(r == 't'){
            printf("\nIt's a tie!\n");
        }

        printf("Play again ?(y/n):");
        scanf("%s", &again);
        if(again == 'y' || again =='Y'){
            main();
        }else if(again == 'n' || again =='N'){
            printf("\nEND OF GAME");
        }

        return 0;

    }
