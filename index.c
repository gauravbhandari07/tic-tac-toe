/*                                     tic tac toe                                  */

#include <stdio.h>

int choice;
char mark;
char value[9]={'1','2','3','4','5','6','7','8','9'};

void board();
int mark1(int,char);
int check_winner();

void main(){
    int player,i;
    char ch;
    do{
      player=1;
      do{
        board();
        printf("\n");
        player=(player%2)?1:2;
        
        printf("\tplayer-%d enetr your choice(1 to 9) : ",player);
        scanf("%d",&choice);
        
        if(player==1)
          mark='X';
        else if(player==2)
               mark='O';
               
         int n = mark1(choice,mark);
         i= check_winner();
        if(n==1){
         player++;
        }
        else if(n==-1){
            printf("\ninvalid choice! \nenter the choice again!");
        }
        
      }while(i == -1);
          
    board();
    
    if(i==1)
     printf("\n\t\t\t  winner = player-%d\n\t\t\t  CONGRATULATIONS!!\n",--player);
     else 
     printf("\nit's a tie !");
    
    
      printf("\n\tDo you want to continue ?\n\tenter your choice(y/n):");
      scanf(" %c",&ch);
      if(ch=='y' || ch=='Y')
      {
              value[0] = '1';
              value[1] = '2';
              value[2] = '3';
              value[3] = '4';
              value[4] = '5';
              value[5] = '6';
              value[6] = '7';
              value[7] = '8';
              value[8] = '9';
         }
           //board();
      
        
    }while(ch=='y' || ch=='Y');

}

void board(){
    printf("\n\t\t\t\tTIC-TAC-TOE\n\n");
    printf("\tPlayer-1 : X\n\tPlayer-2 : O\n\n");
    printf("\t\t\t\t   |   |   \n");
    printf("\t\t\t\t %c | %c | %c \n",value[0],value[1],value[2]);
    printf("\t\t\t\t___|___|___\n");
    printf("\t\t\t\t   |   |   \n");
    printf("\t\t\t\t %c | %c | %c \n",value[3],value[4],value[5]);
    printf("\t\t\t\t___|___|___\n");
     printf("\t\t\t\t   |   |   \n");
    printf("\t\t\t\t %c | %c | %c \n",value[6],value[7],value[8]);
    printf("\t\t\t\t   |   |   \n");
} 

int mark1(int choice , char mark){
    if(choice==1 && value[0]=='1')
         value[0]=mark;
    else if(choice==2 && value[1]=='2')
             value[1]=mark;
         else if(choice==3 && value[2]=='3')
                  value[2]=mark;
              else if(choice==4 && value[3]=='4')
                       value[3]=mark;
                   else if(choice==5 && value[4]=='5')
                            value[4]=mark;
                        else if(choice==6 && value[5]=='6')
                                 value[5]=mark;
                             else if(choice==7 && value[6]=='7')
                                     value[6]=mark;
                                  else if(choice==8 && value[7]=='8')
                                           value[7]=mark;
                                         else if(choice==9 && value[8]=='9')
                                                 value[8]=mark;
                                                else 
                                                  return -1;
    return 1;                                              
}

int check_winner(){
    
    if(value[0]==value[1] && value[1]==value[2])
       return 1;
    else    
    if(value[3]==value[4] && value[4]==value[5])
       return 1;
    else    
    if(value[6]==value[7] && value[7]==value[8])
       return 1;
    else    
    if(value[0]==value[3] && value[3]==value[6])
       return 1;
    else    
    if(value[1]==value[4] && value[4]==value[7])
       return 1;
    else    
    if(value[2]==value[5] && value[5]==value[8])
       return 1;
    else    
    if(value[0]==value[4] && value[4]==value[8])
       return 1;
    else    
    if(value[6]==value[4] && value[4]==value[2])
       return 1;
    else  
      if(value[0]!='1' && value[1]!='2' && value[2]!='3' && value[3]!='4' && value[4]!='5' && value[5]!='6' && value[7]!='8' && value[8]!='9' )
        return 0;
        else
         return -1;
    
}




